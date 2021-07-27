#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
	/*14.    Desarrollar un programa que muestre los pagos que recibirá un trabajador por cada hora laboral en base a la hora del día en que trabaja.
	El usuario deberá escribir el número de horas trabajadas en cada uno de los horarios y el programa determinará el total de dinero a recibir por el
	 trabajador y también dirá si ganó más dinero por horas extras que por horas de oficina trabajadas o viceversa, o si el trabajador ganó exactamente
	  lo mismo por horas extras que por horas de oficina. De la galería de productos, el usuario introducirá el código y el número de unidades del producto 
	que desea comprar. El programa determinará el total a pagar, como una factura.*/
	int valorhora,horallegada,horasalida,calculotrabajodia,pagohorastandar,tomadehorasextras,calculo,calculovalorhorasext,total;
	cout<<"bienvenido a la calculadora de salarios"<<endl;
	cout<<"cuanto gana por hora el trabajador ,digite el valor en pesos"<<endl;
	cin>>valorhora;
	cout<<"escriba cual es su horario de trabajo de lunes a viernes normal desde a que hora y hasta que hora en formato de 24 horas"<<endl;
	cin>>horallegada>>horasalida;
	calculotrabajodia=horasalida-horallegada;
	/*despues de trabajar  mas de 8 horas es considerado trabajar horas extras */
	if (calculotrabajodia<=8)
	{	/*horas de oficina */
		pagohorastandar=valorhora*calculotrabajodia;
		calculovalorhorasext=0;
		total=pagohorastandar;
	}
	else
	{		/*horas extras  ,las horas extras valen un 25 % que una hora en horario habitual*/
		if (calculotrabajodia>8) 
		{	tomadehorasextras=calculotrabajodia-8;
			calculo=tomadehorasextras*valorhora;
			calculovalorhorasext=((((tomadehorasextras*valorhora)/100 )*25)+calculo);
			pagohorastandar=valorhora*8;
			total =calculovalorhorasext+pagohorastandar;
		}
		
	} 

	system ("cls");
	cout<<"**************FACTURA DEL SALARIO************"<<endl;
	cout<<"******el valor de la horas trabajadas habituales es de $"<<pagohorastandar<<"***********"<<endl;
	cout<<"******el valor de la horas extras trabajadas s es de $"<<calculovalorhorasext<<"***********"<<endl;
	cout<<"******el valor de la horas en total es de $"<<total<<"***********"<<endl;
	if (pagohorastandar==total)
	{
		cout<<"********el trabajador gano la misma cantidad por horas extras como por horas habituales*****"<<endl;
	}	
	
	if (pagohorastandar>total)
	{
		cout<<"******se gano mas en horas habituales que en horas extras*******"<<endl;
	}
	else
	{
	cout<<"********se gano mas en horas extras que en horas habituales**********"<<endl;	
	}
}
