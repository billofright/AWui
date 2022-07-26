#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.cpp"
#include <wx/dcbuffer.h>
#include <wx/graphics.h>
#include "integrated_button.h"

class gems_sec_test_panel : public wxPanel
{
public:
	gems_sec_test_panel(wxWindow* parent);
	~gems_sec_test_panel();

public:
	wxButton* helpButton = nullptr;
	wxButton* exitButton = nullptr;
	
	void OnPaint(wxPaintEvent& evt);
	
	wxButton* send_event = nullptr;
	integrated_button* CEID = nullptr;
	wxButton** data_send_buttons = nullptr;
	wxButton** equipment_alarm_buttons = nullptr;
	integrated_button* equipment_msg_dialogue = nullptr;
	

};
