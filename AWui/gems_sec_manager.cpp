#include "gems_sec_manager.h"

gems_sec_manager_panel::gems_sec_manager_panel(wxWindow* parent):wxPanel(parent)
{
	helpButton = new wxButton(this, 10012, "Help", wxPoint(0, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	exitButton = new wxButton(this, 10035, "Exit", wxPoint(1.1*BUTTON_SIZE_X, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y), 0, wxDefaultValidator, wxButtonNameStr);

	// graphics
	this -> Bind(wxEVT_PAINT, &gems_sec_manager_panel::OnPaint, this);

}


void gems_sec_manager_panel::OnPaint(wxPaintEvent &evt)
{
	
	wxBufferedPaintDC dc(this);
	dc.Clear();
    dc.SetPen( wxPen( *wxBLACK, 2 ) );
	
	//commands
    dc.DrawRectangle(0, 1.2*BUTTON_SIZE_Y, 0.6*BUTTON_SIZE_X+4*BUTTON_SIZE_X+0.3*BUTTON_SIZE_X, 0.275*SCREEN_SIZE_Y);
	int _x = 0.6*BUTTON_SIZE_X+4*BUTTON_SIZE_X+0.4*BUTTON_SIZE_X;
	int _y = 0.275*SCREEN_SIZE_Y+1.2*BUTTON_SIZE_Y;
	int topr_x = 0;
	int topr_y = 1.2*BUTTON_SIZE_Y;
	
	com_buttons = new wxButton*[4];
	com_buttons[0] = new wxButton(this, 10012, "ENABLE\nCOMMUNICATION", wxPoint(topr_x+0.3*BUTTON_SIZE_X,topr_y+0.4*BUTTON_SIZE_Y), wxSize(2*BUTTON_SIZE_X, 1.2*BUTTON_SIZE_Y));
	com_buttons[1] = new wxButton(this, 10012, "REMOTE\nCOMMUNICATION", wxPoint(topr_x+2*BUTTON_SIZE_X+0.6*BUTTON_SIZE_X,topr_y+0.4*BUTTON_SIZE_Y), wxSize(2*BUTTON_SIZE_X, 1.2*BUTTON_SIZE_Y));
	com_buttons[2] = new wxButton(this, 10012, "RECIPE\nDOWNLOAD", wxPoint(topr_x+0.3*BUTTON_SIZE_X,topr_y+BUTTON_SIZE_Y+0.8*BUTTON_SIZE_Y), wxSize(2*BUTTON_SIZE_X, 1.2*BUTTON_SIZE_Y));
	com_buttons[3] = new wxButton(this, 10012, "RECIPE\nUPLOAD", wxPoint(topr_x+2*BUTTON_SIZE_X+0.6*BUTTON_SIZE_X,topr_y+BUTTON_SIZE_Y+0.8*BUTTON_SIZE_Y), wxSize(2*BUTTON_SIZE_X, 1.2*BUTTON_SIZE_Y));
	
	//status
	dc.DrawRectangle(_x+0.3*BUTTON_SIZE_Y, 0.5*BUTTON_SIZE_Y, (SCREEN_SIZE_X-_x)-0.3*BUTTON_SIZE_Y, 0.275*SCREEN_SIZE_Y+0.7*BUTTON_SIZE_Y);
	
	//equipment msg
	dc.DrawRectangle(0, _y+0.3*BUTTON_SIZE_Y, SCREEN_SIZE_X, 0.135*SCREEN_SIZE_Y);
	_y += 0.3*BUTTON_SIZE_Y+0.135*SCREEN_SIZE_Y;
	
	//host msg
	dc.DrawRectangle(0, _y+0.3*BUTTON_SIZE_Y, SCREEN_SIZE_X, 0.195*SCREEN_SIZE_Y);
	_y += 0.3*BUTTON_SIZE_Y+0.195*SCREEN_SIZE_Y;
	
	//gem static manager
	dc.DrawRectangle(0,_y+0.3*BUTTON_SIZE_Y, SCREEN_SIZE_X, 0.195*SCREEN_SIZE_Y);
	
}



gems_sec_manager_panel::~gems_sec_manager_panel()
{
}


