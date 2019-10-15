#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

int Intervalo(string msg, int v1, int v2) {
    int i;
    string cad;
    bool valido = false;

    do {
        cout << msg;
        getline(cin, cad);
        stringstream mystream(cad);
        if(mystream >> i) {
            if(i >= v1 && i <= v2) valido = true;
        }
        if(!valido) cout << "El caracter ingresado es invalido, ingrese el valor nuevamente" << endl;
    } while(!valido);
    return i;
}

int main(int argc, char** argv) {
	int seguir_calculando=1;
	
	while(seguir_calculando == 1)
	{
		int integral,metodo,n=0,i,validacion_ciclo;
		double E =2.7182818,pi=3.141592653, deltax=0.0,sumatoria=0.0,resultado=0.0,f_inicial=0.0,f_enesimo=0.0;
		cout<<"Lista de integrales:"<<endl;
		cout<<"1.[0,Pi/4] 2Pi Tnx (1+Sec^4(x))^(1/2)"<<endl;
		cout<<"2.[0,2] 2Pi (x^3/9) (1+(x^4/9))^(1/2)"<<endl;
		cout<<"3.[0,Pi/2] Sen(x)/x"<<endl;
		cout<<"4.[0,1] 2/(Pi)^(1/2) e^(-x^2)"<<endl;  
		integral = Intervalo("Ingrese el numero de la integral que desea calcular(1-4): ", 1, 4);
		switch(integral){
		case 1:
			cout<<"Lista de metodos:"<<endl;
			cout<<"1.Metodo del trapecio"<<endl;
			cout<<"2.Metodo de Simpson"<<endl;
			metodo = Intervalo("Ingrese el numero del metodo por el cual desea realizar la integral(1-2): ",1,2);
			if(metodo == 1){
				n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);
			}else{
				do{
					n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);	
				}while(n%2);
			}
			deltax = ((pi/4)-0)/n; 
			f_inicial = (2*pi)*(tan(0+(0*deltax)))*(sqrt(1+(1/(pow(cos(0+(0*deltax)),4)))));
			f_enesimo = (2*pi)*(tan(0+(n*deltax)))*(sqrt(1+(1/(pow(cos(0+(n*deltax)),4)))));
			if(metodo==1){
				for(int i=1;i<=(n-1);i++){
					sumatoria += 2*((2*pi)*(tan(0+(i*deltax)))*(sqrt(1+(1/(pow(cos(0+(i*deltax)),4))))));
				}
				resultado = (deltax/2)*(sumatoria+f_inicial+f_enesimo);
				cout<<"El resultado es: "<<resultado<<endl;
				validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
				seguir_calculando = validacion_ciclo;
				cout<<endl;
			}else{
				for(int i=1;i<=(n-1);i++){
					if(i%2 == 0){
						sumatoria += 2*((2*pi)*(tan(0+(i*deltax)))*(sqrt(1+(1/(pow(cos(0+(i*deltax)),4))))));
					}else{
						sumatoria += 4*((2*pi)*(tan(0+(i*deltax)))*(sqrt(1+(1/(pow(cos(0+(i*deltax)),4))))));
					}
				}
				resultado = (deltax/3)*(sumatoria+f_inicial+f_enesimo);
				cout<<"El resultado es: "<<resultado<<endl;
				validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
				seguir_calculando = validacion_ciclo;
				cout<<endl;
			}
			break;
		case 2:
			cout<<"Lista de metodos:"<<endl;
			cout<<"1.Metodo del trapecio"<<endl;
			cout<<"2.Metodo de Simpson"<<endl;
			metodo = Intervalo("Ingrese el numero del metodo por el cual desea realizar la integral(1-2): ",1,2);
			if(metodo == 1){
				n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);
			}else{
				do{
					n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);	
				}while(n%2);
			}
			deltax=(2.0-0.0)/n;
			f_inicial=(2*pi)*((pow((0+(0*deltax)),3))/9)*(sqrt(1+((pow((0+(0*deltax)),4))/9)));
			f_enesimo=(2*pi)*((pow((0.0+(n*deltax)),3))/9.0)*(sqrt(1.0+((pow((0.0+(n*deltax)),4))/9.0)));
				
			if(metodo==1){
				for(int i=1;i<=(n-1);i++)
					sumatoria += 2*(((2*pi)*(pow((0+(i*deltax)),3))/9)*(sqrt(1+((pow((0+(i*deltax)),4))/9))));
					resultado = (deltax/2)*(sumatoria+f_inicial+f_enesimo);
					cout<<"El resultado es: "<<resultado<<endl;
					validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
					seguir_calculando = validacion_ciclo;
					cout<<endl;
				}else{
				for(int i=1;i<=(n-1);i++){
					if(i%2 == 0){
						sumatoria += 2*(((2*pi)*(pow((0+(i*deltax)),3))/9)*(sqrt(1+(pow((0+(i*deltax)),4))/9)));
					}else{
						sumatoria += 4*(((2*pi)*(pow((0+(i*deltax)),3))/9)*(sqrt(1+(pow((0+(i*deltax)),4))/9)));
					}
				}
				resultado = (deltax/3)*(sumatoria+f_inicial+f_enesimo);
				cout<<"El resultado es: "<<resultado<<endl;
				validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
				seguir_calculando = validacion_ciclo;
				cout<<endl;
			}
			break;
		case 3:
			cout<<"Lista de metodos:"<<endl;
			cout<<"1.Metodo del trapecio"<<endl;
			cout<<"2.Metodo de Simpson"<<endl;
			metodo = Intervalo("Ingrese el numero del metodo por el cual desea realizar la integral(1-2): ",1,2);
			if(metodo == 1){
				n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);
			}else{
				do{
					n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);	
				}while(n%2);
			}
			deltax = ((pi/2)-0)/n;
			f_inicial = 0.0;
			f_enesimo = (sin(0+(n*deltax)))/(0+(n*deltax));
			if(metodo==1){
				for(int i=1;i<=(n-1);i++){
					sumatoria+=2*((sin(0+(i*deltax)))/(0+(i*deltax)));
				}
				resultado = (deltax/2)*(sumatoria+f_inicial+f_enesimo);
				cout<<"El resultado es: "<<resultado<<endl;
				validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
				seguir_calculando = validacion_ciclo;
				cout<<endl;
			}else{
				for(int i=1;i<=(n-1);i++){
					if(i%2 == 0){
						sumatoria += 2*((sin(0+(i*deltax)))/(0+(i*deltax)));
					}else{
						sumatoria += 4*((sin(0+(i*deltax)))/(0+(i*deltax)));
					}
				}
				resultado = (deltax/3)*(sumatoria+f_inicial+f_enesimo);
				cout<<"El resultado es: "<<resultado<<endl;
				validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
				seguir_calculando = validacion_ciclo;
				cout<<endl;
			}
			break;
		case 4:
			cout<<"Lista de metodos:"<<endl;
			cout<<"1.Metodo del trapecio"<<endl;
			cout<<"2.Metodo de Simpson"<<endl;
			metodo = Intervalo("Ingrese el numero del metodo por el cual desea realizar la integral(1-2): ",1,2);
			if(metodo == 1){
				n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);
			}else{
				do{
					n = Intervalo("Ingrese el numero de particiones(En caso de que el metodo sea Simpson debe ingresar un numero par): ",1,100000);	
				}while(n%2);
			}
			deltax=(1.0-0)/n;
			f_inicial = (2/sqrt(pi))*pow(E,(-pow((0+(0*deltax)),2)));
			f_enesimo = (2/sqrt(pi))*pow(E,(-pow((0+(n*deltax)),2)));
			if(metodo==1){
				for(int i=1;i<=(n-1);i++){
					sumatoria += 2*((2/sqrt(pi))*(pow(E,(-pow((0+(i*deltax)),2))))); 
				}
				resultado = (deltax/2)*(sumatoria+f_inicial+f_enesimo);
				cout<<"El resultado es: "<<resultado<<endl;
				validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
				seguir_calculando = validacion_ciclo;
				cout<<endl;
			}else{
				for(int i=1;i<=(n-1);i++){
					if(i%2 == 0){
						sumatoria += 2*((2/sqrt(pi))*(pow(E,(-pow((0+(i*deltax)),2)))));
					}else{
						sumatoria += 4*((2/sqrt(pi))*(pow(E,(-pow((0+(i*deltax)),2)))));
					}
				}
				resultado = (deltax/3)*(sumatoria+f_inicial+f_enesimo);
				cout<<"El resultado es: "<<resultado<<endl;
				validacion_ciclo = Intervalo("Desea cualcular otra integral?(1.Si/2.No): ",1,2);
				seguir_calculando = validacion_ciclo;
				cout<<endl;
			}
			break;	
		default:
			break;		
		}
	}
		system("pause");
		return 0; 
}


