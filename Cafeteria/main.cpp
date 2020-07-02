#include <iostream>
#include <winbgim.h>
#include "CAFEMILEX.h"

void waitForLeftMouseClick();

using namespace std;


int main(int argc, char** argv) {
	initwindow(1000,2300);
	int opc;
	CAFEMILEX producto;
	int ventas = 0;
	int otro = 0;
	bool seguir = true;
	int llenar=0;
	while(seguir == true){
		cout<<"LO NUESTRO Inc."<<endl;
		cout<<"Menu:"<<endl;
		cout<<"Codigo		Producto	Tamanio(vaso)	Valor"<<endl;
		cout<<"1.		Tinto		4 onzas		1500"<<endl;
		cout<<"2.		Tinto		8 onzas		3000"<<endl;
		cout<<"3.		Perico		4 onzas		1800"<<endl;
		cout<<"4.		Perico		8 onzas		3600"<<endl;
		cout<<"5.		Milo		4 onzas		1800"<<endl;
		cout<<"6.		Milo		8 onzas		3600"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opc;
		cout<<endl;
		cout<<"Sirviendo producto..."<<endl;
		switch(opc)
		{
	    case 1:
	    	ventas = ventas + 1500;
	    	cout<<"Ingredientes:"<<endl;
	    	producto.servirVaso(1,1);
	    	cout<<endl;
	    	cout<<"Precio: 1500"<<endl<<endl;
	    break;
	    case 2:
	    	ventas = ventas + 3000;
	    	cout<<"Ingredientes:"<<endl;
	    	producto.servirVaso(1,2);
	    	cout<<endl;
	    	cout<<"Precio: 3000"<<endl<<endl;
	    break;
	    case 3:
	    	ventas = ventas + 1800;
	    	cout<<"Ingredientes:"<<endl;
	    	producto.servirVaso(2,1);
	    	cout<<endl;
	    	cout<<"Precio: 1800"<<endl<<endl;
	    break;
	    case 4:
	    	ventas = ventas + 3600;
	    	cout<<"Ingredientes:"<<endl;
	    	producto.servirVaso(2,2);
	    	cout<<endl;
	    	cout<<"Precio: 3600"<<endl<<endl;
	    break;
	    case 5:
	    	ventas = ventas + 1800;
	    	cout<<"Ingredientes:"<<endl;
	    	producto.servirVaso(3,1);
	    	cout<<endl;
	    	cout<<"Precio: 1800"<<endl<<endl;
	    break;
	    case 6:
	    	ventas = ventas + 3600;
	    	cout<<"Ingredientes:"<<endl;
	    	producto.servirVaso(3,2);
	    	cout<<endl;
	    	cout<<"Precio: 3600"<<endl<<endl;
	    break;
	    default:
	    	return 0;
		}
		cout<<"Ventas totales: "<<ventas<<endl<<endl;
	    cout<<"Depositos:"<<endl;
	    cout<<"Agua: "<<producto.getAgua()<<endl;
	    cout<<"Leche: "<<producto.getLeche()<<endl;
	    cout<<"Cafe: "<<producto.getCafe()<<endl;
	    cout<<"Milo: "<<producto.getMilo()<<endl; 
	    producto.dibujarNivel();
    	cout << "Haz click sobre la ventana grafica" << endl;
    	waitForLeftMouseClick();
    	cout<<"Desea llenar los tanques?:(Si(1)/No(0)) ";
    	cin>>llenar;
    	if(llenar==1){
    		producto.llenarAgua();
    		producto.llenarCafe();
    		producto.llenarLeche();
    		producto.llenarMilo();
    		producto.dibujarNivel();
    		cout << "Haz click sobre la ventana grafica" << endl<<endl;
    		waitForLeftMouseClick();
		}
		cout<<"Desea realizar otra compra?:(Si(1)/No(0)) ";
		cin>>otro;
		if (otro == 0)
			seguir = false;
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


