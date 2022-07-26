#include <wx/wx.h>


class GUIThread : public wxThread
{
public:
	GUIThread(wxPanel *frm):wxThread(wxTHREAD_JOINABLE)
	{
		m_frm = frm;
	}
	virtual ExitCode Entry();
private:
	wxPanel *m_frm;
	

};
