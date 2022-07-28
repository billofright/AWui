#pragma once
#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.cpp"

class integrated_button
{
public:
	integrated_button(wxWindow *parent, wxPoint xy, wxWindowID ID, wxString label, wxString default_num);
	integrated_button(wxWindow *parent, wxPoint xy, wxWindowID ID, wxString label, wxString default_num, wxSize size);
	~integrated_button();
	
public:
	wxButton* button = nullptr;
	wxTextCtrl* txt_box = nullptr;
	wxSize button_size = wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y);
	wxSize text_size = wxSize(0.8*BUTTON_SIZE_X,0.5*BUTTON_SIZE_Y-5);
	
	void adjust_colour(wxColour background, wxColour foreground);
};