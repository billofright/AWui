#include "GUIThread.h"
#include <iostream>
#include <wx/wfstream.h>

using namespace std;

wxThread::ExitCode GUIThread::Entry()
{
	
	for (int i=0; i<1000 && !TestDestroy(); i++){
		wxMutexGuiEnter();
		{
//			wxCriticalSectionLocker lock(m_frm -> m_csBmp);
									
			wxMilliSleep(10);
		}
		wxMutexGuiLeave();
		
		wxThreadEvent event(wxEVT_THREAD, GUI_THREAD_EVENT);
		event.SetInt(i+1);
		wxQueueEvent(m_frm, event.Clone());
	}
	
	return (ExitCode) 0;
}