//---------------------------------------------------------------------------
//
// Name:        ProyectoLauraApp.h
// Author:      user
// Created:     3/03/2020 11:16:56 a. m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROYECTOLAURAFRMApp_h__
#define __PROYECTOLAURAFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class ProyectoLauraFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
