#include "processStartPanel.h"
#include <wx/graphics.h>
#include <wx/dcbuffer.h>
#include <wx/dc.h>


void drawLine()
{
//	for(int i = 0; i < 500; i++){
//		gc -> SetPen(*wxRED_PEN);
//		gc -> DrawRectangle(0, 0, i, i);
//		sleep(50);
//	}
}

processStartPanel::processStartPanel(wxWindow* parent):wxPanel(parent)
{
	text = new wxTextCtrl(this, wxID_ANY, "text", wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxTextCtrlNameStr);
	this -> Bind(wxEVT_PAINT, &processStartPanel::OnPaint, this);
}

processStartPanel::~processStartPanel()
{
}



void processStartPanel::OnPaint(wxPaintEvent &evt)
{
	
	wxAutoBufferedPaintDC dc(this);
	dc.Clear();
	
	wxGraphicsContext *gc = wxGraphicsContext::Create(dc);

	
	if(gc)
	{
		wxPoint circleOrigin = wxPoint(189, 200);
		wxSize circleSize = wxSize(100, 100);
		
		gc -> SetPen(*wxBLACK_PEN);
		gc -> DrawEllipse(circleOrigin.x, circleOrigin.y, circleSize.GetWidth(), circleSize.GetHeight());
	}
}