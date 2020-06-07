#include <iostream>
#include <winbgim.h>
#include "Punto.h"
#include "FiguraOcho.h"
#include "Arco.h"
#include "Linea.h"


void waitForLeftMouseClick();

using namespace std;


int main(int argc, char** argv) {
	initwindow(800,600);
	Punto P;
	int x, y;
	float radioMayor, radioMenor;
	cout << "Ingrese la coordenada x de la figura: ";
	cin >> x;
	cout << "Ingrese la coordenada y de la figura: ";
	cin >> y;
	cout << "Ingrese el radio mayor de la figura: ";
	cin >> radioMayor;
	cout << "Ingrese el radio menor de la figura: ";
	cin >> radioMenor;
	
	P.SetsuX(x);
	P.SetsuY(y);
	
	FiguraOcho Fig1;
	Fig1.SetsuP(P);
	
	Arco A;
	A.SetsuCentro(P);
	A.SetsuRadioMayor(radioMayor);
	A.SetsuRadioMenor(radioMenor);
	
	Fig1.SetsuArco(A);
	
	Linea L;
	P.SetsuY(P.GetsuY()+ radioMenor);
	L.SetsuPini(P);
	//L.SetsuPini(Fig1.GetsuP());	// Tambi?n es v?lido
	
	P.SetsuY(P.GetsuY() - (2*radioMenor));
	L.SetsuPfin(P);	// P modificado
	
	Fig1.SetsuLinea(L);
	
	cout << "El area de la figura es: " << Fig1.CalcularArea() << endl;
	cout << "La longitud del arco es: "<<Fig1.CalcularLongitudArco()<<endl;
	cout << "La longitud de la linea es: "<<Fig1.CalcularLongitudLinea()<<endl;
	Fig1.Dibujar();
	
	waitForLeftMouseClick();
	
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

