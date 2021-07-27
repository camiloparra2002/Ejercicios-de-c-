#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
/*24.   Imprimir los números de 1 a N (siendo N un número que se lee) cada uno con su respectivo factorial.*/
int numero,variable,variable2,numasig,variable3,a,b,c;
cout<<" digite un numero el cual desea factorizar "<<endl;
cin>>numero;
 for (numasig=1 ; numasig<=numero; numasig++ ) 
 {
 	for (variable=1 ; variable<=numasig; variable++ )
 	{
 	cout<<endl<<"el factorial de  "<<variable <<" es "; 
 		for ( variable2=1 ; variable2<=variable;variable2++ ) 
 		{
 		if(variable2==1)
 		{
 		variable3=variable2*variable2;	
		}
 		else
 		{
 		variable3=variable3*variable2;	
		 }
 		if(variable2==variable)
		 {
		 cout<<variable3;	
		  } 
 		
 			
		 }
 			
 	}
 
 	
 }
 

}
