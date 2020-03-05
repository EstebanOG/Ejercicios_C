///-----------------------------------------------------------------
///
/// @file      ProyectoLauraFrm.h
/// @author    user
/// Created:   3/03/2020 11:16:56 a. m.
/// @section   DESCRIPTION
///            ProyectoLauraFrm class declaration
///
///------------------------------------------------------------------

#ifndef __PROYECTOLAURAFRM_H__
#define __PROYECTOLAURAFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
////Header Include End

////Dialog Style Start
#undef ProyectoLauraFrm_STYLE
#define ProyectoLauraFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class ProyectoLauraFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		ProyectoLauraFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("ProyectoLaura"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = ProyectoLauraFrm_STYLE);
		virtual ~ProyectoLauraFrm();
		void WxEdit2Updated(wxCommandEvent& event);
		void WxButtonConvertirClick(wxCommandEvent& event);
		void WxEditMinutosUpdated(wxCommandEvent& event);
		void WxEditSegundosUpdated(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxTextCtrl *WxEditSegundos;
		wxTextCtrl *WxEditMinutos;
		wxStaticText *WxStaticTextSegundos;
		wxStaticText *WxStaticTextGrados;
		wxButton *WxButtonConvertir;
		wxStaticText *WxStaticTextMinutos;
		wxStaticText *WxStaticTextDecimal;
		wxTextCtrl *WxEditGrados;
		wxTextCtrl *WxEditDecimal;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXEDITSEGUNDOS = 1009,
			ID_WXEDITMINUTOS = 1008,
			ID_WXSTATICTEXTSEGUNDOS = 1007,
			ID_WXSTATICTEXTGRADOS = 1006,
			ID_WXBUTTONCONVERTIR = 1005,
			ID_WXSTATICTEXTMINUTOS = 1004,
			ID_WXSTATICTEXTDECIMAL = 1003,
			ID_WXEDITGRADOS = 1002,
			ID_WXEDITDECIMAL = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
