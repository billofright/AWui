#include <wx/wx.h>
#include "integrated_button.h"
//#include "adjust_button.h"

class diagnosticsPanel : public wxPanel
{	
public:
	diagnosticsPanel(wxWindow* parent);
	~diagnosticsPanel();
	
public:
	integrated_button **btns;
	//adjust_button **adjustment_btns;
	integrated_button **setpt_btns;
	
	wxButton* exitButton = nullptr;
};