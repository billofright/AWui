#include "GUIThread.h"

wxThread::ExitCode GUIThread::Entry()
{
	
	for (int i=0; i<50 && !TestDestroy(); i++){
		wxMutexGuiEnter();
		{
			//wxCriticalSectionLocker(m_frm -> m_csBmp);
			wxMilliSleep(100);
		}
		wxMutexGuiLeave();
		
		wxThreadEvent event(wxEVT_THREAD, wxID_ANY);
		event.SetInt(i+1);
		wxQueueEvent(m_frm, event.Clone());
	}
	
	return (ExitCode) 0;
}