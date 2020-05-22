#include <iostream>
using namespace std;
void leerTexto(string& texto)
{
	cout << "ingrese el texto \n";
	getline(cin, texto);
	//normalizar(texto);
} 
int contadorDePalabras(string& texto)
{
	int i = 0, contadorDePalabras = 0;
	int longitud = (int)texto.length();
	cout<<longitud<<endl;
	while (i < longitud)
	{
		//while (i < longitud && texto[i] != ' ')i++; contadorDePalabras++;
		cout<<texto[i]<<endl;
		while (i < longitud && texto[i] == ' ')
		{
			contadorDePalabras++; 
		}
		i++; 
	}
	return contadorDePalabras;
}
/*void memoria(string* &palabras, int contador)
{
	assert(contador > 0);
	palabras = new string[contador];
	assert(palabras != NULL);
}*/

void formarPalabrasAlDerecho(string* palabrasAlDerecho, string texto)
{
	int i = 0, j = 0;
	int longitud = (int)texto.length();
	while (i < longitud)
	{
		while (i < longitud && texto[i] != ' ') {
		
			palabrasAlDerecho[j] += texto[i];	i++;
		}
		j++;
		while (i < longitud && texto[i] == ' ')i++; 
	}
	
}

void formarPalabrasAlReves(string* palabrasAlDerecho, string* palabrasAlReves, int contador)
{
	for (int i = 0; i < contador; i++)
	{
		int longitud = (int)palabrasAlDerecho[i].length();
		for (int k = longitud; k >= 0; k--)
			palabrasAlReves[i] += palabrasAlReves[i][k];
	}
	for (int i = 0; i < contador ; i++)
		cout << palabrasAlReves[i] << endl;
		system("pause");

}
