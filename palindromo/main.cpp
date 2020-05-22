#include "palindromo.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    string texto;
    string* palabrasAlDerecho;
    string* palabrasAlReves;
    string* palindromos;
    int contador, contadorPalindromos;
    leerTexto(texto);
    contador=contadorDePalabras(texto);
    cout<<contador<<endl;
    /*memoria(palabrasAlDerecho, contador);
    formarPalabrasAlDerecho( palabrasAlDerecho, texto);
    memoria(palabrasAlReves, contador);
    formarPalabrasAlReves(palabrasAlDerecho, palabrasAlReves, contador);
    //
    contadorPalindromos = contarPalindromos(palabrasAlDerecho, palabrasAlReves, contadorPalindromos);
    memoria( palindromos, contadorPalindromos);
    crearArregloDePalindromos(palindromos, palabrasAlDerecho, formarPalabrasAlReves, contador);
    print(texto);
    print(palabrasAlDerecho, contador);
    print(palindromos, contadorPalindromos);
    liberarMemoria(palabrasAlDerecho);
    liberarMemoria(palabrasAlReves);
    liberarMemoria(palindromos);*/

    system("pause");
    
}
