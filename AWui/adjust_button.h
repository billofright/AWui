#pragma once
#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.cpp"

class adjust_button
{
public:
	adjust_button(wxWindow *parent, wxPoint point, wxWindowID ID, bool t_or_f);
	~adjust_button();

public:
	bool back;
	void set_arrow();
	
	wxSize button_size = wxSize(BUTTON_SIZE_X*0.5, BUTTON_SIZE_Y); // half the horizontal length as x=integrated button length
};