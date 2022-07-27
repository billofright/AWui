#include "processMonitor.h"
#include <iostream>
#include <fstream>

processMonitor::processMonitor(wxWindow* parent):wxPanel(parent)
{
//	std::ifstream data;
//	data.open("data.csv");
//	
//	while(data.good())
//	{
//		std::string line;
//		std::getline(data, line, ',');
//		std::cout << line << std::endl;
//	}
	
	text = new wxTextCtrl(this, wxID_ANY, "This is processMonitor", wxDefaultPosition, wxSize(SCREEN_SIZE_X, SCREEN_SIZE_Y), wxTAB_TRAVERSAL, wxDefaultValidator, wxTextCtrlNameStr);
	backButton = new wxButton(this, wxID_ANY, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	this -> Layout();
}

processMonitor::~processMonitor()
{
}