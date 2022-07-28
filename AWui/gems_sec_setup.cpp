#include "gems_sec_setup.h"





gems_sec_panel::gems_sec_panel(wxWindow* parent):wxPanel(parent)
{
	helpButton = new wxButton(this, 10012, "Help", wxPoint(0, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	exitButton = new wxButton(this, 10013, "Exit", wxPoint(1.1*BUTTON_SIZE_X, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y), 0, wxDefaultValidator, wxButtonNameStr);
	
	gem_sec_buttons = new wxButton*[3];
	gem_sec_buttons[0] = new wxButton(this, 10031, "GEM SECS II \nTEST SCREEN", wxPoint(0, 1.1*BUTTON_SIZE_Y), wxSize(1.5*BUTTON_SIZE_X,BUTTON_SIZE_Y)); // gem secs ii test screen
	gem_sec_buttons[1] = new wxButton(this, 10032, "GEM SECS II \nMANAGER\nSCREEN", wxPoint(0, 2.2*BUTTON_SIZE_Y), wxSize(1.5*BUTTON_SIZE_X,BUTTON_SIZE_Y));
	gem_sec_buttons[2] = new wxButton(this, 10033, "GEM SECS II \nGEMSTONE", wxPoint(0, 3.3*BUTTON_SIZE_Y), wxSize(1.5*BUTTON_SIZE_X,BUTTON_SIZE_Y));
	
}

gems_sec_panel::~gems_sec_panel()
{
}