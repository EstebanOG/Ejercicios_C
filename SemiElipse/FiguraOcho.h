#ifndef FIGURAOCHO_H
#define FIGURAOCHO_H
#include "Linea.h"
#include "Arco.h"

class FiguraOcho
{
	public:
		FiguraOcho();
		~FiguraOcho();
		void SetsuP(Punto x); // sets the value of suP
		Punto GetsuP(); // returns the value of suP
		void SetsuLinea(Linea x); // sets the value of suLinea
		Linea GetsuLinea(); // returns the value of suLinea
		void SetsuArco(Arco x); // sets the value of suArco
		Arco GetsuArco(); // returns the value of suArco
		float CalcularArea();
		float CalcularLongitudArco();
		float CalcularLongitudLinea();
		void Dibujar();
	private:
		Punto suP;
		Linea suLinea;
		Arco suArco;
	protected:
};

#endif


