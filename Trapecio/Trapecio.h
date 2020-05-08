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
	#lado= sqrt((pow()));	
	perimero= bMenor+ bMayor + (2*lado);

}
