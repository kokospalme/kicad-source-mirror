///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __bitmap2cmp_gui_base__
#define __bitmap2cmp_gui_base__

#include <wx/intl.h>

#include <wx/scrolwin.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/grid.h>
#include <wx/button.h>
#include <wx/radiobox.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class BM2CMP_FRAME_BASE
///////////////////////////////////////////////////////////////////////////////
class BM2CMP_FRAME_BASE : public wxFrame 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxScrolledWindow* m_InitialPicturePanel;
		wxScrolledWindow* m_GreyscalePicturePanel;
		wxScrolledWindow* m_BNPicturePanel;
		wxGrid* m_gridInfo;
		wxButton* m_buttonLoad;
		wxButton* m_buttonExportEeschema;
		wxButton* m_buttonExportPcbnew;
		wxRadioBox* m_rbOptions;
		wxStaticText* m_ThresholdText;
		wxSlider* m_sliderThreshold;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnPaint( wxPaintEvent& event ){ event.Skip(); }
		virtual void OnLoadFile( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnExportEeschema( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnExportPcbnew( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnOptionsSelection( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnThresholdChange( wxScrollEvent& event ){ event.Skip(); }
		
	
	public:
		BM2CMP_FRAME_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Bitmap to Component Converter"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,419 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~BM2CMP_FRAME_BASE();
	
};

#endif //__bitmap2cmp_gui_base__
