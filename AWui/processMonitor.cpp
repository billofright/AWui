#include "processMonitor.h"
#include <wx/graphics.h>
#include <wx/settings.h>
#include <wx/dcbuffer.h>

BEGIN_EVENT_TABLE(processMonitor, wxPanel)
	EVT_THREAD(CHART_THREAD_EVENT, processMonitor::OnChartThreadEvent)
	EVT_BUTTON(10022, processMonitor::OnStartClicked)
END_EVENT_TABLE()

processMonitor::processMonitor(wxWindow* parent):wxPanel(parent), c_thread(this)
{
	
	//text = new wxTextCtrl(this, wxID_ANY, "This is processMonitor", wxPoint(0, 200), wxDefaultSize, wxTAB_TRAVERSAL, wxDefaultValidator, wxTextCtrlNameStr);
	backButton = new wxButton(this, wxID_ANY, "back", wxDefaultPosition, wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	start = new wxButton(this, 10022, "Start", wxPoint(850, 0), wxSize(100, 100), 0, wxDefaultValidator, wxButtonNameStr);
	
	this -> SetBackgroundStyle(wxBG_STYLE_PAINT);
	this -> Bind(wxEVT_PAINT, &processMonitor::OnPaint, this);
	
	values = {0};
	
	this -> Layout();
}

processMonitor::~processMonitor()
{
}

void processMonitor::OnChartThreadEvent(wxThreadEvent &evt)
{
	double value = evt.GetPayload<double>();
	std::cout << "payload is:";
	std::cout << value << std::endl;
	values.push_back(value);
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

void processMonitor::OnPaint(wxPaintEvent &evt)
{
	wxAutoBufferedPaintDC dc(this);
	dc.Clear();
	
	wxGraphicsContext *gc = wxGraphicsContext::Create(dc);
	
	if(gc && values.size() > 0)
	{
		wxFont titleFont = wxFont(wxNORMAL_FONT -> GetPointSize() * 2.0,
									wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
		gc -> SetFont(titleFont, wxSystemSettings::GetAppearance().IsDark() ? *wxWHITE: *wxBLACK);
		
		double tw, th;
		gc -> GetTextExtent(this -> title, &tw, &th);
		
		const double titleTopBottomMinMargin = this -> FromDIP(10);
		
		wxRect2DDouble fullArea{0, 0, static_cast<double>(GetSize().GetWidth()), static_cast<double>(GetSize().GetHeight())};
		
		const double marginX = fullArea.GetSize().GetWidth() / 8.0;
		const double marginTop = std::max(fullArea.GetSize().GetHeight() / 8.0, titleTopBottomMinMargin * 2.0 + th);
		const double marginBottom = fullArea.GetSize().GetHeight() / 8.0;
		double labelsToChartAreaMargin = this -> FromDIP(10);
		
		wxRect2DDouble chartArea = fullArea;
		chartArea.Inset(marginX, marginTop, marginX, marginBottom);
		
		gc -> DrawText(this -> title, (fullArea.GetSize().GetWidth()-tw) / 2.0, (marginTop-th)/2.0);
		gc -> SetBrush(wxNullBrush);
		gc -> DrawRectangle(chartArea.m_x, chartArea.m_y, chartArea.m_width, chartArea.m_height);
		
		wxAffineMatrix2D normalizedToChartArea {};
		normalizedToChartArea.Translate(chartArea.GetLeft(), chartArea.GetTop());
		normalizedToChartArea.Scale(chartArea.m_width, chartArea.m_height);
		
		double lowValue = *std::min_element(values.begin(), values.end());
		double highValue = *std::max_element(values.begin(), values.end());
		double yValueSpan = highValue - lowValue;
		
		wxAffineMatrix2D normalizedToValue = {};
		normalizedToValue.Translate(0, highValue);
		normalizedToValue.Scale(1, -1);
		normalizedToValue.Scale(static_cast<double>(values.size()-1), yValueSpan);
		
		const int yLinesCount = 11;
		
		gc -> SetPen(wxPen(wxColor(128, 128, 128)));
		gc -> SetFont(*wxNORMAL_FONT, wxSystemSettings::GetAppearance().IsDark() ? *wxWHITE : *wxBLACK);
		
		for(int i = 0; i < yLinesCount; i++)
		{
			double normalizedLineY = static_cast<double>(i) / (yLinesCount-1);
			
			auto linesStartPoint = normalizedToChartArea.TransformPoint({0, normalizedLineY});
			auto linesEndPoint = normalizedToChartArea.TransformPoint({1, normalizedLineY});
			
			wxPoint2DDouble linePoints[] = {linesStartPoint, linesEndPoint};
			
			gc -> StrokeLines(2, linePoints);
			
			double valueAtLineY = normalizedToValue.TransformPoint({0, normalizedLineY}).m_y;
			
			auto text = wxString::Format("%.2f", valueAtLineY);
			text = wxControl::Ellipsize(text, dc, wxELLIPSIZE_MIDDLE, chartArea.GetLeft() - labelsToChartAreaMargin);
			
			double tw, th;
			gc -> GetTextExtent(text, &tw, &th);
			gc -> DrawText(text, chartArea.GetLeft() - labelsToChartAreaMargin - tw, linesStartPoint.m_y - th / 2.0);
		}
		
		wxPoint2DDouble leftHLinePoints[] = {
			normalizedToChartArea.TransformPoint({0, 0}),
			normalizedToChartArea.TransformPoint({0, 1})
		};
		
		wxPoint2DDouble rightHLinePoints[] = {
			normalizedToChartArea.TransformPoint({1, 0}),
			normalizedToChartArea.TransformPoint({1, 1})
		};
		
		gc -> StrokeLines(2, leftHLinePoints);
		gc -> StrokeLines(2, rightHLinePoints);
		
		wxPoint2DDouble *pointArray = new wxPoint2DDouble[values.size()];
		
		wxAffineMatrix2D valueToNormalized = normalizedToValue;
		valueToNormalized.Invert();
		wxAffineMatrix2D valueToChartArea = normalizedToChartArea;
		valueToChartArea.Concat(valueToNormalized);
		
		for(int i = 0; i < values.size(); i++)
		{
			pointArray[i] = valueToChartArea.TransformPoint({static_cast<double>(i), values[i]});
		}
		
		gc -> SetPen(wxPen(wxSystemSettings::GetAppearance().IsDark() ? *wxCYAN : *wxBLUE, 3));
		gc -> StrokeLines(values.size(), pointArray);
		
		
		delete gc;
	}
}