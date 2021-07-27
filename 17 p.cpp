#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{

/*17.  Programa que pida la nota de un estudiante y si esta nota es 
menor a 3 envié un mensaje (lo siento debes recuperar), si es mayor
 o igual a 3 envié un mensaje (muy bien pasaste la materia).*/
 float nota; 
 cout<<" programa que te dice si pasaste o no la materia "<<endl;
 cout<<" a continuacion digite su nota ,estudiante recuerde que la nota debe ser digitada en decimal"<<endl;
 cin>>nota;
  cout<<"recordatorio si saco mas de 3,0 pasaste ,si sacaste menos de 3,0 perdiste "<<endl;
  cout<<"tu nota es "<<nota<<" entonces"<<endl;
	 
	  if (nota>=3) 
	  {
	  cout<<" muy bien pasaste la materia   "<<endl;	
		} 
	  		else
	  		{
	  		cout<<" lo siento debes de recuperar "<<endl;	
			}
	  			
  	
   
}
  
  
