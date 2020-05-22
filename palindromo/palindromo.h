#pragma once
#include<iostream>
#include <cassert>
#include<string>
using namespace std;
void leerTexto(string& texto);
int contadorDePalabras(string& texto);
void memoria(string*& palabras, int contador);
void formarPalabrasAlDerecho(string* palabrasAlDerecho, string texto);
void formarPalabrasAlReves(string* palabrasAlDerecho, string* palabrasAlReves, int contador);
