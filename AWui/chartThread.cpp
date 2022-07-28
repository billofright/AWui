#include "chartThread.h"
#include <iostream>
#include <wx/wfstream.h>
#include <sstream>

using namespace std;

wxThread::ExitCode chartThread::Entry()
{
	
	wxFileInputStream* data = new wxFileStream("/home/zhengming/Documents/billyuan/workspace/AWui/data.csv");
		
//	wxCriticalSectionLocker lock(m_frm -> m_csBmp);
							
	while(data -> Peek() != 0)
	{
		wxMutexGuiEnter();
		{	
			size_t buffer_size = 1;
			char* buffer = new char[buffer_size];
			string line = "";
			while(data -> Peek() != '\n')
			{
				data -> Read(buffer, buffer_size);
				line.append((string)buffer);
			}
			data -> Read(buffer, buffer_size); // read once more to skip to next line
			
			//cout << line << endl;
			
			stringstream ss(line);
			string temp;
			vector<string> split;
			
			while(getline(ss, temp, ','))
			{
				split.push_back(temp);
			}
			
			//cout << split[1] << endl;
			
			values.push_back(stod(split[1]));
			
			wxMilliSleep(100);
		}
		wxMutexGuiLeave();
		
		wxThreadEvent event(wxEVT_THREAD, CHART_THREAD_EVENT);
		wxQueueEvent(m_frm, event.Clone());
	}
	
	return (ExitCode) 0;
}