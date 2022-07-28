#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.cpp"

class gems_sec_gemstone_panel : public wxPanel
{
public:
	gems_sec_gemstone_panel(wxWindow* parent);
	~gems_sec_gemstone_panel();

public:
	wxButton* helpButton = nullptr;
	wxButton* exitButton = nullptr;

};
