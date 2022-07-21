#include "processStartPanel.h"
#include <wx/graphics.h>
#include <wx/dcbuffer.h>
#include <wx/dc.h>

BEGIN_EVENT_TABLE(processStartPanel, wxPanel)
	EVT_THREAD(wxID_ANY, processStartPanel::OnGuiThreadEvent)
END_EVENT_TABLE()

processStartPanel::processStartPanel(wxWindow* parent):wxPanel(parent), m_thread(this)
{
	text = new wxTextCtrl(this, wxID_ANY, "begin", wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxTextCtrlNameStr);
	this -> Bind(wxEVT_PAINT, &processStartPanel::OnPaint, this);
}

processStartPanel::~processStartPanel()
{
	m_thread.Delete();
}

void processStartPanel::CreateAndStart()
{
	if(processStartPanel::m_thread.Create() != wxTHREAD_NO_ERROR || processStartPanel::m_thread.Run() != wxTHREAD_NO_ERROR)
	{
		wxLogError("cant create thread!");
		return;
	}
}

void processStartPanel::OnGuiThreadEvent(wxThreadEvent& event)
{
	std::cout << "running" << std::endl;
	m_nCurrentProgress = int(((float)event.GetInt()*100)/50);
	
	if(m_nCurrentProgress == 100) {
		text -> SetLabel("finished");
		m_thread.Wait();
	}

    Refresh();
}

void processStartPanel::OnPaint(wxPaintEvent &event)
{
	
	wxPaintDC dc(this);
	
	const wxSize& sz = dc.GetSize();
	
	{
		dc.DrawBitmap(m_bmp, (sz.GetWidth()-300)/2,
                             (sz.GetHeight()-300)/2);
	}
	
	dc.SetBrush(*wxRED_BRUSH);
    dc.DrawRectangle(10,10, m_nCurrentProgress*(sz.GetWidth()-20)/100,30);
    dc.SetTextForeground(*wxBLUE);
    dc.DrawText(wxString::Format("%d%%", m_nCurrentProgress),
                (sz.GetWidth()-dc.GetCharWidth()*2)/2,
                25-dc.GetCharHeight()/2);
}