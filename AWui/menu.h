#include <wx/wx.h>

class cMenu : public wxFrame
{
public:
	cMenu();
	~cMenu();
public:
	wxButton **btns1;
	wxButton **btns2;
	
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
