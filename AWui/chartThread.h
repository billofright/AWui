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
	
	std::vector<double> values;
	
private:
	wxPanel *m_frm;
	
};
