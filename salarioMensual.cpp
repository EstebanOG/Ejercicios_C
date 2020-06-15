#include <iostream>

using namespace std;

float salarioMensual(int,float);//Prototipo

int main()
{
	int horasTrabajadas;
	float salarioMMV;
	cout<<"Ingrese la horas trabajadas en el mes: ";
	cin>>horasTrabajadas;
	cout<<"Ingrese el salario minimo mensual vigente(SMMV): ";
	cin>>salarioMMV;
	cout<<"El salario mensual es: "<<salarioMensual(horasTrabajadas,salarioMMV)<<endl;
	return 0;
}

float salarioMensual(int horasT, float SMMV)
{
	int diasTrabajados, horasExtra;
	float valorDia, valorHoraOrdinaria, valorHoraExtra, valorDiaTransporte, salarioMensual;
	
	//Valores día trabajado, hora ordinaria, hora extra y subsidio de transporte diario
	valorDia = SMMV/24;
	valorHoraOrdinaria = valorDia/8;
	valorHoraExtra = 1.75 * valorHoraOrdinaria;
	valorDiaTransporte = valorDia/10;
	cout<<"Valor día: "<<valorDia<<endl;
	cout<<"Valor hora ordinaria: "<<valorHoraOrdinaria<<endl;	
	cout<<"Valor hora extra: "<<valorHoraExtra<<endl;
	cout<<"Valor dia Transporte: "<<valorDiaTransporte<<endl;
	
	//Calculo de horas ordinarias y horas extra
	if(horasT>240)
	{
		horasT = 240;
		horasExtra = horasT-192;
		horasT = 192;
	}
	else if(horasT>192)
	{
		horasExtra = horasT-192;
		horasT = 192;
	}
	else
	{
		horasExtra = 0;
	}
	cout<<"Horas Extra: "<<horasExtra<<endl;
	cout<<"Horas trabajadas: "<<horasT<<endl;
	
	//Calculo de días trabajados
	diasTrabajados = horasT/8;//Días completados
	if(diasTrabajados%8 != 0)//Fracción de día 
	{
		diasTrabajados = diasTrabajados + 1;
	}
	cout<<"Dias trabajados: "<<diasTrabajados<<endl;
	
	//Calculo salario mensual
	salarioMensual = (diasTrabajados*valorDia) + (diasTrabajados*valorDiaTransporte) + (horasExtra*valorHoraExtra);
	
	return salarioMensual;
}
