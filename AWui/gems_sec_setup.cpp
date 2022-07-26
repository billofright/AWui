#include "gems_sec_setup.h"

gems_sec_panel::gems_sec_panel(wxWindow* parent):wxPanel(parent)
{
	helpButton = new wxButton(this, 10012, "Help", wxPoint(SCREEN_SIZE_X-1.5*BUTTON_SIZE_X, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	exitButton = new wxButton(this, 10013, "Exit", wxPoint(SCREEN_SIZE_X-1.5*BUTTON_SIZE_X, 100), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y), 0, wxDefaultValidator, wxButtonNameStr);
	
}

gems_sec_panel::~gems_sec_panel()
{
}