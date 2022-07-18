#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.cpp"

class panel1 : public wxPanel
{
public:
	panel1(wxWindow* parent);
	~panel1();
public:
	wxTextCtrl* text = nullptr;
	wxButton* backButton = nullptr;
};