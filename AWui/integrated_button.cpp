#include "integrated_button.h"


wxButton *button;

integrated_button::integrated_button(wxWindow *parent, wxPoint xy, wxWindowID ID, wxString label, wxString default_num)
{
	// txt_box_point calculates textbox location relative to size of button
	button = new wxButton(parent, ID, label, xy, button_size, wxBU_TOP);
	wxPoint txt_box_point = wxPoint(xy.x + (button_size.x - text_size.x)/2, xy.y + (button_size.y-text_size.y-5));
	txt_box = new wxTextCtrl(parent, ID, default_num, txt_box_point, text_size);
}


void integrated_button::adjust_colour(wxColour background, wxColour foreground)
{
	button -> SetBackgroundColour(background);
	button -> SetForegroundColour(foreground);
}


// MAKE A FUNCTION TO ADJUST VALUE OF DEFAULT_NUM; needs to use c++ equivalent of TO-INT;

integrated_button::~integrated_button()
{
}