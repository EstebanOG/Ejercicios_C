#pragma once
#include<iostream>
#include <cassert>
#include<string>
#include "palindromo.cpp"
using namespace std;
void leerTexto(string& texto);
void normalizar(string texto,string& textoNormalizado);
void contadorDePalabras(string textoNormalizado, int& contadorDePalabras);
void memoriaDerecho(string*& palabrasAlDerecho, int contador);
void formarPalabrasAlDerecho(string* palabrasAlDerecho, string textoNormalizado);
void memoriaReves(string*& palabraAlReves, int contador);
void formarPalabrasAlReves(string*& palabrasAlReves, string* palabrasAlDerecho, int contador);
void contarPalindromos(string* palabraAlDerecho, string* palabraAlReves, int contador, int& contadorPalindromo);
/*void crearArregloDePalindromos(palindromos, palabrasAlDerecho, formarPalabrasAlReves, contador);
void print(texto);
void print(palabrasAlDerecho, contador);
void print(palindromos, contadorPalindromos);
void liberarMemoria(palabrasAlDerecho);
void liberarMemoria(palabrasAlReves);
void liberarMemoria(palindromos);*/
