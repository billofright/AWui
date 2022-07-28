#include <wx/wx.h>
#include <chartThread.h>
#include "GLOBAL_CONSTANTS.h"

class processMonitor : public wxPanel
{
public:
	processMonitor(wxWindow* parent);
	~processMonitor();
	
	wxTextCtrl* text = nullptr;
	wxButton* backButton = nullptr;
	wxButton* start = nullptr;
	
private:
	chartThread c_thread;
	void OnChartThreadEvent(wxThreadEvent &evt);
	void OnStartClicked(wxCommandEvent& evt);
	

	DECLARE_EVENT_TABLE();

};