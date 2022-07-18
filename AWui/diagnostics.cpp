#include "diagnostics.h"

diagnosticsPanel::diagnosticsPanel(wxWindow* parent):wxPanel(parent)
{
	
// left-top 6 buttons
	btns = new integrated_button*[6];
	
	for(int i=0; i<6; i++){
		if(i%2==0)
		{
			btns[i] = new integrated_button(this, wxPoint(0,BUTTON_SIZE_Y*i), 10012, "MAX FLOW", "5.00");
			btns[i]->adjust_colour(*wxYELLOW, *wxRED);
		}
		else
		{
			btns[i] = new integrated_button(this, wxPoint(0,BUTTON_SIZE_Y*i), 10012, "FEED BACK", "0.00");
			btns[i]->adjust_colour(*wxLIGHT_GREY, *wxBLACK);
		}
		
	}
	
	
	
	
// left-top 2nd column
	adjustment_btns = new adjust_button*[6];
	for(int i=0; i<6; i++)
	{
		if(i%2==0) // back arrows
		{
			adjustment_btns[i] = new adjust_button(this, wxPoint(1.1*BUTTON_SIZE_X, 2*BUTTON_SIZE_Y*(i/2)), 10012, true);
		}
		else
		{
			adjustment_btns[i] = new adjust_button(this, wxPoint(1.6*BUTTON_SIZE_X, 2*BUTTON_SIZE_Y*(i/2)), 10012, false);
		}
	}
	
	setpt_btns = new integrated_button*[3];
	for(int i=0; i<3; i++)
	{
		setpt_btns[i] = new integrated_button(this, wxPoint(1.1*BUTTON_SIZE_X, BUTTON_SIZE_Y+(2*BUTTON_SIZE_Y*i)), 10012, "SETPOINT", "0.00");
	}
	
	

// bottom buttons
	// TEMPORARY reference vars
	int row_one_y = 8*BUTTON_SIZE_Y;
	int row_two_y = 9.2*BUTTON_SIZE_Y;
	int row_three_y = 10.4*BUTTON_SIZE_Y;
	int column_ref = 1.1*BUTTON_SIZE_X;
	
	pressure = new integrated_button(this, wxPoint(0,row_one_y), 10012, "PRESSURE(Tr)", "0.000");
	EOP = new integrated_button(this, wxPoint(0,row_two_y), 10012, "EOP()", "0.0");
	pressure -> adjust_colour(*wxYELLOW, *wxRED);
	EOP -> adjust_colour(*wxYELLOW, *wxRED);
	
	vent_valve = new wxButton(this, 10012, "VENT VALVE", wxPoint(column_ref, row_three_y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));
	throttle_valve_test = new wxButton(this, 10012, "THROTTLE VALVE TEST", wxPoint(column_ref*2, row_one_y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));;
	AF_on = new wxButton(this, 10012, "AF ON", wxPoint(column_ref*2, row_two_y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));;
	main_valve_close = new wxButton(this, 10012, "MAIN VALVE CLOSE", wxPoint(column_ref*2, row_three_y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));;
	vacuum_leak_check = new wxButton(this, 10012, "VACCUM LEAK CHECK", wxPoint(column_ref*3, row_one_y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));;
	main_vacuum_off = new wxButton(this, 10012, "MAIN VACUUM OFF", wxPoint(column_ref*3, row_two_y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));;
	soft_start = new wxButton(this, 10012, "SOFT START", wxPoint(column_ref*3, row_three_y), wxSize(BUTTON_SIZE_X,BUTTON_SIZE_Y));;
	vent_valve -> SetBackgroundColour(*wxCYAN);
	throttle_valve_test -> SetBackgroundColour(*wxCYAN);
	AF_on -> SetBackgroundColour(*wxCYAN);
	main_valve_close -> SetBackgroundColour(*wxCYAN);
	vacuum_leak_check -> SetBackgroundColour(*wxCYAN);
	main_vacuum_off -> SetBackgroundColour(*wxCYAN);
	soft_start -> SetBackgroundColour(*wxCYAN);
	
	
// top right buttons
	chamber_door_open = new wxButton(this, 10012, "Chamber Door Open", wxPoint(column_ref*4, 0.25*BUTTON_SIZE_Y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	chamber_door_close = new wxButton(this, 10012, "Chamber Door Close", wxPoint(column_ref*4, 1.5*BUTTON_SIZE_Y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	chamber_door_open -> SetBackgroundColour(*wxCYAN);
	chamber_door_close -> SetBackgroundColour(*wxCYAN); 
	
	
	
	
	
// bottom right interface buttons
	helpButton = new wxButton(this, 10012, "Help", wxPoint(SCREEN_SIZE_X-1.5*BUTTON_SIZE_X, row_two_y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	exitButton = new wxButton(this, 10011, "Exit", wxPoint(SCREEN_SIZE_X-1.5*BUTTON_SIZE_X, row_three_y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y), 0, wxDefaultValidator, wxButtonNameStr);
	//this -> Layout();
}






diagnosticsPanel::~diagnosticsPanel()
{	
}