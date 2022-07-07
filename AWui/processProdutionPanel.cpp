#include "processProductionPanel.h"

processProductionPanel::processProductionPanel(wxWindow* parent):wxPanel(parent)
{
	text = new wxTextCtrl(this, wxID_ANY, "Process for Production", wxDefaultPosition, wxSize(640, 480), wxTAB_TRAVERSAL, wxDefaultValidator, wxTextCtrlNameStr);
	text -> SetForegroundColour(wxColor(0, 0, 0));
	this -> SetBackgroundColour(wxColor(255, 255, 255));
	backButton = new wxButton(this, 10010, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	this -> Layout();
}

processProductionPanel::~processProductionPanel()
{
}