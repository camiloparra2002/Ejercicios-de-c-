#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()	
{	

	/*2.  Dado un número entero, determinar si es primo o no.*/
	int numero,n,numerodivisores;
	
	cout<<"ingrese un numero entero  para saber si es primo o no ?"<<endl;
	cin>>numero;
 for (n=1;n<=numero;n++)
 {
 	if (numero % n == 0)
 	{
 	numerodivisores=numerodivisores+1;
	 }
 }
 	if (numero>=1)
		{
		cout<<"el numero "<<numero<<" ingresado no es un numero primo"<<endl;	
		}
		else
		{
			if (numerodivisores==2)
	{
	cout<<"el numero "<<numero<<" ingresado es un numero primo"<<endl;	
	}
	else
	{
	cout<<"el numero "<<numero<<" ingresado no es un numero primo"<<endl;	
	}	
		}
	
	
 

}
