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
	std::string title = "Chart";
	std::vector<double> values;
	
private:
	chartThread c_thread;
	void OnChartThreadEvent(wxThreadEvent &evt);
	void OnStartClicked(wxCommandEvent& evt);
	void OnPaint(wxPaintEvent& evt);

	DECLARE_EVENT_TABLE();

};