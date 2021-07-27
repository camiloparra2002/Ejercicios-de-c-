#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()	
{
	  /*2.  Algoritmo que me permita calcular el perímetro de un rectángulo.*/
	int perimetro,n;
	int lee[4];
	char entrar,s;
	
	cout<<"      Bienvenido a el programa que te calcula el perimetro de tu rectangulo    "<<endl;
	cout<<"  para continuar con el programa digite s , si desea cerrarlo  digite otra tecla   "<<endl;
	cin>>entrar;
		while (entrar=='s') 
	{
		 
		 cout<<"   la formula para hallar el  perimetro es la suma de los 4 lados del rectangulo   "<<endl;
		cout<<"                a continuacion digite los 4 lados que tiene su rectangulo          "<<endl;
		
			for(n=1;n<=4;n++)
				{
			
				cin>>lee[n];
				}
			
		
		perimetro=lee[1]+lee[2]+lee[3]+lee[4];
		cout<<" el perimetro de su rectangulo es "<<perimetro<<endl;
		cout<<"desea continuar usando el programa si es asi presione s si no digite otra tecla "<<endl;
		cin>>entrar;
		
	}
	
}
 
