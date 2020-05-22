#include <iostream>
#include <assert.h> 
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
void contadorDePalabras(string texto, int& contadorDePalabras)
{
	int i = 0;
	int longitud = (int) texto.length();
	while (i < longitud)
	{
		while (i < longitud && texto[i] = ' ')
			i++;
		contadorDePalabras++;
		while (i < longitud && texto[i] != ' ')i++; 
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

void formarPalabrasAlReves(string*& palabrasAlreves, string* palabrasAlDerecho, int contador)
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
void contadorPalindromo(string* palabraAlDerecho, string* palabraAlReves, int contador, int& contadorPalindromo){
	int i=0;
	while(contador>i){
		if(palabraAlDerecho[i]== palabraAlReves[i]){
			contadorPalindromo++;
		}
		i++
	}
}
/*void memoria( palindromos, contadorPalindromos){
	
}
void crearArregloDePalindromos(palindromos, palabrasAlDerecho, formarPalabrasAlReves, contador){
	
}
void print(texto){
	
}
void print(palabrasAlDerecho, contador){
	
}
void print(palindromos, contadorPalindromos){
	
}
void liberarMemoria(palabrasAlDerecho){
	
}
void liberarMemoria(palabrasAlReves){
	
}
void liberarMemoria(palindromos){
	
}*/
