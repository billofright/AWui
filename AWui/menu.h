#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.h"
#include "panel1.h"
#include "menuPanel.h"
#include "processProductionPanel.h"
#include "processStartPanel.h"
#include "diagnostics.h"
#include "gems_sec_setup.h"
#include "processMonitor.h"
#include "gems_sec_test.h"
#include "gems_sec_manager.h"
#include "gems_sec_gemstone.h"

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
	processMonitor* pM = nullptr;
	diagnosticsPanel* diag = nullptr;
	gems_sec_panel* gems_sec = nullptr; 
	gems_sec_test_panel* gems_sec_test = nullptr;
	gems_sec_manager_panel* gems_sec_manager = nullptr;
	gems_sec_gemstone_panel* gems_sec_gemstone = nullptr;
	
	void OnClicked0(wxCommandEvent &evt);
	void OnClicked1(wxCommandEvent &evt);
	void OnClicked2(wxCommandEvent &evt);
	void OnClicked3(wxCommandEvent &evt);
	void OnClicked4(wxCommandEvent &evt);
	
	void OnClicked5(wxCommandEvent &evt);
	void OnClicked6(wxCommandEvent &evt);
	void OnClicked7(wxCommandEvent &evt);
	void OnClicked8(wxCommandEvent &evt);
	void OnClicked9(wxCommandEvent &evt);

	void OnClicked_P1_BACK(wxCommandEvent &evt);
	void OnClicked_PP_BACK(wxCommandEvent &evt);
	void OnClicked_PP_PM(wxCommandEvent &evt);
	void OnClicked_Diag_BACK(wxCommandEvent &evt);
	void OnClicked_GEMS_BACK(wxCommandEvent &evt); 

	void OnClicked11(wxCommandEvent &evt);
	
	void OnClicked_GEMS_TEST(wxCommandEvent &evt); 
	void OnClicked_GEMS_MANAGER(wxCommandEvent &evt); 
	void OnClicked_GEMS_GEMSTONE(wxCommandEvent &evt); 
	void OnClicked_GEMS_TEST_BACK(wxCommandEvent &evt); 
	void OnClicked_GEMS_MANAGER_BACK(wxCommandEvent &evt); 
	void OnClicked_GEMS_GEMSTONE_BACK(wxCommandEvent &evt); 

	
	wxDECLARE_EVENT_TABLE();
};