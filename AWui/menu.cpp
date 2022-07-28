#include "menu.h"



// initialize GLOBAL variables
int SCREEN_SIZE_X = 960;
int SCREEN_SIZE_Y = 720;
int BUTTON_SIZE_X = 100;
int BUTTON_SIZE_Y = 50;

int GUI_THREAD_EVENT = 11000;
int CHART_THREAD_EVENT = 11001;





// This class is responsible for handling the button pressed events and switching between the panels 

wxBEGIN_EVENT_TABLE(cMenu, wxFrame)
EVT_BUTTON(10000, cMenu::OnClicked0)
EVT_BUTTON(10001, cMenu::OnClicked1)
EVT_BUTTON(10002, cMenu::OnClicked2)
EVT_BUTTON(10003, cMenu::OnClicked3)
EVT_BUTTON(10004, cMenu::OnClicked4)

EVT_BUTTON(10005, cMenu::OnClicked5)
EVT_BUTTON(10006, cMenu::OnClicked6)
EVT_BUTTON(10007, cMenu::OnClicked7)
EVT_BUTTON(10008, cMenu::OnClicked8)
EVT_BUTTON(10009, cMenu::OnClicked9)

EVT_BUTTON(10010, cMenu::OnClicked_P1_BACK)
EVT_BUTTON(10012, cMenu::OnClicked_PP_BACK)
EVT_BUTTON(10013, cMenu::OnClicked_GEMS_BACK)
EVT_BUTTON(10018, cMenu::OnClicked_Diag_BACK)

EVT_BUTTON(10020, cMenu::OnClicked11)

EVT_BUTTON(10030, cMenu::OnClicked_PP_PM)

wxEND_EVENT_TABLE()

cMenu::cMenu():wxFrame(nullptr, wxID_ANY, "Menu", wxDefaultPosition, wxSize(SCREEN_SIZE_X, SCREEN_SIZE_Y))
{
	switcher = new wxBoxSizer(wxVERTICAL);
	
	menu_p = new menuPanel(this);
	switcher -> Add(menu_p, 1, wxGROW);
	menu_p -> Hide();
	
	p1 = new panel1(this);
	p1 -> Hide();
	switcher -> Add(p1, 1, wxGROW);

	pp_p = new processProductionPanel(this);
	pp_p -> Hide();
	switcher -> Add(pp_p, 1, wxGROW);

	pStart = new processStartPanel(this);
	pStart -> Show();
	switcher -> Add(pStart, 1, wxGROW);
	
	pM = new processMonitor(this);
	pM -> Hide();
	switcher -> Add(pM, 1, wxGROW);
  
	diag = new diagnosticsPanel(this);
	diag -> Hide();
	switcher -> Add(diag, 1, wxGROW);
	
	gems_sec = new gems_sec_panel(this);
	gems_sec -> Hide();
	switcher -> Add(gems_sec, 1, wxGROW);
	
	this -> SetSizer(switcher);
	
}

cMenu::~cMenu()
{
}


void cMenu::OnClicked0(wxCommandEvent &evt) // recipe
{
	menu_p -> Hide();
	p1 -> Show();
	
	switcher -> Layout();
	evt.Skip();
	
}


void cMenu::OnClicked1(wxCommandEvent &evt) // process for engineer
{
	
}

void cMenu::OnClicked2(wxCommandEvent &evt) // process for production
{
	menu_p -> Hide();
	pp_p -> Show();
	
	switcher -> Layout();
	evt.Skip();	
}

void cMenu::OnClicked3(wxCommandEvent &evt) // gems
{
	menu_p -> Hide();
	gems_sec -> Show();
	switcher -> Layout();
	evt.Skip();
}
void cMenu::OnClicked4(wxCommandEvent &evt) // calibration
{
	
}

void cMenu::OnClicked5(wxCommandEvent &evt){} // exit demo system
void cMenu::OnClicked6(wxCommandEvent &evt){} // log on network

void cMenu::OnClicked7(wxCommandEvent &evt) // online help and network
{
	
}

void cMenu::OnClicked8(wxCommandEvent &evt) // diag
{
	menu_p -> Hide();
	diag -> Show();
	
	switcher -> Layout();
	evt.Skip();	
}

void cMenu::OnClicked9(wxCommandEvent &evt) // maintinence
{
	
}

void cMenu::OnClicked_P1_BACK(wxCommandEvent &evt) // needs to be renamed; back button for p1
{
	menu_p -> Show();
	p1 -> Hide();
	
	switcher -> Layout();
	evt.Skip();
}

void cMenu::OnClicked_PP_PM(wxCommandEvent& evt)
{
	pM -> Show();
	pStart -> Hide();
	
	switcher -> Layout();
	evt.Skip();
}

void cMenu::OnClicked_PP_BACK(wxCommandEvent &evt) // needs to be renamed; back button for pp panel
{
	menu_p -> Show();
	pp_p -> Hide();
	
	switcher -> Layout();
	evt.Skip();
}


void cMenu::OnClicked_Diag_BACK(wxCommandEvent &evt) // needs to be renamed; back button for diags panel
{
	menu_p -> Show();
	diag -> Hide();
	switcher -> Layout();
	evt.Skip();

}

void cMenu::OnClicked_GEMS_BACK(wxCommandEvent &evt)
{
	menu_p -> Show();
	gems_sec -> Hide();
	switcher -> Layout();
	evt.Skip();
}

void cMenu::OnClicked11(wxCommandEvent &evt) // change this name
{
	pStart -> Show();
	pp_p -> Hide();
	
	//pStart -> CreateAndStart();
	
	switcher -> Layout();
	evt.Skip();
}