#ifndef CAFEMILEX_H
#define CAFEMILEX_H
#include <winbgim.h>
#include <iostream>
using namespace std;
class CAFEMILEX{
	private:
		float capacidadMaximaAgua;
		float cantidadActualAgua;

		float capacidadMaximaLeche;
		float cantidadActualLeche;

		float capacidadMaximaMilo;
		float cantidadActualMilo;

		float capacidadMaximaCafe;
		float cantidadActualCafe;

		int valorTinto4onz;
		int valorPerico4onz;
		int valorMilo4onz;
		int valorTinto8onz;
		int valorPerico8onz;
		int valorMilo8onz;

		int ventasAcumuladas;

		float onza = 0.030; //litros
		float kilo=1000; // gramos
	public:
		CAFEMILEX();
		bool servirTinto(int opcion);
		bool servirPerico(int opcion);
		bool servirMilo(int opcion);
		float getCantidadActualAgua();
		float getCapacidadMaximaAgua();
		float getCantidadActualLeche();
		float getCapacidadMaximaLeche();
		float getCantidadActualMilo();
		float getCapacidadMaximaMilo();
		float getCantidadActualCafe();
		float getCapacidadMaximaCafe();
		void llenarAgua();
		void llenarLeche();
		void llenarMilo();
		void llenarCafe();
		void dibujarNivel();
		int getVentasAcumuladas();

};

CAFEMILEX::CAFEMILEX(){
	ventasAcumuladas=0;

	valorTinto4onz=1500;
	valorPerico4onz=1800;
	valorMilo4onz=1800;

	valorTinto8onz=3000;
	valorPerico8onz=3600;
	valorMilo8onz=3600;

	capacidadMaximaAgua=4;
	capacidadMaximaLeche=2;
	capacidadMaximaMilo=2*kilo;
	capacidadMaximaCafe=2*kilo;

	cantidadActualAgua=capacidadMaximaAgua*0.5;
	cantidadActualLeche=capacidadMaximaLeche*0.5;
	cantidadActualMilo=capacidadMaximaMilo*0.5;
	cantidadActualCafe=capacidadMaximaCafe*0.5;
}
void CAFEMILEX::dibujarNivel(){
	cleardevice();
	outtextxy(100,30, "Agua");
	setfillstyle(1,1);
    rectangle(100,170,200,250);
    bar(100,170+(capacidadMaximaAgua-cantidadActualAgua)*20,200,250);

    outtextxy(210,30, "Leche");
    setfillstyle(1,15);
    rectangle(210,210,310,250);
    bar(210,210+(capacidadMaximaLeche-cantidadActualLeche)*20,310,250);

    outtextxy(320,30, "Cafe");
    setfillstyle(1,6);
    rectangle(320,50,420,250);
    bar(320,50+(capacidadMaximaCafe-cantidadActualCafe)/10,420,250);

    outtextxy(430,30, "Milo");
    setfillstyle(1,6);
    rectangle(430,50,530,250);
    bar(430,50+(capacidadMaximaMilo-cantidadActualMilo)/10,530,250);

}
void CAFEMILEX::llenarAgua(){
	cantidadActualAgua=capacidadMaximaAgua;
}
void CAFEMILEX::llenarLeche(){
	cantidadActualLeche=capacidadMaximaLeche;
}
void CAFEMILEX::llenarMilo(){
	cantidadActualMilo=capacidadMaximaMilo;
}
void CAFEMILEX::llenarCafe(){
	cantidadActualCafe=capacidadMaximaCafe;
}
bool CAFEMILEX::servirTinto(int opcion){
	float servAgua=0, servCafe=0,cont=0,valor=0;
	float cantidad=0;
	if(opcion==1){
		cantidad=4*onza;
		if(cantidad<cantidadActualAgua){
			servAgua=cantidad;
			cantidadActualAgua=cantidadActualAgua-servAgua;
		}
		else{
			servAgua=cantidadActualAgua;
			cantidadActualAgua=0;
			cont++;
		}
		cantidad=8;
		if(cantidad<cantidadActualCafe){
			servCafe=cantidad;
			cantidadActualCafe=cantidadActualCafe-servCafe;
		}
		else{
			servCafe=cantidadActualCafe;
			cantidadActualCafe=0;
			cont++;
		}
		valor=valorTinto4onz;
	}else{
		cantidad=8*onza;
		if(cantidad<cantidadActualAgua){
			servAgua=cantidad;
			cantidadActualAgua=cantidadActualAgua-servAgua;
		}else{
			servAgua=cantidadActualAgua;
			cantidadActualAgua=0;
			cont++;
		}
		cantidad=16;
		if(cantidad<cantidadActualCafe){
			servCafe=cantidad;
			cantidadActualCafe=cantidadActualCafe-servCafe;
		}else{
			servCafe=cantidadActualCafe;
			cantidadActualCafe=0;
			cont++;
		}
		valor=valorTinto8onz;
	}
	ventasAcumuladas+=valor;
	cout<<"Se sirvio Tinto: Agua: "<<servAgua<<", Cafe: "<<servCafe<<".| Valor: "<<valor<<endl;
	if(cont==0)
	return true;
	else
	return false;
}
bool CAFEMILEX::servirPerico(int opcion){
	float servAgua=0, servLeche=0, servCafe=0,cont=0,valor=0;
	float cantidad=0;
	if(opcion==1){
		cantidad=3*onza;
		if(cantidad<cantidadActualAgua){
			servAgua=cantidad;
			cantidadActualAgua=cantidadActualAgua-servAgua;
		}
		else{
			servAgua=cantidadActualAgua;
			cantidadActualAgua=0;
			cont++;
		}
		cantidad=6;
		if(cantidad<cantidadActualCafe){
			servCafe=cantidad;
			cantidadActualCafe=cantidadActualCafe-servCafe;
		}
		else{
			servCafe=cantidadActualCafe;
			cantidadActualCafe=0;
			cont++;
		}
		cantidad=1*onza;
		if(cantidad<cantidadActualLeche){
			servLeche=cantidad;
			cantidadActualLeche=cantidadActualLeche-servLeche;
		}
		else{
			servLeche=cantidadActualLeche;
			cantidadActualLeche=0;
			cont++;
		}
		valor=valorPerico4onz;
	}else{
		cantidad=6*onza;
		if(cantidad<cantidadActualAgua){
			servAgua=cantidad;
			cantidadActualAgua=cantidadActualAgua-servAgua;
		}
		else{
			servAgua=cantidadActualAgua;
			cantidadActualAgua=0;
			cont++;
		}
		cantidad=12;
		if(cantidad<cantidadActualCafe){
			servCafe=cantidad;
			cantidadActualCafe=cantidadActualCafe-servCafe;
		}
		else{
			servCafe=cantidadActualCafe;
			cantidadActualCafe=0;
			cont++;
		}
		cantidad=2*onza;
		if(cantidad<cantidadActualLeche){
			servLeche=cantidad;
			cantidadActualLeche=cantidadActualLeche-servLeche;
		}
		else{
			servLeche=cantidadActualLeche;
			cantidadActualLeche=0;
			cont++;
		}
		valor=valorPerico8onz;
	}
	ventasAcumuladas+=valor;
	cout<<"Se sirvio Perico: Agua: "<<servAgua<<", Cafe: "<<servCafe<<", Leche: "<<servLeche<<".| Valor: "<<valor<<endl;
	if(cont==0)
	return true;
	else
	return false;
}
bool CAFEMILEX::servirMilo(int opcion){
	float servAgua=0, servLeche=0, servMilo=0,cont=0,valor=0;
	float cantidad=0;
	if(opcion==1){
		cantidad=3*onza;
		if(cantidad<cantidadActualAgua){
			servAgua=cantidad;
			cantidadActualAgua=cantidadActualAgua-servAgua;
		}
		else{
			servAgua=cantidadActualAgua;
			cantidadActualAgua=0;
			cont++;
		}
		cantidad=10;
		if(cantidad<cantidadActualMilo){
			servMilo=cantidad;
			cantidadActualMilo=cantidadActualMilo-servMilo;
		}
		else{
			servMilo=cantidadActualMilo;
			cantidadActualMilo=0;
			cont++;
		}
		cantidad=1*onza;
		if(cantidad<cantidadActualLeche){
			servLeche=cantidad;
			cantidadActualLeche=cantidadActualLeche-servLeche;
		}
		else{
			servLeche=cantidadActualLeche;
			cantidadActualLeche=0;
			cont++;
		}
		valor=valorMilo4onz;
	}else{
			cantidad=6*onza;
		if(cantidad<cantidadActualAgua){
			servAgua=cantidad;
			cantidadActualAgua=cantidadActualAgua-servAgua;
		}
		else{
			servAgua=cantidadActualAgua;
			cantidadActualAgua=0;
			cont++;
		}
		cantidad=20;
		if(cantidad<cantidadActualMilo){
			servMilo=cantidad;
			cantidadActualMilo=cantidadActualMilo-servMilo;
		}
		else{
			servMilo=cantidadActualMilo;
			cantidadActualMilo=0;
			cont++;
		}
		cantidad=2*onza;
		if(cantidad<cantidadActualLeche){
			servLeche=cantidad;
			cantidadActualLeche=cantidadActualLeche-servLeche;
		}
		else{
			servLeche=cantidadActualLeche;
			cantidadActualLeche=0;
			cont++;
		}
		valor=valorMilo8onz;
	}
	ventasAcumuladas+=valor;
	cout<<"Se sirvio Milo: Agua: "<<servAgua<<", Milo: "<<servMilo<<", Leche: "<<servLeche<<".| Valor: "<<valor<<endl;
	if(cont==0)
	return true;
	else
	return false;
}
int CAFEMILEX::getVentasAcumuladas(){
	return ventasAcumuladas;
}
float CAFEMILEX::getCantidadActualAgua(){
	return cantidadActualAgua;
}
float CAFEMILEX::getCapacidadMaximaAgua(){
	return capacidadMaximaAgua;
}
float CAFEMILEX::getCantidadActualLeche(){
	return cantidadActualLeche;
}
float CAFEMILEX::getCapacidadMaximaLeche(){
	return capacidadMaximaLeche;
}
float CAFEMILEX::getCantidadActualMilo(){
	return cantidadActualMilo;
}
float CAFEMILEX::getCapacidadMaximaMilo(){
	return capacidadMaximaMilo;
}
float CAFEMILEX::getCantidadActualCafe(){
	return cantidadActualCafe;
}
float CAFEMILEX::getCapacidadMaximaCafe(){
	return capacidadMaximaCafe;
}
#endif
