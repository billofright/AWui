#include <wx/wx.h>
#include "wx/sizer.h"
#include "GLOBAL_CONSTANTS.h"

class gems_sec_panel : public wxPanel
{
public:
	gems_sec_panel(wxWindow* parent);
	~gems_sec_panel();

public:
	wxButton** gem_sec_buttons = nullptr;
	wxButton* helpButton = nullptr;
	wxButton* exitButton = nullptr;

};