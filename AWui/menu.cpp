#include "menu.h"

// This class is responsible for handling the button pressed events and switching between the panels 

wxBEGIN_EVENT_TABLE(cMenu, wxFrame)
EVT_BUTTON(10001, cMenu::OnClicked1)
EVT_BUTTON(9999, cMenu::OnClicked2)
EVT_BUTTON(10003, cMenu::OnClicked3)
EVT_BUTTON(10004, cMenu::OnClicked4)

EVT_BUTTON(10005, cMenu::OnClicked5)
EVT_BUTTON(10006, cMenu::OnClicked6)
EVT_BUTTON(10007, cMenu::OnClicked7)
EVT_BUTTON(10008, cMenu::OnClicked8)

wxEND_EVENT_TABLE()

cMenu::cMenu():wxFrame(nullptr, wxID_ANY, "Menu", wxDefaultPosition, wxSize(640, 480))
{
	switcher = new wxBoxSizer(wxVERTICAL);
	
	p1 = new panel1(this);
	p1 -> Hide();
	switcher -> Add(p1, 1, wxGROW);

	menu_p = new menuPanel(this);
	switcher -> Add(menu_p, 1, wxGROW);
	menu_p -> Show();
	
	this -> SetSizer(switcher);
	
}

cMenu::~cMenu()
{
}

void cMenu::OnClicked1(wxCommandEvent &evt)
{
	menu_p -> Hide();
	p1 -> Show();
	
	switcher -> Layout();
	evt.Skip();
	
}

void cMenu::OnClicked2(wxCommandEvent &evt)
{
	menu_p -> Show();
	p1 -> Hide();
	
	switcher -> Layout();
	evt.Skip();
}
void cMenu::OnClicked3(wxCommandEvent &evt){}
void cMenu::OnClicked4(wxCommandEvent &evt){}

void cMenu::OnClicked5(wxCommandEvent &evt){}
void cMenu::OnClicked6(wxCommandEvent &evt){}
void cMenu::OnClicked7(wxCommandEvent &evt){}
void cMenu::OnClicked8(wxCommandEvent &evt){}

