#include "integrated_button.h"

integrated_button::integrated_button(wxWindow *parent, wxPoint xy, wxWindowID ID, wxString label)
{
	button = new wxButton(parent, ID, label, xy, wxSize(100, 60), wxBU_TOP);
	txt_box = new wxTextCtrl(parent, ID, "0.00", wxPoint(xy.x+10,xy.y+30), wxSize(80,25));
}

integrated_button::~integrated_button()
{
}