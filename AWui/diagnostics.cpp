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
	chamber_door_open = new wxButton(this, 10012, "Chamber Door Open", wxPoint(4*column_ref, 0.25*BUTTON_SIZE_Y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	chamber_door_close = new wxButton(this, 10012, "Chamber Door Close", wxPoint(4*column_ref, 1.5*BUTTON_SIZE_Y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	chamber_door_open -> SetBackgroundColour(*wxCYAN);
	chamber_door_close -> SetBackgroundColour(*wxCYAN); 
	
	
// graphics!
	this -> Bind(wxEVT_PAINT, &diagnosticsPanel::OnPaint, this);
	
	
// bottom right interface buttons
	thermocouple = new integrated_button(this, wxPoint(SCREEN_SIZE_X-3.15*BUTTON_SIZE_X, row_two_y), 10012, "THERMOCOUPLE(°C)", "0.0", wxSize(1.5*BUTTON_SIZE_X, BUTTON_SIZE_Y));
	helpButton = new wxButton(this, 10012, "Help", wxPoint(SCREEN_SIZE_X-1.5*BUTTON_SIZE_X, row_two_y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y));
	exitButton = new wxButton(this, 10018, "Exit", wxPoint(SCREEN_SIZE_X-1.5*BUTTON_SIZE_X, row_three_y), wxSize(BUTTON_SIZE_X, BUTTON_SIZE_Y), 0, wxDefaultValidator, wxButtonNameStr);
	this -> Layout();
}



void diagnosticsPanel::OnPaint(wxPaintEvent &evt)
{
	
	int column_ref = 1.1*BUTTON_SIZE_X;
	
	
	wxBufferedPaintDC dc(this);
	dc.Clear();
    
    // rectangle
    //dc.SetBrush(*wxGREY_BRUSH);
    dc.SetPen( wxPen( *wxBLACK, 2 ) );
    dc.DrawRectangle( 4.3*column_ref, 4.5*BUTTON_SIZE_Y, 2*BUTTON_SIZE_X, 3.5*BUTTON_SIZE_Y);
	
	// circle_outer
    dc.SetBrush(*wxTRANSPARENT_BRUSH);
    dc.SetPen( wxPen( *wxWHITE, 2 ) );
    dc.DrawCircle( wxPoint( 4.3*column_ref+BUTTON_SIZE_X, 6.25*BUTTON_SIZE_Y ), 0.75*BUTTON_SIZE_Y);
	
	// circle_inner
	dc.SetBrush(*wxGREY_BRUSH);
    dc.SetPen( wxPen( *wxBLACK, 2 ) );
    dc.DrawCircle( wxPoint( 4.3*column_ref+BUTTON_SIZE_X, 6.25*BUTTON_SIZE_Y ), 0.5*BUTTON_SIZE_Y);
	
	// top right lines
		// lines
	dc.SetPen( wxPen(*wxBLACK, 2) );
	dc.DrawLine(2.2*BUTTON_SIZE_X, 0.5*BUTTON_SIZE_Y, 3.8*column_ref, 0.5*BUTTON_SIZE_Y);
	dc.DrawLine(2.2*BUTTON_SIZE_X, 2.5*BUTTON_SIZE_Y, 3.8*column_ref, 2.5*BUTTON_SIZE_Y);
	dc.DrawLine(2.2*BUTTON_SIZE_X, 4.5*BUTTON_SIZE_Y, 3.8*column_ref, 4.5*BUTTON_SIZE_Y);
	dc.DrawLine(3.8*column_ref, 0.5*BUTTON_SIZE_Y,3.8*column_ref, 6*BUTTON_SIZE_Y);
	dc.DrawLine(3.8*column_ref, 6*BUTTON_SIZE_Y, 4.3*column_ref, 6*BUTTON_SIZE_Y);
		// pink circles
	dc.SetBrush(*wxRED_BRUSH);
	dc.DrawCircle(wxPoint(2.6*BUTTON_SIZE_X,0.5*BUTTON_SIZE_Y),0.18*BUTTON_SIZE_Y);
	dc.DrawCircle(wxPoint(2.6*BUTTON_SIZE_X,2.5*BUTTON_SIZE_Y),0.18*BUTTON_SIZE_Y);
	dc.DrawCircle(wxPoint(2.6*BUTTON_SIZE_X,4.5*BUTTON_SIZE_Y),0.18*BUTTON_SIZE_Y);
		// rectangle things
	dc.SetBrush(*wxWHITE_BRUSH);
	dc.SetPen(*wxBLACK);
	dc.DrawRectangle(3*column_ref,0.2*BUTTON_SIZE_Y,0.35*BUTTON_SIZE_X,0.6*BUTTON_SIZE_Y);
	dc.DrawRectangle(3*column_ref+0.35*BUTTON_SIZE_X-1,0.2*BUTTON_SIZE_Y,0.2*BUTTON_SIZE_X,0.6*BUTTON_SIZE_Y);
	dc.DrawRectangle(3*column_ref,2.2*BUTTON_SIZE_Y,0.35*BUTTON_SIZE_X,0.6*BUTTON_SIZE_Y);
	dc.DrawRectangle(3*column_ref+0.35*BUTTON_SIZE_X-1,2.2*BUTTON_SIZE_Y,0.2*BUTTON_SIZE_X,0.6*BUTTON_SIZE_Y);
	dc.DrawRectangle(3*column_ref,4.2*BUTTON_SIZE_Y,0.35*BUTTON_SIZE_X,0.6*BUTTON_SIZE_Y);
	dc.DrawRectangle(3*column_ref+0.35*BUTTON_SIZE_X-1,4.2*BUTTON_SIZE_Y,0.2*BUTTON_SIZE_X,0.6*BUTTON_SIZE_Y);
	
	// red lines in top right
	dc.SetPen(*wxRED);
	dc.DrawLine(4.3*column_ref+BUTTON_SIZE_X, 4.5*BUTTON_SIZE_Y, 4.3*column_ref+BUTTON_SIZE_X, BUTTON_SIZE_Y);
	dc.DrawLine(4.3*column_ref+BUTTON_SIZE_X, BUTTON_SIZE_Y, 4.3*column_ref+2*BUTTON_SIZE_X, BUTTON_SIZE_Y);
	dc.DrawLine(4.3*column_ref+BUTTON_SIZE_X+1, 4.5*BUTTON_SIZE_Y, 4.3*column_ref+BUTTON_SIZE_X+1, BUTTON_SIZE_Y);
	dc.DrawLine(4.3*column_ref+BUTTON_SIZE_X, BUTTON_SIZE_Y-1, 4.3*column_ref+2*BUTTON_SIZE_X, BUTTON_SIZE_Y-1);
	
	/*
    // draw some text
    dc.DrawText(wxT("Testing"), 40, 60); 
    
    // draw a circle
    dc.SetBrush(*wxGREEN_BRUSH); // green filling
    dc.SetPen( wxPen( wxColor(255,0,0), 5 ) ); // 5-pixels-thick red outline
    dc.DrawCircle( wxPoint(200,100), 25);
    
    // draw a rectangle
    dc.SetBrush(*wxBLUE_BRUSH); // blue filling
    dc.SetPen( wxPen( wxColor(255,175,175), 10 ) ); // 10-pixels-thick pink outline
    dc.DrawRectangle( 300, 100, 400, 200 );
    
    // draw a line
    dc.SetPen( wxPen( wxColor(0,0,0), 3 ) ); // black line, 3 pixels thick
    dc.DrawLine( 300, 100, 700, 300 ); // draw line across the rectangle
    
    // Look at the wxDC docs to learn how to draw other stuff
	*/
}







diagnosticsPanel::~diagnosticsPanel()
{	
}