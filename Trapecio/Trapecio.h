#pragma once
#include <iostream>
using namespace std;
#include <cmath>
void leerDatos(float& bMenor, float& bMayor, float& h)//Se leen datos
{
	cout<<"Ingrese la base menor: ";
	cin>>bMenor;
	cout<<"Ingrese la base mayor: ";
	cin>>bMayor;
	cout<<"Ingrese la altura: ";
	cin>>h;
}
void calculos(float bMenor, float bMayor, float h, float& area, float& perimetro, float& lado)
{
	area=(h*((bMenor+bMayor)/2));
	lado= sqrt(pow(((bMayor-bMenor)/2),2)+pow(h,2));
	perimetro= bMenor+ bMayor + (2*lado);

}
void mostrarResultados(float area, float perimetro, float lado)
{
	cout<<"El area del trapecio es: "<<area<<endl;
	cout<<"El perimetro del trapecio es: "<<perimetro<<endl;
	cout<<"El lado del trapecio es: "<<lado<<endl;	
}
