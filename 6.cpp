#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
	int mes;
	/*6.  Programa que lea una variable entera mes y compruebe si el valor corresponde a un mes de
	30 días, de 31 o de 28. Supondremos que febrero tiene 28 días. Se mostrará además el nombre del mes. 
	Se debe comprobar que el valor introducido esté comprendido entre 1 y 12.*/
cout<<"bienvenido al programa que te dice dependiendo  del numero de mes digitado , te dice cuantos dias tiene ese mes y que nombre de mes tiene"<<endl;
cout<<"a continuacion digite el numero del mes del 1 al 12 "<<endl;
cin>>mes;
switch (mes)
{
	case 1: 
	cout<<"el mes 1 es enero y tiene 31 dias"<<endl	;
	break;
	case 2: 
	cout<<"el mes 2 es febrero y tiene 28 dias"<<endl;	
	break;
	case 3: 
	cout<<"el mes 3 es marzo y tiene 31 dias"<<endl	;
	break;
	case 4: 
	cout<<"el mes 4 es abril y tiene 30 dias"<<endl	;
	break;
	case 5: 
	cout<<"el mes 5 es mayo y tiene 31 dias"<<endl	;
	break;
	case 6: 
	cout<<"el mes 6 es junio y tiene 30 dias"<<endl	;
	break;
	case 7: 
	cout<<"el mes 7 es julio  y tiene 31 dias"<<endl;	
	break;
	case 8: 
	cout<<"el mes 8  es agosto y tiene 31 dias"<<endl	;
	break;
	case 9: 
	cout<<"el mes 9 es septiembre y tiene 30 dias"<<endl;	
	break;
	case 10: 
	cout<<"el mes 10 es octubre y tiene 31 dias"<<endl;
	break;
	
	case 11: 
	cout<<"el mes 11 es noviembre y tiene 30 dias"<<endl;	
	break;
	case 12: 
	cout<<"el mes 12 es diciembre y tiene 31 dias"<<endl;	
	break;
	default : cout<<"la tecla digitada o numero digitado no se encuentra en el intervalo de los 12 meses"<<endl;

}
	
	
	
	
	
	
}
