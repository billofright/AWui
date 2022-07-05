#include "menu.h"

wxBEGIN_EVENT_TABLE(cMenu, wxFrame)
EVT_BUTTON(10001, cMenu::OnClicked1)
EVT_BUTTON(10002, cMenu::OnClicked2)
EVT_BUTTON(10003, cMenu::OnClicked3)
EVT_BUTTON(10004, cMenu::OnClicked4)

EVT_BUTTON(10005, cMenu::OnClicked5)
EVT_BUTTON(10006, cMenu::OnClicked6)
EVT_BUTTON(10007, cMenu::OnClicked7)
EVT_BUTTON(10008, cMenu::OnClicked8)

wxEND_EVENT_TABLE()

wxPanel* menuPanel;
wxPanel* panel1;

wxBoxSizer *switcher = new wxBoxSizer(wxVERTICAL);


cMenu::cMenu():wxFrame(nullptr, wxID_ANY, "Menu", wxDefaultPosition, wxSize(640, 480))
{
	menuPanel = new wxPanel(this);
	switcher -> Add(menuPanel, 1, wxGROW);
	
	panel1 = new wxPanel(this);
	panel1 -> SetBackgroundColour(wxColor(255, 255, 0));
	switcher -> Add(panel1, 1, wxGROW);
	panel1 -> Hide();
	
	wxBoxSizer *boxSizer = new wxBoxSizer(wxVERTICAL);
	
	wxGridSizer *row1 = new wxGridSizer(1, 4, 10, 10);
	wxGridSizer *row2 = new wxGridSizer(1, 4, 10, 10);
	
	btns1 = new wxButton*[4];
	btns2 = new wxButton*[4];
	
	wxPanel *panel_middle = new wxPanel(menuPanel, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
	panel_middle -> SetBackgroundColour(wxColor(200, 200, 200));
	
	for(int i = 0; i < 4; i++){
		btns1[i] = new wxButton(menuPanel, 10001 + i, "", wxDefaultPosition, wxSize(0, 75), 0, wxDefaultValidator, wxButtonNameStr);
		row1 -> Add(btns1[i], 0, wxEXPAND | wxALL);
		
		btns2[i] = new wxButton(menuPanel, 10004 + i, "", wxDefaultPosition, wxSize(0, 75), 0, wxDefaultValidator, wxButtonNameStr);
		row2 -> Add(btns2[i], 1, wxEXPAND | wxALL);

	}
	
	btns1[0] -> SetLabel("Recipe");
		
	boxSizer -> Add(row1, 0, wxEXPAND | wxALL, 10);
	boxSizer -> Add(panel_middle, 1, wxEXPAND | wxLEFT | wxRIGHT, 10);
	boxSizer -> Add(row2, 0, wxEXPAND | wxALL, 10);
	
	menuPanel -> SetSizer(boxSizer);
	menuPanel -> Layout();
	
	this -> SetSizer(switcher);
	
}

cMenu::~cMenu()
{
}

void cMenu::OnClicked1(wxCommandEvent &evt)
{
	panel1 -> Show();
	menuPanel -> Hide();
	
}

void cMenu::OnClicked2(wxCommandEvent &evt){}
void cMenu::OnClicked3(wxCommandEvent &evt){}
void cMenu::OnClicked4(wxCommandEvent &evt){}

void cMenu::OnClicked5(wxCommandEvent &evt){}
void cMenu::OnClicked6(wxCommandEvent &evt){}
void cMenu::OnClicked7(wxCommandEvent &evt){}
void cMenu::OnClicked8(wxCommandEvent &evt){}


