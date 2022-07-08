#include "processProductionPanel.h"

processProductionPanel::processProductionPanel(wxWindow* parent):wxPanel(parent)
{	
	wxBoxSizer* screenSizer = new wxBoxSizer(wxVERTICAL);
	wxGridSizer* scrollerSizer = new wxGridSizer(4, 1, 10);
	
	wxPanel* p1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(100, 100));
	wxPanel* p2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(100, 100));

	backButton = new wxButton(p1, 10010, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);

	wxBoxSizer* scrollBoxes[4];
	wxPanel* scrollPanels[4];
	
	for(int i = 0; i < 4; i++)
	{
		scrollBoxes[i] = new wxBoxSizer(wxVERTICAL);
		scrollPanels[i] = new wxPanel(p2);
		scrollerSizer -> Add(scrollPanels[i], 1, wxGROW);
		scrollPanels[i] -> SetSizer(scrollBoxes[i]);

	}
	
	wxTextCtrl* dirTitle = new wxTextCtrl(scrollPanels[0], wxID_ANY, "Directory ID", wxDefaultPosition, wxSize(0, 40), 0, wxDefaultValidator, wxTextCtrlNameStr);
	dirID = new wxListBox(scrollPanels[0], wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);
	
	wxTextCtrl* lotTitle = new wxTextCtrl(scrollPanels[1], wxID_ANY, "Lot ID", wxDefaultPosition, wxSize(0, 40), 0, wxDefaultValidator, wxTextCtrlNameStr);	
	lotID = new wxListBox(scrollPanels[1], wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);
	
	wxTextCtrl* dataTitle = new wxTextCtrl(scrollPanels[2], wxID_ANY, "Data ID", wxDefaultPosition, wxSize(0, 40), 0, wxDefaultValidator, wxTextCtrlNameStr);
	dataID = new wxListBox(scrollPanels[2], wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);
	
	wxTextCtrl* recipesTitle = new wxTextCtrl(scrollPanels[3], wxID_ANY, "Recipe File", wxDefaultPosition, wxSize(0, 40), 0, wxDefaultValidator, wxTextCtrlNameStr);
	recipes = new wxListBox(scrollPanels[3], wxID_ANY, wxPoint(200, 200), wxSize(100, 200), 0, NULL, 0, wxDefaultValidator, wxListBoxNameStr);

//	
//	scrollerSizer -> Add(lotID, 1, wxGROW);
//	scrollerSizer -> Add(dataID, 1, wxGROW);
//	scrollerSizer -> Add(recipes, 1, wxGROW);

	
	for(int i = 0; i < 20; i++)
	{
		dirID -> AppendString("as" + std::to_string(i));
		lotID -> AppendString("ew" + std::to_string(i));
		dataID -> AppendString("mg" + std::to_string(i));
		recipes -> AppendString("j" + std::to_string(i));

	}
	
	p1 -> SetBackgroundColour(wxColor(0, 255, 0));
	p2 -> SetBackgroundColour(wxColor(100, 100, 0));
	
	screenSizer -> Add(p1, 1, wxEXPAND | wxALL, 10);
	screenSizer -> Add(p2, 1, wxEXPAND | wxALL, 10);
	p2 -> SetSizer(scrollerSizer);
	
	scrollBoxes[0] -> Add(dirTitle, 0, wxGROW);
	scrollBoxes[0] -> Add(dirID, 1, wxGROW);
	
	scrollBoxes[1] -> Add(lotTitle, 0, wxGROW);
	scrollBoxes[1] -> Add(lotID, 1, wxGROW);
	
	scrollBoxes[2] -> Add(dataTitle, 0, wxGROW);
	scrollBoxes[2] -> Add(dataID, 1, wxGROW);
	
	scrollBoxes[3] -> Add(recipesTitle, 0, wxGROW);
	scrollBoxes[3] -> Add(recipes, 1, wxGROW);
	
	
	this -> SetSizer(screenSizer);
	this -> Layout();
}

processProductionPanel::~processProductionPanel()
{
}