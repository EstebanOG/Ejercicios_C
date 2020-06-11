#pragma once
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct  DimTrapecio
{
public:
	float baseMayor, baseMenor;
	float lado, altura;
};

class Trapecio
{
private:
	/*float baseMayor, baseMenor;
	float lado, altura;*/
	DimTrapecio d;
	void calcularLado();
	//bool  validar(float bMayor, float bMenor, float alt);
public:
	Trapecio() {}//constructor por defecto, hace arreglos de trapecio
	Trapecio(DimTrapecio dim);
	DimTrapecio dimension()const {return d;}
	float area()const;
	float perimetro();
	/*
	Trapecio(float bMayor, float bMenor, float alt);//constructor parametrico
	float mlado() const { return lado; }//muestra lado
	float bMayor() const { return baseMayor; }//devuelve
	float bMenor() const { return baseMenor; }
	float mAltura() const { return altura; }*/

};
