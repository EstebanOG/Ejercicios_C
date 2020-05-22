#pragma once
#include<iostream>
using namespace std;
#include <cassert>
#include<string>
#include<ctype.h>
#include "palindromo.cpp"

void leerTexto(string& texto);
void normalizar(string texto,string& textoNormalizado);
void contadorDePalabras(string textoNormalizado, int& contadorDePalabras);
void memoriaDerecho(string*& palabrasAlDerecho, int contador);
void formarPalabrasAlDerecho(string* palabrasAlDerecho, string textoNormalizado);
void memoriaReves(string*& palabraAlReves, int contador);
void formarPalabrasAlReves(string*& palabrasAlReves, string* palabrasAlDerecho, int contador);
void contarPalindromos(string* palabraAlDerecho, string* palabraAlReves, int contador, int& contadorPalindromo);
void memoriaPalindromos(string*& palindromos,int contadorPalindromo);
void printTexto(string texto);

/*void print(palabrasAlDerecho, contador);
void print(palindromos, contadorPalindromos);
void liberarMemoria(palabrasAlDerecho);
void liberarMemoria(palabrasAlReves);
void liberarMemoria(palindromos);*/
