#include <stdio.h>
#include <iostream >
#include <cmath>
#include <conio.h>
#define filas 3
#define columnas 4
int p=0;
int multiplos(int numeros[][4],int , int);
using namespace std;
int main()
{
int a,b;
const int Nfilas =3;
const int Ncol =4;
int numeros[filas][columnas];
for (int x=0;x<filas;x++){ //Recorre la fila deportista
	for (int y=0;y<columnas;y++){ //Recorre la columna tiempos
		cout<<"Ingrese el vector ["<<x<<"]["<<y<<"]"<<endl;
		cin>>numeros[x][y];
	}
}
for (int x=0;x<filas;x++){ //Recorre la fila deportista
	for (int y=0;y<columnas;y++){ //Recorre la columna tiempos
		cout<<numeros[x][y];
	}
	cout<<"\n";
}
cout<<"ingrese dos numeros para saber el numero de multiplos"<<endl;
cin>>a>>b;
cout<<"el numero de digitos multiplos son:  "<<multiplos(numeros, a , b)<<endl;
getch();
return 0;
}
int multiplos(int numeros[][4], int a , int b)
{
int cont=0;

		for (int x=0;x<filas;x++) //Recorre la fila deportista
		{
			for (int y=0;y<columnas;y++) //Recorre la columna tiempos
				{
					if(x%a==0&&x%b==0&&y%a==0&&y%b==0)
					cont++;
				}
		}
return cont;
}
