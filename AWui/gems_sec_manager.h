#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.h"

class gems_sec_manager_panel : public wxPanel
{
public:
	gems_sec_manager_panel(wxWindow* parent);
	~gems_sec_manager_panel();

public:
	wxButton* helpButton = nullptr;
	wxButton* exitButton = nullptr;

};
