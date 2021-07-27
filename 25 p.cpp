#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{

	/*25.   Calcular el factorial de un número N (siendo N un número que se lee).*/
	int numero,variable,variable2,numasig,variable3;
	
	
	
	cout<<" digite el numero que desea factorizar "<<endl;
	cin>>numero;
	for (numasig =1;  numasig<=numero ;numasig++) 
	{
		for (variable = 1; variable<=numasig ;variable++ )
		{
		cout<<"el factorial de  "<<variable<<" es "<<endl; 
			for (variable2 = 1 ;variable2<=variable ; variable2++)
			{
				if ( variable2== 1 )
				{
				variable3= variable2*variable2;
				}
				else
				{
				variable3=variable3*variable2;	
				}
				
				if (variable2==variable)  
				{
				cout<<variable3<<endl;	
				}
			 
			}
			
			
		}
		
	}
	

}

