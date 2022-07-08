#include <wx/wx.h>

class integrated_button
{
public:
	integrated_button(wxWindow *parent, wxPoint xy, wxWindowID ID, wxString label);
	~integrated_button();
public:
	//int x, y;
	//std::string label;
	//std::string default_text;
	wxButton* button = nullptr;
	wxTextCtrl* txt_box = nullptr;
};