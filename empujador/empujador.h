#if !defined(_empujador_h)
#define _empujador_h 1
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
void pinicial(char tablero[5][5])
{
	srand(time(NULL));
	for(int i = 0; i<5; i++){ //Se crea tablero vacío
		for(int j = 0; j<5;j++){
			tablero[i][j]='-';
		}
	}

	int cont=0,x,y;
	do{
		x=rand()%5;
		y=rand()%5;
		if(tablero[x][y]=='-'){//Se busca una casilla libre para agregar el empujador						
			tablero[x][y]='E';
		}	
		cont++;
	}while(cont<1);
	
	int cont_obstaculo = 0;	
	do{
		x=rand()%5;
		y=rand()%5;
		if(tablero[x][y]=='-'){ //Se buscan casillas vacías para agregar los obstáculos
			tablero[x][y]='O';
			cont_obstaculo++;
		}
	}while(cont_obstaculo<7);
}

void imprime(char tablero[5][5]){
	for(int i = 0; i<5; i++){ 
		for(int j = 0; j<5;j++){
			cout<< tablero[i][j]<<"   ";
		}
		cout<<endl<<endl;
	}		
}

void imprimeenarchivo(char tablero[5][5]){
	//Imprimer el tablero en archivo .txt
}

void mueve(char tablero[5][5]){
	bool yamovio=false;
	do
	{
		int x=rand()%5; 
		int y=rand()%5; //Escoger una casilla destino a probar
		if(tablero[x+1][y]=='E')//Si el empujador está en la casilla contigua Este de la escogida
		{
			if(tablero[x][y]=='O'){//si hay una O en la casilla esogida
				if(x-1>0)//Si la O se puede correr sin salirse
				{
					tablero[x][y]='E';//Mueve la E
					tablero[x+1][y]='-';
					tablero[x-1][y]='O';//Mueve la O
					yamovio=true;
				}	
			}else //Si sólo hay vacío '-'
			{
				tablero[x][y]='E';//Mueve la E
				tablero[x+1][y]='-';
				yamovio=true;
			}		
		}
		
		if(tablero[x-1][y]=='E')//Si el empujador está en la casilla contigua Oeste de la escogida
		{
			if(tablero[x][y]=='O'){//si hay una O en la casilla esogida
				if(x+1<5)//Si la O se puede correr sin salirse
				{
					tablero[x][y]='E';//Mueve la E
					tablero[x-1][y]='-';
					tablero[x+1][y]='O';//Mueve la O
					yamovio=true;
				}	
			}else //Si sólo hay vacío '-'
			{
				tablero[x][y]='E';//Mueve la E
				tablero[x-1][y]='-';
				yamovio=true;
			}		
		}
		if(tablero[x][y+1]=='E')//Si el empujador está en la casilla contigua sur de la escogida
		{
			if(tablero[x][y]=='O'){//si hay una O en la casilla esogida
				if(y-1>0)//Si la O se puede correr sin salirse
				{
					tablero[x][y]='E';//Mueve la E
					tablero[x][y+1]='-';
					tablero[x][y-1]='O';//Mueve la O
					yamovio=true;
				}	
			}else //Si sólo hay vacío '-'
			{
				tablero[x][y]='E';//Mueve la E
				tablero[x][y+1]='-';
				yamovio=true;
			}		
		}
		
		if(tablero[x][y-1]=='E')//Si el empujador está en la casilla contigua norte de la escogida
		{
			if(tablero[x][y]=='O'){//si hay una O en la casilla esogida
				if(y+1<5)//Si la O se puede correr sin salirse
				{
					tablero[x][y]='E';//Mueve la E
					tablero[x][y-1]='-';
					tablero[x][y+1]='O';//Mueve la O
					yamovio=true;
				}	
			}else //Si sólo hay vacío '-'
			{
				tablero[x][y]='E';//Mueve la E
				tablero[x][y-1]='-';
				yamovio=true;
			}				
		}
				
}while(yamovio==false);
//verificar si E está en alguna de las otras tres casilla contiguas [x][y+1],[x-1][y],[x][y-1] y mover, o escoger otra casilla
}

bool verifica(char tablero[5][5]){
	int obstaculos = 0;
	for(int i = 0; i<5; i++){ 
		for(int j = 0; j<5;j++){
			if((tablero[i][j])== 'O'){
				obstaculos++;
			}
		}
	}
	if((obstaculos) == 7){
		return true;
	}else{
		return false;
	}		
}
#endif

