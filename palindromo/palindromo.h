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
void printTexto(string texto, int contador);
void printPalabrasAlDerecho(string*& palabrasAlDerecho, int contador);
void printPalabrasAlReves(string*& palabrasAlReves, int contador);
void printPalindromos(string*& palindromos, int contadorPalindromos);
void liberarMemoriaDerecho(string*& palabrasAlDerecho);
void liberarMemoriaReves(string*& palabrasAlReves);
void liberarMemoriaPalindromo(string*& palindromos);
