#include <wx/wx.h>
#include "app.h"

wxIMPLEMENT_APP(cApp);


cApp::cApp()
{
}

cApp::~cApp()
{
}


bool cApp::OnInit()
{
	m_frame1 = new cMenu();
	m_frame1 -> Show();
	
	return true;
}