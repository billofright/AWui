#include "panel1.h"

panel1::panel1(wxWindow* parent):wxPanel(parent)
{
	//text = new wxTextCtrl(this, wxID_ANY, "dfoijsdfds", wxDefaultPosition, wxSize(640, 480), wxTAB_TRAVERSAL, wxDefaultValidator, wxTextCtrlNameStr);
	this -> SetBackgroundColour(wxColor(255, 255, 0));
	backButton = new wxButton(this, 9999, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	this -> Layout();
}

panel1::~panel1()
{
}