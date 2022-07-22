#include "GUIThread.h"
#include <sys/time.h>

wxThread::ExitCode GUIThread::Entry()
{
		
	for (int i=0; i<1000 && !TestDestroy(); i++){
		wxMutexGuiEnter();
		{
			//wxCriticalSectionLocker(m_frm -> m_csBmp);
			wxMilliSleep(10);
		}
		wxMutexGuiLeave();
		
		wxThreadEvent event(wxEVT_THREAD, wxID_ANY);
		event.SetInt(i+1);
		wxQueueEvent(m_frm, event.Clone());
	}
	
	return (ExitCode) 0;
}