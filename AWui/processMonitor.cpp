#include "processMonitor.h"
#include <iostream>
#include <fstream>

BEGIN_EVENT_TABLE(processMonitor, wxPanel)
	EVT_THREAD(CHART_THREAD_EVENT, processMonitor::OnChartThreadEvent)
	EVT_BUTTON(10022, processMonitor::OnStartClicked)
END_EVENT_TABLE()

processMonitor::processMonitor(wxWindow* parent):wxPanel(parent), c_thread(this)
{
	
	text = new wxTextCtrl(this, wxID_ANY, "This is processMonitor", wxDefaultPosition, wxSize(SCREEN_SIZE_X, SCREEN_SIZE_Y), wxTAB_TRAVERSAL, wxDefaultValidator, wxTextCtrlNameStr);
	backButton = new wxButton(this, wxID_ANY, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	start = new wxButton(this, 10022, "Start", wxPoint(600, 0), wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	this -> Layout();
}

processMonitor::~processMonitor()
{
	//c_thread.Delete();
}

void processMonitor::OnChartThreadEvent(wxThreadEvent &evt)
{
	Refresh();
}

void processMonitor::OnStartClicked(wxCommandEvent &evt)
{
	if(processMonitor::c_thread.Create() != wxTHREAD_NO_ERROR || processMonitor::c_thread.Run() != wxTHREAD_NO_ERROR)
	{
		wxLogError("cant create thread!");
		return;
	}
}