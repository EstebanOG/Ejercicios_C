#ifndef PUNTO_H
#define PUNTO_H

class Punto
{
	public:
		Punto();
		~Punto();
		void SetsuX(float x); // sets the value of suX
		float GetsuX(); // returns the value of suX
		void SetsuY(float x); // sets the value of suY
		float GetsuY(); // returns the value of suY
	private:
		float suX;
		float suY;
	protected:
};

#endif

