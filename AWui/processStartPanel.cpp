#include "processStartPanel.h"
#include <wx/graphics.h>
#include <wx/dcbuffer.h>
#include <wx/dc.h>
#include <wx/gdicmn.h>

BEGIN_EVENT_TABLE(processStartPanel, wxPanel)
	EVT_THREAD(GUI_THREAD_EVENT, processStartPanel::OnGuiThreadEvent)
	EVT_BUTTON(10021, processStartPanel::OnStartClicked)
END_EVENT_TABLE()

processStartPanel::processStartPanel(wxWindow* parent):wxPanel(parent), m_thread(this)
{
	start = new wxButton(this, 10021, "begin", wxPoint(800, 600), wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr);
	processMonitor = new wxButton(this, 10030, "Process Monitor", wxPoint(600, 600), wxDefaultSize, 0, wxDefaultValidator, wxButtonNameStr);
	
	this -> Bind(wxEVT_PAINT, &processStartPanel::OnPaintProgress, this);
}

processStartPanel::~processStartPanel()
{
	m_thread.Delete();
}

void processStartPanel::OnStartClicked(wxCommandEvent& event)
{
	if(processStartPanel::m_thread.Create() != wxTHREAD_NO_ERROR || processStartPanel::m_thread.Run() != wxTHREAD_NO_ERROR)
	{
		wxLogError("cant create thread!");
		return;
	}
}

void processStartPanel::OnGuiThreadEvent(wxThreadEvent& event)
{
	//std::cout << "running" << std::endl;
	m_nCurrentProgress = int(((float)event.GetInt()*100)/1000);
	
	if(m_nCurrentProgress == 1000) {
		start -> SetLabel("finished");
		m_thread.Wait();
	}

    Refresh();
}

void processStartPanel::OnPaintProgress(wxPaintEvent &event)
{
	
    wxPaintDC dc(this);
	
	const wxSize& sz = dc.GetSize();
	
	if(m_thread.IsAlive())
	{
		wxPoint dotPoint = wxGetMousePosition();
		dotPoint.x = (dotPoint.x * dotPoint.x) / wxGetDisplaySize().x;
		dotPoint.y = (dotPoint.y * dotPoint.y) / wxGetDisplaySize().y;
				
		dc.SetBrush(*wxRED_BRUSH);
		dc.SetPen(wxNullPen);
		dc.DrawCircle(dotPoint, 5);
	}
	
	dc.SetPen(*wxBLACK_PEN);
	dc.SetBrush(wxNullBrush);
	dc.DrawCircle(500, 300, 100);
	
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