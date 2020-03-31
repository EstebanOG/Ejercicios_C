#include "empujador.h"
#include <ctype.h>
#include <stdio.h> //libreria para getch
using namespace std;
int main()
{	int a=5,b=5;
	char corre [5][5];
	char entrada_teclado;
	pinicial(corre);
	imprime(corre);
	imprimeenarchivo(corre);
	cout<<endl;
	do{ 
		entrada_teclado = getch();
		if(toascii(entrada_teclado)==13){
			mueve(corre);
			imprime(corre);
			imprimeenarchivo(corre);
			cout<<endl;
		}
	}while(verifica(corre)==true && (toascii(entrada_teclado)!=27));
}





