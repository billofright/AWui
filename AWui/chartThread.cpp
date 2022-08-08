
#include "chartThread.h"
#include <iostream>
#include <wx/wfstream.h>
#include <sstream>
#include <string.h>

using namespace std;

wxThread::ExitCode chartThread::Entry()
{
	
	wxFileInputStream* data = new wxFileStream("/home/zhengming/Documents/billyuan/workspace/AWui/data.csv");
	double curr;
		
//	wxCriticalSectionLocker lock(m_frm -> m_csBmp);

							
	while(data -> Peek() != 0)
	{
		vector<string> split;

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
			
//			cout << line << endl;
			
			stringstream ss(line);
			string temp;
			
			
			while(getline(ss, temp, ','))
			{
				split.push_back(temp);
			}
			
//			cout << split[1] << endl;
			
			try
			{
				curr = std::stod(split[1]);
			}
			catch(const std::invalid_argument&){}
			
			wxMilliSleep(50);
		}
		wxMutexGuiLeave();
		
		wxThreadEvent event(wxEVT_THREAD, CHART_THREAD_EVENT);
		event.SetPayload(curr);
		wxQueueEvent(m_frm, event.Clone());
	}
	
	return (ExitCode) 0;
}