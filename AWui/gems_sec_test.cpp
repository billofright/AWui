#include "gems_sec_test.h"

gems_sec_test_panel::gems_sec_test_panel(wxWindow* parent):wxPanel(parent)
{
	helpButton = new wxButton(this, 10012, "Help", wxPoint(0, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	exitButton = new wxButton(this, 10034, "Exit", wxPoint(1.1*BUTTON_SIZE_X, 0), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y), 0, wxDefaultValidator, wxButtonNameStr);
}


gems_sec_test_panel::~gems_sec_test_panel()
{
}