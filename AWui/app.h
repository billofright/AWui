#include <wx/wx.h>
#include "menu.h"

class cApp : public wxApp
{
public:
	cApp();
	~cApp();
	virtual bool OnInit();
	
private:
	cMenu* m_frame1 = nullptr;
};