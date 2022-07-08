#include <wx/wx.h>
#include "panel1.h"
#include "menuPanel.h"
#include "processProductionPanel.h"
#include "processStartPanel.h"

class cMenu : public wxFrame
{
public:
	cMenu();
	~cMenu();
public:
	wxBoxSizer* switcher = nullptr;

	menuPanel *menu_p = nullptr;
	panel1* p1 = nullptr;
	processProductionPanel* pp_p = nullptr;	
	processStartPanel* pStart = nullptr;
	
	void OnClicked1(wxCommandEvent &evt);
	void OnClicked2(wxCommandEvent &evt);
	void OnClicked3(wxCommandEvent &evt);
	void OnClicked4(wxCommandEvent &evt);
	
	void OnClicked5(wxCommandEvent &evt);
	void OnClicked6(wxCommandEvent &evt);
	void OnClicked7(wxCommandEvent &evt);
	void OnClicked8(wxCommandEvent &evt);
	
	void OnClicked9(wxCommandEvent &evt);
	void OnClicked10(wxCommandEvent &evt);
	void OnClicked11(wxCommandEvent &evt);

	
	wxDECLARE_EVENT_TABLE();
};