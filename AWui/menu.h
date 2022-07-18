#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.cpp"
#include "panel1.h"
#include "menuPanel.h"
#include "processProductionPanel.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include "processStartPanel.h"
=======
#include "diagnostics.h"
>>>>>>> 1ec7ab5ace5a6e2c26b6bfbd799ded5c124de008
=======
#include "processStartPanel.h"
#include "diagnostics.h"
>>>>>>> 8a639af3a9deb0e03eff13c475ea5582528f7131

class cMenu : public wxFrame
{
public:
	cMenu();
	~cMenu();
public:
	wxBoxSizer* switcher = nullptr;

	menuPanel *menu_p = nullptr;
	panel1* p1 = nullptr;
<<<<<<< HEAD
<<<<<<< HEAD
	processProductionPanel* pp_p = nullptr;	
	processStartPanel* pStart = nullptr;
=======
	processProductionPanel* pp_p = nullptr;
	diagnosticsPanel* diag = nullptr;
>>>>>>> 1ec7ab5ace5a6e2c26b6bfbd799ded5c124de008
=======
	processProductionPanel* pp_p = nullptr;	
	processStartPanel* pStart = nullptr;
	diagnosticsPanel* diag = nullptr;
>>>>>>> 8a639af3a9deb0e03eff13c475ea5582528f7131
	
	void OnClicked1(wxCommandEvent &evt);
	void OnClicked2(wxCommandEvent &evt);
	void OnClicked3(wxCommandEvent &evt);
	void OnClicked4(wxCommandEvent &evt);
	
	void OnClicked5(wxCommandEvent &evt);
	void OnClicked6(wxCommandEvent &evt);
	void OnClicked7(wxCommandEvent &evt);
	void OnClicked8(wxCommandEvent &evt);
	
<<<<<<< HEAD
<<<<<<< HEAD
	void OnClicked9(wxCommandEvent &evt);
	void OnClicked10(wxCommandEvent &evt);
	void OnClicked11(wxCommandEvent &evt);
=======
	void OnClicked_P1_BACK(wxCommandEvent &evt);
	void OnClicked_PP_BACK(wxCommandEvent &evt);
	void OnClicked_Diag_BACK(wxCommandEvent &evt);
>>>>>>> 1ec7ab5ace5a6e2c26b6bfbd799ded5c124de008
=======
	void OnClicked9(wxCommandEvent &evt);
	void OnClicked10(wxCommandEvent &evt);
	void OnClicked11(wxCommandEvent &evt);

	void OnClicked_P1_BACK(wxCommandEvent &evt);
	void OnClicked_PP_BACK(wxCommandEvent &evt);
	void OnClicked_Diag_BACK(wxCommandEvent &evt);
>>>>>>> 8a639af3a9deb0e03eff13c475ea5582528f7131

	
	wxDECLARE_EVENT_TABLE();
};