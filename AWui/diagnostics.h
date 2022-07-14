#include <wx/wx.h>
#include "integrated_button.h"
#include "adjust_button.h"
#include "GLOBAL_CONSTANTS.cpp"

class diagnosticsPanel : public wxPanel
{	
public:
	diagnosticsPanel(wxWindow* parent);
	~diagnosticsPanel();
	
public:
//rightmost columns
	integrated_button **btns;
	adjust_button **adjustment_btns;
	integrated_button **setpt_btns;
//bottom buttons
	integrated_button* pressure = nullptr;
	integrated_button* EOP = nullptr;
	wxButton* vent_valve = nullptr;
	wxButton* throttle_valve_test = nullptr;
	wxButton* AF_on = nullptr;
	wxButton* main_valve_close = nullptr;
	wxButton* vacuum_leak_check = nullptr;
	wxButton* main_vacuum_off = nullptr;
	wxButton* soft_start = nullptr;
	
	wxButton* exitButton = nullptr;
};