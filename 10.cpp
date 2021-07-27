#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
int dia;
/*10.  Escribir un programa que dado un número del 1 al 7 escriba el correspondiente nombre del día de la semana.*/
cout<<"bienvenido al programa que escribe el correspondiente nombre del día de la semana con un el número del dia del 1 al 7  "<<endl;
cin>>dia;
switch (dia)
	{
	case 1: 
	cout<<"lunes"<<endl	;
	break;
	case 2: 
	cout<<"martes"<<endl	;
	break;
	case 3: 
	cout<<"miercoles"<<endl;
	break;
	case 4: 
	cout<<"jueves"<<endl;
	break;
	case 5: 
	cout<<"viernes"<<endl;
	break;
	case 6: 
	cout<<"sabado"<<endl;
	break;
	case 7: 
	cout<<"domingo"<<endl;	
	break;
	default : cout<<"no ingresaste el numero digitado entre 1 y 7 , opcion equivocada"<<endl;
	}
	
}
