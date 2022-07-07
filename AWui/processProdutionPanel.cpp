#include "processProductionPanel.h"

processProductionPanel::processProductionPanel(wxWindow* parent):wxPanel(parent)
{	
	wxBoxSizer* screenSizer = new wxBoxSizer(wxVERTICAL);
	wxGridSizer* scrollerSizer = new wxGridSizer(1, 4, 10, 10);
	
	wxPanel* p1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(100, 100));
	wxPanel* p2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(100, 100));

	backButton = new wxButton(p1, 10010, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);

	
	dirID = new wxListBox(p2, wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);
	lotID = new wxListBox(p2, wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);
	dataID = new wxListBox(p2, wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);
	recipes = new wxListBox(p2, wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);
	
	scrollerSizer -> Add(dirID, 1, wxGROW);
	scrollerSizer -> Add(lotID, 1, wxGROW);
	scrollerSizer -> Add(dataID, 1, wxGROW);
	scrollerSizer -> Add(recipes, 1, wxGROW);

	
	for(int i = 0; i < 20; i++)
	{
		dirID -> AppendString("as" + std::to_string(i));
		lotID -> AppendString("ew" + std::to_string(i));
		dataID -> AppendString("mg" + std::to_string(i));
		recipes -> AppendString("j" + std::to_string(i));

	}
	
	p1 -> SetBackgroundColour(wxColor(0, 255, 0));
	p2 -> SetBackgroundColour(wxColor(100, 200, 100));
	
	screenSizer -> Add(p1, 1, wxEXPAND | wxALL, 10);
	screenSizer -> Add(p2, 1, wxEXPAND | wxALL, 10);
	p2 -> SetSizer(scrollerSizer);

	
	this -> SetSizer(screenSizer);
	this -> Layout();
}

processProductionPanel::~processProductionPanel()
{
}