
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
	int mes,ano;


/* 9/El departamento de Recursos Humanos de la empresa caf� Combate quiere desarrollar un calendario en
 l�nea para sus empleados, para calendarizar el n�mero de d�as h�biles de trabajo de tal manera que el 
 empleado introduzca un n�mero de mes (1 a 12), y visualice el n�mero de d�as de ese mes. Debe considerar que 
 el mes 2 corresponde a febrero que pude tener 29 o 28 d�as dependiendo de si es o no bisiesto, el a�o correspondiente. 
 Desarrolle un programa en C++ que cumpla con las especificaciones mencionadas y muestre en pantalla el mes, 
 el n�mero de d�as y en el caso de que sea a�o bisiesto mostrar el mensaje de que es a�o bisiesto.*/
 
 	cout<<"bienvenido al programa del departamento de Recursos Humanos de la empresa caf� Combate"<<endl;
 	cout<<"que te dice dependiendo  del numero de mes digitado , te dice cuantos dias normales y habiles tiene ese mes y que nombre de mes tiene"<<endl;
cout<<"si el ano es bisiesto ,tendra un dia de mas en el a�o y febrero tendria 29 dias"<<endl;
cout<<"digite el a�o en que estamos o el a�o que desea ingresar"<<endl;
cin>>ano;
if ((ano % 4 ==0))
	{
		cout<<"el ano "<<ano<<" es bisiesto"<<endl;
	}

cout<<"a continuacion  digite el numero del mes del 1 al 12  "<<endl;
cin>>mes;


switch (mes)
	{
	case 1: 
	cout<<"el mes 1 es enero  tiene 31 dias y tiene 25 dias habiles de trabajo"<<endl	;
	break;
	case 2: 
	if ((ano % 4 ==0))
	{
		cout<<"como el ano es bisiesto febrero tiene 29 dias el a�o tiene un dia de mas tiene 366 dias "<<endl;
		cout<<"febrero tiene 25 dias habiles en este a�o "<<endl;
	}
	else 
	{
	cout<<"el mes 2 es febrero  tiene 28 dias y tiene 24 dias habiles de trabajo"<<endl;	
	}
		
	break;
	case 3: 
	cout<<"el mes 3 es marzo  tiene 31 dias y tiene 27 dias habiles de trabajo"<<endl;
	break;
	case 4: 
	cout<<"el mes 4 es abril tiene 30 dias y tiene 24 dias habiles de trabajo"<<endl;
	break;
	case 5: 
	cout<<"el mes 5 es mayo  tiene 31 dias y tiene 25 dias habiles de trabajo"<<endl;
	break;
	case 6: 
	cout<<"el mes 6 es junio  tiene 30 dias y tiene 24 dias habiles de trabajo"<<endl;
	break;
	case 7: 
	cout<<"el mes 7 es julio   tiene 31 dias y tiene 25 dias habiles de trabajo"<<endl;	
	break;
	case 8: 
	cout<<"el mes 8  es agosto  tiene 31 dias y tiene 24 dias habiles de trabajo"<<endl;
	break;
	case 9: 
	cout<<"el mes 9 es septiembre  tiene 30 dias y tiene 26 dias habiles de trabajo"<<endl;	
	break;
	case 10: 
	cout<<"el mes 10 es octubre  tiene 31 dias y tiene 25 dias habiles de trabajo"<<endl;
	break;
	
	case 11: 
	cout<<"el mes 11 es noviembre  tiene 30 dias y tiene 24 dias habiles de trabajo"<<endl;	
	break;
	case 12: 
	cout<<"el mes 12 es diciembre  tiene 31 dias y tiene 25 dias habiles de trabajo"<<endl;	
	break;
	default : cout<<"la tecla digitada o numero digitado no se encuentra en el intervalo de los 12 meses"<<endl;

	}
	
	
	
	
	
	
}
