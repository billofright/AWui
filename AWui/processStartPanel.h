#include <wx/wx.h>
#include "GUIThread.h"

class processStartPanel : public wxPanel
{
public:
	processStartPanel(wxWindow* parent);
	~processStartPanel();
	
	wxBitmap m_bmp;
	wxCriticalSection m_csBmp;
	
private:
	GUIThread m_thread;
	int m_nCurrentProgress = 0;
	
public:
	void OnGuiThreadEvent(wxThreadEvent &event);
	void OnPaint(wxPaintEvent& event);
	void CreateAndStart();
	wxTextCtrl* text = nullptr;

	DECLARE_EVENT_TABLE();
};