#ifndef ARCO_H
#define ARCO_H
#include "Punto.h"

class Arco
{
	public:
		Arco();
		~Arco();
		void SetsuCentro(Punto x); // sets the value of suCentro
		Punto GetsuCentro(); // returns the value of suCentro
		void SetsuRadioMayor(float x); // sets the value of suRadio
		float GetsuRadioMayor(); // returns the value of suRadio
		void SetsuRadioMenor(float x); // sets the value of suRadio
		float GetsuRadioMenor(); // returns the value of suRadio
	private:
		Punto suCentro;
		float suRadioMayor;
		float suRadioMenor;
	protected:
};

#endif

