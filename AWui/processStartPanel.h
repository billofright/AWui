#include <wx/wx.h>
#include "GUIThread.h"
#include "GLOBAL_CONSTANTS.h"

class processStartPanel : public wxPanel
{
public:
	processStartPanel(wxWindow* parent);
	~processStartPanel();
	
	wxBitmap m_bmp;
	wxCriticalSection *m_csBmp;
	
private:
	GUIThread m_thread;
	int m_nCurrentProgress = 0;
	
public:
	void OnGuiThreadEvent(wxThreadEvent &event);
	void OnPaintProgress(wxPaintEvent& event);
	
	void CreateAndStart();
	wxButton* start = nullptr;
	wxButton* processMonitor = nullptr;
	
	void OnStartClicked(wxCommandEvent& evt);

	DECLARE_EVENT_TABLE();
};