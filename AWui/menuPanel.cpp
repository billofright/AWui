#include "menuPanel.h"

menuPanel::menuPanel(wxWindow* parent):wxPanel(parent)
{
	wxBoxSizer *boxSizer = new wxBoxSizer(wxVERTICAL);
	
	wxGridSizer *row1 = new wxGridSizer(1, 5, 10, 10);
	wxGridSizer *row2 = new wxGridSizer(1, 5, 10, 10);
	
	btns1 = new wxButton*[5];
	btns2 = new wxButton*[5];
	
	wxPanel *panel_middle = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
	panel_middle -> SetBackgroundColour(wxColor(200, 200, 200));
	
	for(int i = 0; i < 5; i++){
		btns1[i] = new wxButton(this, 10000 + i, "", wxDefaultPosition, wxSize(0, 75), 0, wxDefaultValidator, wxButtonNameStr);
		row1 -> Add(btns1[i], 0, wxEXPAND | wxALL);
		
		btns2[i] = new wxButton(this, 10005 + i, "", wxDefaultPosition, wxSize(0, 75), 0, wxDefaultValidator, wxButtonNameStr);
		row2 -> Add(btns2[i], 1, wxEXPAND | wxALL);

	}
	
	btns1[0] -> SetLabel("Recipe");
	btns1[1] -> SetLabel("Process For Engineer");
	btns1[2] -> SetLabel("Process For Production");
	btns1[3] -> SetLabel("GEM SECS II Setup");
	btns1[4] -> SetLabel("Calibration");
	
	btns2[0] -> SetLabel("Exit Demo System");
	btns2[1] -> SetLabel("Log On Network");
	btns2[2] -> SetLabel("Online Help and Manual");
	btns2[3] -> SetLabel("Diagnostics");
	btns2[4] -> SetLabel("Maintenance");

		
	boxSizer -> Add(row1, 0, wxEXPAND | wxALL, 10);
	boxSizer -> Add(panel_middle, 1, wxEXPAND | wxLEFT | wxRIGHT, 10);
	boxSizer -> Add(row2, 0, wxEXPAND | wxALL, 10);
	
	this -> SetSizer(boxSizer);
	this -> Layout();
	
}

menuPanel::~menuPanel()
{
}