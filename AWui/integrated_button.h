#include <wx/wx.h>

class integrated_button
{
public:
	integrated_button(wxWindow *parent, wxPoint xy, wxWindowID ID, wxString label, wxString default_num);
	~integrated_button();
	
public:
	wxButton* button = nullptr;
	wxTextCtrl* txt_box = nullptr;
	wxSize button_size = wxSize(100, 60);
	wxSize text_size = wxSize(80,25);
	
	void adjust_colour(wxColour background, wxColour foreground);
};