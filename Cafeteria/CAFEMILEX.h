#ifndef CAFEMILEX_H
#define CAFEMILEX_H

class CAFEMILEX
{
	public:
		CAFEMILEX();
		//~CAFEMILEX();
		int llenarLeche();
		int llenarCafe();
		int llenarAgua();
		int llenarMilo();
		void setAgua(int agua);
		void setLeche(int leche);
		void setCafe(int cafe);
		void setMilo(int milo);
		int getAgua();
		int getLeche();
		int getCafe();
		int getMilo();
		void servirVaso(int produ, int tam);
		void dibujarNivel();
		
	private:
		int depAgua;
		int depLeche;
		int depCafe;
		int depMilo;
		
};

#endif
