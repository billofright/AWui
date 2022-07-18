#include <wx/wx.h>

class processProductionPanel : public wxPanel
{
public:
	processProductionPanel(wxWindow* parent);
	~processProductionPanel();
public:
	wxTextCtrl* text = nullptr;
	wxButton* backButton = nullptr;
	wxButton* startButton = nullptr;
	
	wxListBox* dirID = nullptr;
	wxListBox* lotID = nullptr;
	wxListBox* dataID = nullptr;
	wxListBox* recipes = nullptr;

};