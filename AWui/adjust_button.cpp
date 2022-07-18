#include "adjust_button.h"

bool back;
wxButton *btn;

adjust_button::adjust_button(wxWindow *parent, wxPoint point, wxWindowID ID, bool t_or_f)
{
	back = t_or_f;
	btn = new wxButton(parent, ID, wxEmptyString, point, button_size);
	set_arrow();
}

void adjust_button::set_arrow()
{
	if(back)
	{
		btn -> SetLabel("<-");
	}
	else 
	{
		btn -> SetLabel("->");
	}
}



adjust_button::~adjust_button()
{
}