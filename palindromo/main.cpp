#include "palindromo.h"

int main()
{
    string texto, textoNormalizado;
    string* palabrasAlDerecho;
    string* palabrasAlReves;
    string* palindromos;
    int contador, contadorPalindromos;
    leerTexto(texto);
    normalizar(texto, textoNormalizado);
    contadorDePalabras(textoNormalizado,contador);
    memoriaDerecho(palabrasAlDerecho, contador);
    formarPalabrasAlDerecho( palabrasAlDerecho, textoNormalizado);
    memoriaReves(palabrasAlReves, contador);
    formarPalabrasAlReves(palabrasAlReves, palabrasAlDerecho, contador);
	contarPalindromos(palabrasAlDerecho, palabrasAlReves, contador, contadorPalindromos);
    memoriaPalindromos( palindromos, contadorPalindromos);
    printTexto(texto, contador);
    printPalabrasAlDerecho(palabrasAlDerecho, contador);
    printPalabrasAlReves(palabrasAlReves, contador);
    printPalindromos(palindromos, contadorPalindromos);
    liberarMemoriaDerecho(palabrasAlDerecho);
    liberarMemoriaReves(palabrasAlReves);
    liberarMemoriaPalindromo(palindromos);

    system("pause");
    
}
