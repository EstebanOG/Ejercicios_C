#include<iostream>
#include<cmath>
#include "sexagra.h"
using namespace std;
int main(){
int opcion;
double g,m,s,r;
double rads;
double grados, minutos, segundos;
cout<<"1. Grados->Radianes"<<endl;
cout<<"2. Radianes ->Grados"<<endl;
cout<<"Pulsa 1 o 2"<<endl;
cin>>opcion;
if(opcion==1) {
 cout<<"Dame los grados: ";cin>>g;
 cout<<"Dame los minutos: ";cin>>m;
 cout<<"Dame los segundos: ";cin>>s;
 SexagRad ang(g,m,s);
 rads=ang.gra2sexa();
 cout<<"El ángulo en radianes vale "<<rads<<endl;
 }
else {
 cout<<"Dame el ángulo en radianes: "; cin>>r;
 RadSexag1 ang1(r);
 grados=ang1.rad2gra1();
 minutos=ang1.rad2gra2();
 segundos=ang1.rad2gra3();
 cout<<r<<" radianes son "<<grados<<" grados y ";
 cout<<minutos<<" minutos y ";
 cout<<segundos<<" segundos"<<endl;
 }
return 0;
}
