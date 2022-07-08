#include <wx/wx.h>
#include "integrated_button.h"

class diagnosticsPanel : public wxPanel
{	
public:
	diagnosticsPanel(wxWindow* parent);
	~diagnosticsPanel();
	
public:
	//integrated_button **btns;
	integrated_button* btn;
	wxButton* exitButton = nullptr;
};