#include "gems_sec_test.h"

gems_sec_test_panel::gems_sec_test_panel(wxWindow* parent):wxPanel(parent)
{
	helpButton = new wxButton(this, 10012, "Help", wxPoint(0, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	exitButton = new wxButton(this, 10034, "Exit", wxPoint(1.1*BUTTON_SIZE_X, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y), 0, wxDefaultValidator, wxButtonNameStr);

	// graphics!
	this -> Bind(wxEVT_PAINT, &gems_sec_test_panel::OnPaint, this);
	
	// buttons!
	send_event = new wxButton(this, 10012, "SEND\nEVENT", wxPoint(2.5*BUTTON_SIZE_X, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));;
	CEID = new integrated_button(this, wxPoint(0.6*SCREEN_SIZE_X-1.5*BUTTON_SIZE_X,0), 10012, "CEID", "61", wxSize(1.5*BUTTON_SIZE_X, BUTTON_SIZE_Y));
	
	data_send_buttons = new wxButton*[4];
	data_send_buttons[0] = new wxButton(this, 10012, "PROCESS\nDATA SEND", wxPoint(0.6*SCREEN_SIZE_X+0.33*BUTTON_SIZE_X,1.5*BUTTON_SIZE_Y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));
	data_send_buttons[1] = new wxButton(this, 10012, "S1F13\nSEND", wxPoint(0.6*SCREEN_SIZE_X+0.33*BUTTON_SIZE_X,1.5*BUTTON_SIZE_Y+0.10*SCREEN_SIZE_Y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));
	data_send_buttons[2] = new wxButton(this, 10012, "S1F1\nSEND", wxPoint(0.6*SCREEN_SIZE_X+0.33*BUTTON_SIZE_X,1.5*BUTTON_SIZE_Y+0.20*SCREEN_SIZE_Y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));
	data_send_buttons[3] = new wxButton(this, 10012, "DATE & TIME\nREQUEST", wxPoint(0.6*SCREEN_SIZE_X+0.33*BUTTON_SIZE_X,1.5*BUTTON_SIZE_Y+0.30*SCREEN_SIZE_Y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));
	
	equipment_alarm_buttons = new wxButton*[2];
	equipment_alarm_buttons[0] = new wxButton(this, 10012, "EQUIPMENT\nALARM\nTEST", wxPoint(0.12*BUTTON_SIZE_X,1.2*BUTTON_SIZE_Y+0.7*SCREEN_SIZE_Y+0.05*SCREEN_SIZE_Y), wxSize(BUTTON_SIZE_X,1.35*BUTTON_SIZE_Y));
	equipment_alarm_buttons[1] = new wxButton(this, 10012, "EQUIPMENT\nMESSAGE\nSEND", wxPoint(SCREEN_SIZE_X-1.12*BUTTON_SIZE_X,1.2*BUTTON_SIZE_Y+0.7*SCREEN_SIZE_Y+0.05*SCREEN_SIZE_Y), wxSize(BUTTON_SIZE_X,1.35*BUTTON_SIZE_Y));
	
	equipment_msg_dialogue = new integrated_button(this, wxPoint(1.15*BUTTON_SIZE_X,1.56*BUTTON_SIZE_Y+0.7*SCREEN_SIZE_Y+0.05*SCREEN_SIZE_Y), 10012, "EQUIPMENT MESSAGE DIALOGUE", " ", wxSize(SCREEN_SIZE_X-2*(1.15*BUTTON_SIZE_X), BUTTON_SIZE_Y));
}


void gems_sec_test_panel::OnPaint(wxPaintEvent &evt)
{
	wxBufferedPaintDC dc(this);
	dc.Clear();
    
    // rectangle
    //dc.SetBrush(*wxGREY_BRUSH);
    dc.SetPen( wxPen( *wxBLACK, 2 ) );
    dc.DrawRectangle(0, 1.2*BUTTON_SIZE_Y, 0.6*SCREEN_SIZE_X, 0.5*SCREEN_SIZE_Y);
	dc.DrawRectangle(0, 1.2*BUTTON_SIZE_Y+0.5*SCREEN_SIZE_Y+0.02*SCREEN_SIZE_Y, SCREEN_SIZE_X, 0.2*SCREEN_SIZE_Y);
	dc.DrawRectangle(0.01*SCREEN_SIZE_X, 1.2*BUTTON_SIZE_Y+0.5*SCREEN_SIZE_Y+0.05*SCREEN_SIZE_Y, 0.98*SCREEN_SIZE_X, 0.1575*SCREEN_SIZE_Y);
	dc.DrawRectangle(0, 1.2*BUTTON_SIZE_Y+0.7*SCREEN_SIZE_Y+0.04*SCREEN_SIZE_Y, SCREEN_SIZE_X, 1.75*BUTTON_SIZE_Y);
}


gems_sec_test_panel::~gems_sec_test_panel()
{
}