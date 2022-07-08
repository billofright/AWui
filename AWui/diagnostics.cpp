#include "diagnostics.h"

diagnosticsPanel::diagnosticsPanel(wxWindow* parent):wxPanel(parent)
{
	
	
	//btns = new integrated_button*[5];
	
	//text = new wxTextCtrl(this, wxID_ANY, "This is the diagnostics panel", wxDefaultPosition, wxSize(640, 480), wxTAB_TRAVERSAL, wxDefaultValidator, wxTextCtrlNameStr);
	//text -> SetForegroundColour(wxColor(0, 0, 0));
	//this -> SetBackgroundColour(wxColor(255, 255, 0));
	//
	btn = new integrated_button(this, wxDefaultPosition, 10012, "MAX FLOW");
	exitButton = new wxButton(this, 10011, "Exit", wxPoint(540,380), wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	//this -> Layout();
}

diagnosticsPanel::~diagnosticsPanel()
{	
}