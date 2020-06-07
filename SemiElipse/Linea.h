#ifndef LINEA_H
#define LINEA_H
#include "Punto.h"

class Linea
{
	public:
		Linea();
		~Linea();
		void SetsuPini(Punto x); // sets the value of suPini
		Punto GetsuPini(); // returns the value of suPini
		void SetsuPfin(Punto x); // sets the value of suPfin
		Punto GetsuPfin(); // returns the value of suPfin
		void Dibujar();
	private:
		Punto suPini;
		Punto suPfin;
	protected:
};

#endif


