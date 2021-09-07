#include <iostream>
#include <winbgim.h>
#include "CAFEMILEX.h"

//	Universidad Distrital Francisco Jose De Caldas.
//	Programacion Orientada a Objetos
//
//
void waitForLeftMouseClick();
using namespace std;
int main(int argc, char** argv) {
    initwindow(1000,2300);
	CAFEMILEX miCafetera;
	miCafetera=CAFEMILEX();
	int opcion=1,tipo,cantidad;
	miCafetera.dibujarNivel();
	while(opcion!=0){
		system("cls");
		cout<<"____________ ESTADO ____________"<<endl;
		cout<<"Agua: Actual:"<<miCafetera.getCantidadActualAgua()<<"L | Maximo: "<<miCafetera.getCapacidadMaximaAgua()<<"L"<<endl;
		cout<<"Leche: Actual:"<<miCafetera.getCantidadActualLeche()<<"L | Maximo: "<<miCafetera.getCapacidadMaximaLeche()<<"L"<<endl;
		cout<<"Cafe: Actual:"<<miCafetera.getCantidadActualCafe()<<"g | Maximo: "<<miCafetera.getCapacidadMaximaCafe()<<"g"<<endl;
		cout<<"Milo: Actual:"<<miCafetera.getCantidadActualMilo()<<"g | Maximo: "<<miCafetera.getCapacidadMaximaMilo()<<"g"<<endl;
		cout<<"Ventas Acumuladas: $"<<miCafetera.getVentasAcumuladas()<<endl;
		cout<<"________________________________"<<endl<<endl;
		cout<<"Menu Principal"<<endl;
		cout<<"Ingrese el numero correspondiente: "<<endl;
		cout<<"1. Servir taza"<<endl;
		cout<<"2. Llenar Agua"<<endl;
		cout<<"3. Llenar Leche"<<endl;
		cout<<"4. Llenar Cafe"<<endl;
		cout<<"5. Llenar Milo"<<endl;
		cout<<"0. Salir."<<endl;
		cin>>opcion;
		switch (opcion){
			case 1:
				system("cls");
				cout<<"Menu Servir"<<endl;
				cout<<"Ingrese el numero correspondiente: "<<endl;
				cout<<"1. Servir tinto"<<endl;
				cout<<"2. Servir perico"<<endl;
				cout<<"3. Servir milo"<<endl;
				cin>>tipo;
				while(tipo<0 || tipo>3){
					cout<<"Ingrese un numero valido"<<endl;
					cin>>tipo;
				}
				cout<<"Ingrese el numero correspondiente: "<<endl;
				cout<<"1. Vaso de 4 onzas"<<endl;
				cout<<"2. Vaso de 8 onzas"<<endl;
				cin>>cantidad;
				while(cantidad<0 || cantidad>2){
					cout<<"Ingrese un numero valido"<<endl;
					cin>>cantidad;
				}
				if(tipo==1){
					if(miCafetera.servirTinto(cantidad)){
						cout<<"Se sirvio Tinto con las medidas correctas."<<endl;
					}else{
						cout<<"Se sirvio Tinto con las medidas incorrectas debido a escasez de producto."<<endl;
					}
				}
				if(tipo==2){
					if(miCafetera.servirPerico(cantidad)){
						cout<<"Se sirvio Perico con las medidas correctas."<<endl;
					}else{
						cout<<"Se sirvio Perico con las medidas incorrectas debido a escasez de producto."<<endl;
					}
				}

				if(tipo==3){
					if(miCafetera.servirMilo(cantidad)){
						cout<<"Se sirvio Milo con las medidas correctas."<<endl;
					}else{
						cout<<"Se sirvio Milo con las medidas incorrectas debido a escasez de producto."<<endl;
					}
				}
				system("pause");
			break;
			case 2:
				system("cls");
				miCafetera.llenarAgua();
				cout<<"Agua llenada. CantidadActual = "<<miCafetera.getCantidadActualAgua()<<endl;
				system("pause");
			break;
			case 3:
				system("cls");
				miCafetera.llenarLeche();
				cout<<"Leche llenada. CantidadActual = "<<miCafetera.getCantidadActualLeche()<<endl;
				system("pause");
			break;
			case 4:
				system("cls");
				miCafetera.llenarCafe();
				cout<<"Cafe llenado. CantidadActual = "<<miCafetera.getCantidadActualCafe()<<endl;
				system("pause");
			break;
			case 5:
				system("cls");
				miCafetera.llenarMilo();
				cout<<"Milo llenado. CantidadActual = "<<miCafetera.getCantidadActualMilo()<<endl;
				system("pause");
			break;

		}
		miCafetera.dibujarNivel();
        cout << "Haz click sobre la ventana grafica" << endl<<endl;
        waitForLeftMouseClick();
	}
	closegraph();
	return 0;
}

void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}
