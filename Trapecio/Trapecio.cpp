#include "Trapecio.h"

using namespace std;

int main(int argc, char** argv) {
	float bMayor, bMenor, h, area, perimetro, lado;
	leerDatos(bMayor, bMenor, h);
	calculos(bMayor, bMenor, h, area, perimetro,lado);
	mostrarResultados(area,perimetro,lado);
	
	return 0;
}
