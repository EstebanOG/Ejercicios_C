#include "CAFEMILEX.h"
#include <winbgim.h>
#include <iostream>
using namespace std;

CAFEMILEX::CAFEMILEX(){
	depAgua = 60;
	depLeche = 120;
	depCafe = 2000;
	depMilo = 2000;
}

int CAFEMILEX::llenarAgua(){
	depAgua = 60;
}

int CAFEMILEX::llenarCafe(){
	depCafe = 2000;
}

int CAFEMILEX::llenarLeche(){
	depLeche = 120;
}

int CAFEMILEX::llenarMilo(){
	depMilo = 2000;
}

int CAFEMILEX::getAgua(){
	return depAgua;
}

int CAFEMILEX::getLeche(){
	return depLeche;
}

int CAFEMILEX::getCafe(){
	return depCafe;
}

int CAFEMILEX::getMilo(){
	return depMilo;
}
void CAFEMILEX::dibujarNivel(){
	cleardevice();
    rectangle(100,50,200,110);
    bar(100,50,200,110-depAgua);
    
    rectangle(210,50,310,170);
    bar(210,50,310,170-depLeche);
    
    rectangle(320,50,420,2050);
    bar(320,50,420,2050-depCafe);
    
    rectangle(430,50,530,2050);
    bar(430,50,530,2050-depMilo);
    
}
void CAFEMILEX::servirVaso(int produ, int tam){
	
	//Tinto
	if(produ == 1 && tam == 1){
		if (depAgua>=4){
			depAgua = depAgua - 4;
			cout<<"Agua 4 onzas"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Agua "<<depAgua<<" onzas"<<endl;
			depAgua = 0;	
		}
		if (depCafe>=8){
			depCafe = depCafe - 8;
			cout<<"Cafe 8 gramos"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Cafe "<<depCafe<<" gramos"<<endl;
			depAgua = 0;	
		}
	}
	if(produ == 1 && tam == 2){
		if (depAgua>=8){
			depAgua = depAgua - 8;
			cout<<"Agua 8 onzas"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Agua "<<depAgua<<" onzas"<<endl;
			depAgua = 0;	
		}
		if (depCafe>=16){
			depCafe = depCafe - 16;
			cout<<"Cafe 16 gramos"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Cafe "<<depCafe<<" gramos"<<endl;
			depAgua = 0;	
		}
	} 
	//Perico
	if(produ == 2 && tam == 1){
		if (depAgua>=3){
			depAgua = depAgua - 3;
			cout<<"Agua 3 onzas"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Agua "<<depAgua<<" onzas"<<endl;
			depAgua = 0;	
		}
		if (depLeche>=1){
			depLeche = depLeche - 1;
			cout<<"Leche 1 onza"<<endl;
		}else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Leche "<<depLeche<<" onzas"<<endl;
			depLeche = 0;
		}
		if (depCafe>=6){
			depCafe = depCafe - 6;
			cout<<"Cafe 6 gramos"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Cafe "<<depCafe<<" gramos"<<endl;
			depAgua = 0;	
		}
	}
	if(produ == 2 && tam == 2){
		if (depAgua>=6){
			depAgua = depAgua - 6;
			cout<<"Agua 6 onzas"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Agua "<<depAgua<<" onzas"<<endl;
			depAgua = 0;	
		}
		if (depLeche>=2){
			depLeche = depLeche - 2;
			cout<<"Leche 2 onza"<<endl;
		}else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Leche "<<depLeche<<" onzas"<<endl;
			depLeche = 0;
		}
		if (depCafe>=12){
			depCafe = depCafe - 12;
			cout<<"Cafe 12 gramos"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Cafe "<<depCafe<<" gramos"<<endl;
			depAgua = 0;	
		}
	} 
	//Milo
	if(produ == 3 && tam == 1){
		if (depAgua>=3){
			depAgua = depAgua - 3;
			cout<<"Agua 3 onzas"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Agua "<<depAgua<<" onzas"<<endl;
			depAgua = 0;	
		}
		if (depLeche>=1){
			depLeche = depLeche - 1;
			cout<<"Leche 1 onza"<<endl;
		}else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Leche "<<depLeche<<" onzas"<<endl;
			depLeche = 0;
		}
		if (depMilo>=10){
			depMilo = depMilo - 10;
			cout<<"Milo 10 gramos"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Milo "<<depMilo<<" gramos"<<endl;
			depAgua = 0;	
		}
	}
	if(produ == 3 && tam == 2){
		if (depAgua>=6){
			depAgua = depAgua - 6;
			cout<<"Agua 6 onzas"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Agua "<<depAgua<<" onzas"<<endl;
			depAgua = 0;	
		}
		if (depLeche>=2){
			depLeche = depLeche - 2;
			cout<<"Leche 2 onza"<<endl;
		}else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Leche "<<depLeche<<" onzas"<<endl;
			depLeche = 0;
		}
		if (depMilo>=20){
			depMilo = depMilo - 20;
			cout<<"Milo 20 gramos"<<endl;
		}
		else{
			cout<<"Ingrediente incompleto"<<endl;
			cout <<"Milo "<<depMilo<<" gramos"<<endl;
			depAgua = 0;	
		}
	} 
}


