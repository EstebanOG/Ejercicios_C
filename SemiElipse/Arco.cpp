#include <winbgim.h>
#include "Arco.h"

Arco::Arco()
{
}

Arco::~Arco()
{
}

// returns the value of suCentro
Punto Arco::GetsuCentro()
{
	return suCentro;
}

// sets the value of suCentro
void Arco::SetsuCentro(Punto x)
{
	suCentro = x;
}

// returns the value of suRadio
float Arco::GetsuRadioMayor()
{
	return suRadioMayor;
}

// sets the value of suRadio
void Arco::SetsuRadioMayor(float x)
{
	suRadioMayor = x;
}
// returns the value of suRadio
float Arco::GetsuRadioMenor()
{
	return suRadioMenor;
}

// sets the value of suRadio
void Arco::SetsuRadioMenor(float x)
{
	suRadioMenor = x;
}

void Arco::Dibujar()
{
	ellipse(suCentro.GetsuX(),suCentro.GetsuY(),270, 90, suRadioMayor, suRadioMenor);
}
