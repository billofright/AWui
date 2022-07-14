#include "diagnostics.h"

diagnosticsPanel::diagnosticsPanel(wxWindow* parent):wxPanel(parent)
{
	
	// left-top 6 buttons
	btns = new integrated_button*[6];
	
	for(int i=0; i<6; i++){
		if(i%2==0)
		{
			btns[i] = new integrated_button(this, wxPoint(0,60*i), 10012, "MAX FLOW", "5.00");
			btns[i]->adjust_colour(*wxYELLOW, *wxRED);
		}
		else
		{
			btns[i] = new integrated_button(this, wxPoint(0,60*i), 10012, "FEED BACK", "0.00");
			btns[i]->adjust_colour(*wxLIGHT_GREY, *wxBLACK);
		}
		
	}
	
	
	
	// left-top 2nd column
	adjustment_btns = new adjust_button*[6];
	
	for(int i=0; i<6; i++){
		if(i%2==0) // back arrows
		{
			adjustment_btns[i] = new adjust_button(this, wxPoint(110, 60*(i/2)), 10012, true);
		}
		else
		{
			adjustment_btns[i] = new adjust_button(this, wxPoint(110+50, 60*(i/2)), 10012, false);
		}
	}
	
	
	
	exitButton = new wxButton(this, 10011, "Exit", wxPoint(540,380), wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	this -> Layout();
}

diagnosticsPanel::~diagnosticsPanel()
{	
}