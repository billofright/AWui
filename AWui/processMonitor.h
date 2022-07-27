#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.h"

class processMonitor : public wxPanel
{
public:
	processMonitor(wxWindow* parent);
	~processMonitor();
public:
	wxTextCtrl* text = nullptr;
	wxButton* backButton = nullptr;
};