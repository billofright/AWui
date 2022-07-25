#include <wx/wx.h>

class GUIThread : public wxThread
{
public:
	GUIThread(wxWindow *frm):wxThread(wxTHREAD_JOINABLE)
	{
		m_frm = frm;
	}
	virtual ExitCode Entry();
private:
	wxWindow *m_frm;
	

};
