#include <wx/wx.h>

class processProductionPanel : public wxPanel
{
public:
	processProductionPanel(wxWindow* parent);
	~processProductionPanel();
public:
	wxTextCtrl* text = nullptr;
	wxButton* backButton = nullptr;
};