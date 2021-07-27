#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	
/*15.  Programa que a los números mayores de 20 les sume 10*/
int n1,n2,n3,suma;
cout<<" bienvenido a el Programa que a los números mayores de 20 les suma 10 "<<endl;
cout<<"a continuacion digite 3 numeros que quiera ingresar "<<endl;
cin>>n1;
cin>>n2;
cin>>n3;		
	if (n1>20) 
	{
		suma=n1+10;
		cout<< " como  " <<n1<< " es mayor a 20 se le suma 10 y daria "<<suma<<endl;
	}			
		else
	{
		cout<<" el primer numero que es  "<<n1<<"  no es mayor a 20 ,entonces queda igual "<<endl; 
	}
		if (n2>20) 
		{
		suma=n2+10;
			cout<<" como  "<<n2<<" es mayor a 20 se le suma 10 y daria "<<suma<<endl;	
		}
			else
			{
			cout<<" el segundo numero que es  "<<n2<< "  no es mayor a 20 ,entonces queda igual "<<endl;	
			}	
				if (n3>20) 
				{
				suma=n3+10;
				cout<<" como  "<<n3<< " es mayor a 20 se le suma 10 y daria "<<suma<<endl;	
				}
			
				else 
				{
				cout<<" el tercer numero que es "<<n3<< " no es mayor a 20 ,entonces queda igual "<<endl;	
				}
}
			

