#include <wx/wx.h>

class menuPanel : public wxPanel
{
public:
	menuPanel(wxWindow* parent);
	~menuPanel();
public:
	wxButton **btns1;
	wxButton **btns2;
};