///-----------------------------------------------------------------
///
/// @file      ProyectoLauraFrm.cpp
/// @author    user
/// Created:   3/03/2020 11:16:56 a. m.
/// @section   DESCRIPTION
///            ProyectoLauraFrm class implementation
///
///------------------------------------------------------------------

#include "ProyectoLauraFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// ProyectoLauraFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(ProyectoLauraFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(ProyectoLauraFrm::OnClose)
	
	EVT_TEXT(ID_WXEDITSEGUNDOS,ProyectoLauraFrm::WxEditSegundosUpdated)
	
	EVT_TEXT(ID_WXEDITMINUTOS,ProyectoLauraFrm::WxEditMinutosUpdated)
	EVT_BUTTON(ID_WXBUTTONCONVERTIR,ProyectoLauraFrm::WxButtonConvertirClick)
	
	EVT_TEXT(ID_WXEDITGRADOS,ProyectoLauraFrm::WxEdit2Updated)
END_EVENT_TABLE()
////Event Table End

ProyectoLauraFrm::ProyectoLauraFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

ProyectoLauraFrm::~ProyectoLauraFrm()
{
    
}

void ProyectoLauraFrm::CreateGUIControls()
{
    
    
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxEditSegundos = new wxTextCtrl(this, ID_WXEDITSEGUNDOS, _(""), wxPoint(213, 192), wxSize(72, 19), 0, wxDefaultValidator, _("WxEditSegundos"));

	WxEditMinutos = new wxTextCtrl(this, ID_WXEDITMINUTOS, _(""), wxPoint(121, 192), wxSize(74, 19), 0, wxDefaultValidator, _("WxEditMinutos"));

	WxStaticTextSegundos = new wxStaticText(this, ID_WXSTATICTEXTSEGUNDOS, _("SEGUNDOS"), wxPoint(214, 165), wxDefaultSize, 0, _("WxStaticTextSegundos"));

	WxStaticTextGrados = new wxStaticText(this, ID_WXSTATICTEXTGRADOS, _("GRADOS"), wxPoint(46, 167), wxDefaultSize, 0, _("WxStaticTextGrados"));

	WxButtonConvertir = new wxButton(this, ID_WXBUTTONCONVERTIR, _("CONVERTIR"), wxPoint(112, 113), wxSize(75, 25), 0, wxDefaultValidator, _("WxButtonConvertir"));

	WxStaticTextMinutos = new wxStaticText(this, ID_WXSTATICTEXTMINUTOS, _("MINUTOS"), wxPoint(131, 165), wxDefaultSize, 0, _("WxStaticTextMinutos"));

	WxStaticTextDecimal = new wxStaticText(this, ID_WXSTATICTEXTDECIMAL, _("GRADOS EN DECIMAL"), wxPoint(92, 36), wxDefaultSize, 0, _("WxStaticTextDecimal"));

	WxEditGrados = new wxTextCtrl(this, ID_WXEDITGRADOS, _(""), wxPoint(34, 193), wxSize(74, 19), 0, wxDefaultValidator, _("WxEditGrados"));

	WxEditDecimal = new wxTextCtrl(this, ID_WXEDITDECIMAL, _(""), wxPoint(89, 67), wxSize(121, 19), 0, wxDefaultValidator, _("WxEditDecimal"));

	SetTitle(_("ProyectoLaura"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void ProyectoLauraFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxEdit2Updated
 */
void ProyectoLauraFrm::WxEdit2Updated(wxCommandEvent& event)
{

    // insert your code here
    
}

/*
 * WxButtonConvertirClick
 
  
 */
void ProyectoLauraFrm::WxButtonConvertirClick(wxCommandEvent& event)
{
	// insert your code here
	double Segundos,d,Decimal,Grados,Minutos;

    //WxEditDecimal->GetValue().ToFloat(&DECIMAL);
    WxEditDecimal->GetValue().ToDouble(&Decimal);
    Grados = (int)Decimal;
    WxEditGrados->SetValue(wxString::Format(wxT("%1f"),Grados));
    d = Decimal - Grados;
    Minutos = (int)(d * 60);
    WxEditMinutos->SetValue(wxString::Format(wxT("%1f"),Minutos));
    Segundos = ((Decimal-Grados-(Minutos/60))*3600);
    WxEditSegundos->SetValue(wxString::Format(wxT("%1f"),Segundos));
 
}

/*
 * WxEditMinutosUpdated
 */
void ProyectoLauraFrm::WxEditMinutosUpdated(wxCommandEvent& event)
{
    
	// insert your code here
}

/*
 * WxEditSegundosUpdated
 */
void ProyectoLauraFrm::WxEditSegundosUpdated(wxCommandEvent& event)
{
	// insert your code here
}
