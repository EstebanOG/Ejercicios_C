#include "palindromo.h"
#include <assert.h> 
#include<iostream>
using namespace std;
void leerTexto(string& texto)
{
	cout << "ingrese el texto \n";
	getline(cin, texto);
} 
void normalizar(string texto, string& textoNormalizado){
	for (int i = 0; i < (int)texto.length(); i++)
	{
		texto[i] = tolower(texto[i]);
		switch ((int)texto[i])

		{
			case 'á':texto[i] = 'a'; break;
			case 'é':texto[i] = 'e'; break;
			case 'í':texto[i] = 'i'; break;
			case 'ó':texto[i] = 'o'; break;
			case 'ú':texto[i] = 'u'; break;
		}
	
	}
	textoNormalizado = texto;
}
void contadorDePalabras(string textoNormalizado, int& contadorDePalabras)
{
	int i = 0;
	int longitud = (int) textoNormalizado.length();
	while (i < longitud)
	{
		while (i < longitud && textoNormalizado[i] == ' ')
			i++;
		contadorDePalabras++;
		while (i < longitud && textoNormalizado[i] != ' ')i++; 
	}
}
void memoriaDerecho(string*& palabrasDerecho, int contador)
{
	palabrasDerecho = new string[contador];
	assert(palabrasDerecho != NULL);
}

void formarPalabrasAlDerecho(string* palabrasAlDerecho, string textoNormalizado)
{
	int i = 0, j = 0;
	int longitud = (int)textoNormalizado.length();
	while (i < longitud)
	{
		while (i < longitud && textoNormalizado[i] != ' ') {
		
			palabrasAlDerecho[j] += textoNormalizado[i];
			i++;
		}
		j++;
		while (i < longitud && textoNormalizado[i] == ' ')i++; 
	}
	
}
void memoriaReves(string*& palabrasAlReves, int contador)
{
	palabrasAlReves = new string[contador];
	assert(palabrasAlReves != NULL);
}

void formarPalabrasAlReves(string*& palabrasAlReves, string* palabrasAlDerecho, int contador)
{
	string r;
	int longitud;
	for (int i = 0; i < contador; i++)
	{	
		//r = palabrasAlDerecho[i];
		longitud = (int)palabrasAlDerecho[i].length();
		for (int k = (longitud - 1); k >= 0; k--){
			palabrasAlReves[i] += palabrasAlDerecho[k];
		}
			
	}

}
void contarPalindromos(string* palabraAlDerecho, string* palabraAlReves, int contador, int& contadorPalindromo){
	int i=0;
	while(contador>i){
		if(palabraAlDerecho[i]== palabraAlReves[i]){
			contadorPalindromo++;
		}
		i++;
	}
}
void memoriaPalindromos(string*& palindromos, int contadorPalindromo){
	if(contadorPalindromo >= 1){
		palindromos = new string[contadorPalindromo];
		assert(palindromos != NULL);
	}
}
void printTexto(string texto, int contador){
	cout<<"El texto ingresado es: "<<texto<<endl;
	cout<<"Total de palabras: "<<contador<<endl;
}
void printPalabrasAlDerecho(string*& palabrasAlDerecho,  int contador){
	cout<<"Las palablas al derecho son: ";
	for(int i = 0; i<contador;i++){
		
		cout<<" "<<palabrasAlDerecho[i];
	}
	cout<<endl;
}
void printPalabrasAlReves(string*& palabrasAlReves,  int contador){
	cout<<"Las palablas al reves son: ";
	for(int i = 0; i<contador;i++){
		
		cout<<" "<<palabrasAlReves[i];
	}
	cout<<endl;
}
void printPalindromos(string*& palindromos,  int contadorPalindromos){
	cout<<"Los palindromos son: ";
	for(int i = 0; i<contadorPalindromos;i++){
		
		cout<<" "<<palindromos[i];
	}
	cout<<endl;
}
void liberarMemoriaDerecho(string*& palabrasAlDerecho){
	delete[] palabrasAlDerecho;
}
void liberarMemoriaReves(string*& palabrasAlReves){
	delete[]  palabrasAlReves;
}
void liberarMemoriaPalindromo(string*& palindromos){
	delete[]  palindromos;
}
