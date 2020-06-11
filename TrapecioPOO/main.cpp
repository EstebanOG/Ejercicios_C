#include <iostream>
#include "trapecio.h"
using namespace std;
int main(void)
{
	float bMayor, bMenor, alt;
	/*cout << "ingrese la base mayor, base menor y altura  \n ";
	cin >> bMayor >> bMenor >> alt;
	Trapecio trp(bMayor, bMenor, alt);
	cout << "el lado es: " << trp.mlado() << endl;
	cout << "La base mayor es:  " << trp.bMayor() << endl;
	cout << "La base menor es:  " << trp.bMenor() << endl;
	cout << "La altura es: " << trp.mAltura() << endl;
	cout << "El area es:  " << trp.area() << endl;
	cout << "El perimetro es: " << trp.perimetro() << endl;
	*/
	DimTrapecio e;
	cout << "Ingrese dimensiones del trapecio<H>:\n";
	cout << "Ingrese la base mayor, base menor y altura\n";
	cin >> bMayor >> bMenor >> alt;
	e.altura = alt;
	e.baseMenor = bMenor;
	e.baseMayor = bMayor;
	Trapecio H(e);
	cout << "Base mayor" << H.dimension().baseMayor << endl;
	cout << "Base menor" << H.dimension().baseMenor << endl;
	cout << "La altura es: "<< H.dimension().altura <<endl;
	cout << "El lado es: "<< H.dimension().lado <<endl;
	cout << "El area es: " << H.area() << endl;
	cout << "El perimetro es: " << H.perimetro() << endl;
	return 0;
}
