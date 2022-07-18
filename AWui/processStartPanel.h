#include <wx/wx.h>


class processStartPanel : public wxPanel
{
public:
	processStartPanel(wxWindow* parent);
	~processStartPanel();
public:
	wxTextCtrl* text = nullptr;
	void OnPaint(wxPaintEvent& evt);
	
};