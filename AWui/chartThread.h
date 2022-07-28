#include <wx/wx.h>
#include "GLOBAL_CONSTANTS.h"
#include <vector>

class chartThread : public wxThread
{
public:
	chartThread(wxPanel *frm):wxThread(wxTHREAD_JOINABLE)
	{
		m_frm = frm;
	}
	virtual ExitCode Entry();
	
private:
	wxPanel *m_frm;
	
};
