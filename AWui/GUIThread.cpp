#include "GUIThread.h"
#include <iostream>
#include <fstream>

using namespace std;

wxThread::ExitCode GUIThread::Entry()
{
	
	ifstream data;
	data.open("data.csv");

	for (int i=0; i<1000 && !TestDestroy(); i++){
		wxMutexGuiEnter();
		{
//			wxCriticalSectionLocker lock(m_frm -> m_csBmp);
						
			string line;
			getline(data, line, ',');
			cout << line << "+" << endl;
		
			wxMilliSleep(10);
		}
		wxMutexGuiLeave();
		
		wxThreadEvent event(wxEVT_THREAD, GUI_THREAD_EVENT);
		event.SetInt(i+1);
		wxQueueEvent(m_frm, event.Clone());
	}
	
	return (ExitCode) 0;
}