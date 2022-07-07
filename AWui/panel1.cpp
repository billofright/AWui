#include "panel1.h"

panel1::panel1(wxWindow* parent):wxPanel(parent)
{
	text = new wxTextCtrl(this, wxID_ANY, "This is panel 1", wxDefaultPosition, wxSize(640, 480), wxTAB_TRAVERSAL, wxDefaultValidator, wxTextCtrlNameStr);
	text -> SetForegroundColour(wxColor(0, 0, 0));
	this -> SetBackgroundColour(wxColor(255, 255, 0));
	backButton = new wxButton(this, 10009, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	this -> Layout();
}

panel1::~panel1()
{
}