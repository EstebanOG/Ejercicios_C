#include "trapecio.h"

/*bool Trapecio::validar(float bMayor, float bMenor, float alt)
{
	if (bMayor > 0 && bMenor > 0 && alt > 0 && bMayor > bMenor)return true;
	return false;
}
Trapecio::Trapecio(float bMayor, float bMenor, float alt)
{
	if (validar(bMayor, bMenor, alt))
	{
		baseMayor = bMayor;
		baseMenor = bMenor;
		altura = alt;
		calcularLado();
	}
	else
	{
		cout << "No son validas las dimensiones \n";
		exit(1);
	}
}
void  Trapecio::calcularLado()
{
	float dif = (baseMayor - baseMenor) / 2;
	lado = sqrt(pow(altura, 2) + pow(dif, 2));

}
float Trapecio::area()const
{
	return (((baseMayor + baseMenor) * altura) / 2);
}

float Trapecio::perimetro()
{
	return (baseMayor + baseMenor + 2 * lado);
}*/
Trapecio::Trapecio(DimTrapecio dim)
{
	d = dim;
	calcularLado();
}
void  Trapecio::calcularLado()
{
	float dif = (d.baseMayor - d.baseMenor) / 2;
	d.lado = sqrt(pow(d.altura, 2) + pow(dif, 2));
 
}
float Trapecio::area()const
{
	return (((d.baseMayor + d.baseMenor) * d.altura) / 2);
}
float Trapecio::perimetro()
{
	return (d.baseMayor + d.baseMenor + 2 * d.lado);
}
