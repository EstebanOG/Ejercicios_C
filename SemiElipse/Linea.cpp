#include <winbgim.h>
#include "Linea.h"

Linea::Linea()
{
}

Linea::~Linea()
{
}

// returns the value of suPini
Punto Linea::GetsuPini()
{
	return suPini;
}

// sets the value of suPini
void Linea::SetsuPini(Punto x)
{
	suPini = x;
}

// returns the value of suPfin
Punto Linea::GetsuPfin()
{
	return suPfin;
}

// sets the value of suPfin
void Linea::SetsuPfin(Punto x)
{
	suPfin = x;
}

void Linea::Dibujar()
{
	line(suPini.GetsuX(),suPini.GetsuY(),suPfin.GetsuX(),suPfin.GetsuY());
}


