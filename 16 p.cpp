#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	/*16.  Programa que a los números mayores de 20 y menores de 40 les sume 15*/
	int n1,n2,suma;
	 cout<<" bienvenido a el Programa que a los números mayores de 20 y menores de 40 les suma 15 "<<endl;
	 cout<<"  a continuacion digite 2 numeros que desee ingresar "<<endl;
	 cin>>n1;
	 cin>>n2;
	 if ((n1>20) and (n1<40))  
			{
			suma=n1+15;
			cout<<" como  " <<n1<< " es mayor a 20 y menor a 40 se le suma 15 y quedaria " <<suma<<endl;	
			}
			else
			{
			cout<<" el primer numero que es  "<<n1<< "  no es mayor a 20 ,o es superior a 40 entonces queda igual"<<endl;	
			}
			if ((n2>20) and (n2<40)) 
			{
			suma=n2+15;
				 cout<<" como  "<<n2<< " es mayor a 20 y menor a 40 se le suma 15 y quedaria "<<suma<<endl;	
			}
				else  
				{
				cout<<" el segundo numero que es  "<<n2<< "  no es mayor a 20 o es superior a 40 entonces queda igual "<<endl;	
				}
				
		
}
