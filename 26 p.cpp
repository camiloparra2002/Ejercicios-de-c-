#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
		
	/*26.   Leer 20 n�meros y encontrar el mayor y el menor valor le�dos*/
	int variable,variable2,variable3,numasig;
	cout<<" bienvenido a el programa que lee 20 n�meros y encuentra el  numero de mayor y el de menor valor le�dos "<<endl;
	for (numasig=0; numasig<=20; numasig++)
	{
		cin>>variable;
		if (numasig==0) 
		{
		variable3=variable;
		variable2=variable;	
		}
		else
		{
		if (variable<variable3) 
		{
		variable3=variable;	
		}
		
		}
		
		if (variable>variable2 )
		{
		variable2=variable;
		}
		
		
		
	 } 
	
	cout<<" el numero menor de todos los 20 numeros es  "<<variable3<<endl;
	cout<<" el numero mayor  de todos los 20 numeros es  "<<variable2<<endl;
	
}

