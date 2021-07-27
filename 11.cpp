#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
	
		/*11.  Escribir un programa que lea un carácter e indique si es o no una vocal.*/
		char caracter,a,e,i,o,u ;
	cout<<"bienvenido a el programa que te dice si el caracter que ingresaste es una vocal o no"<<endl;
	cout<<"a continuacion ingrese un caracter en letra minuscula para determinar si es vocal o no "<<endl;
	cin>>caracter;
		switch (caracter)
		{
			case 'a' :
				cout<<"la letra a es una vocal"<<endl;
				break;
			case 'e' :
				cout<<"la letra e es una vocal"<<endl;
				break;
			case 'i' :
				cout<<"la letra i es una vocal"<<endl;
				break;
			case 'o' :
				cout<<"la letra o es una vocal"<<endl;
				break;
			case 'u' :
				cout<<"la letra u es una vocal"<<endl;
				break;
			default: cout<<"la letra o caracter ("<<caracter<<") no es una vocal"<<endl;	
		}
	
		
}
