#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.cpp"
#include <wx/dcbuffer.h>
#include <wx/graphics.h>
#include "integrated_button.h"

class gems_sec_manager_panel : public wxPanel
{
public:
	gems_sec_manager_panel(wxWindow* parent);
	~gems_sec_manager_panel();

public:
	wxButton* helpButton = nullptr;
	wxButton* exitButton = nullptr;
	
	void OnPaint(wxPaintEvent& evt);
	
	wxButton** com_buttons = nullptr;

};
