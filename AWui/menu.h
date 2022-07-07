#include <wx/wx.h>
#include "panel1.h"
#include "menuPanel.h"

class cMenu : public wxFrame
{
public:
	cMenu();
	~cMenu();
public:
	wxBoxSizer* switcher = nullptr;

	panel1* p1 = nullptr;
	menuPanel *menu_p = nullptr;
	
	void OnClicked1(wxCommandEvent &evt);
	void OnClicked2(wxCommandEvent &evt);
	void OnClicked3(wxCommandEvent &evt);
	void OnClicked4(wxCommandEvent &evt);
	
	void OnClicked5(wxCommandEvent &evt);
	void OnClicked6(wxCommandEvent &evt);
	void OnClicked7(wxCommandEvent &evt);
	void OnClicked8(wxCommandEvent &evt);
	
	wxDECLARE_EVENT_TABLE();
};