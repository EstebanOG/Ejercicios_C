#include "FiguraOcho.h"
#include <math.h>
FiguraOcho::FiguraOcho()
{
}

FiguraOcho::~FiguraOcho()
{
}

// returns the value of suP
Punto FiguraOcho::GetsuP()
{
	return suP;
}

// sets the value of suP
void FiguraOcho::SetsuP(Punto x)
{
	suP = x;
}

// returns the value of suLinea
Linea FiguraOcho::GetsuLinea()
{
	return suLinea;
}

// sets the value of suLinea
void FiguraOcho::SetsuLinea(Linea x)
{
	suLinea = x;
}

// returns the value of suArco
Arco FiguraOcho::GetsuArco()
{
	return suArco;
}

// sets the value of suArco
void FiguraOcho::SetsuArco(Arco x)
{
	suArco = x;
}

float FiguraOcho::CalcularArea()
{
	return (suArco.GetsuRadioMayor() * 3.1459 * suArco.GetsuRadioMenor()*(0.5));
}

float FiguraOcho::CalcularLongitudArco()
{
	return ((0.5)*3.141592 * ( 3 * (suArco.GetsuRadioMayor() + suArco.GetsuRadioMenor()) - ( sqrt (( 3 * suArco.GetsuRadioMayor() + suArco.GetsuRadioMenor()) * (suArco.GetsuRadioMayor() + 3 * suArco.GetsuRadioMenor())))));
}

float FiguraOcho::CalcularLongitudLinea()
{
	return suLinea.GetsuPini().GetsuY() - suLinea.GetsuPfin().GetsuY();
}

