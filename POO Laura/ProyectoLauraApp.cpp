//---------------------------------------------------------------------------
//
// Name:        ProyectoLauraApp.cpp
// Author:      user
// Created:     3/03/2020 11:16:56 a. m.
// Description: 
//
//---------------------------------------------------------------------------

#include "ProyectoLauraApp.h"
#include "ProyectoLauraFrm.h"

IMPLEMENT_APP(ProyectoLauraFrmApp)

bool ProyectoLauraFrmApp::OnInit()
{
    ProyectoLauraFrm* frame = new ProyectoLauraFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int ProyectoLauraFrmApp::OnExit()
{
	return 0;
}
