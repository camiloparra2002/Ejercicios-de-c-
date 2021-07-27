#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
/*19.  Una papelería debe calcular las diferentes cantidades de
 fotocopias a sacar. El precio unitario de cada fotocopia es de
  $100 debe digitarse la cantidad de copias. Mostrar el total a 
  pagar teniendo en cuenta que se tiene una política de descuento
  para cantidades que se obtengan del mismo original así: el 12%
   para fotocopias entre 100 y 200, del 15% para fotocopias 
   entre 201 y 400, y del 18% para fotocopias por cantidades mayores a 400.*/
   
   float cantidadfotocopias,preciounit,preciototal;
   float preciocondes;
   cout<<" bienvenido a el programa de la papeleria que te calcula el costo de las fotocopias en total con o sin descuento "<<endl;
    cout<<" a continuacion digite la cantidad de fotocopias que va a sacar "<<endl;
    cin>>cantidadfotocopias;
    preciounit=100;
    	if ((cantidadfotocopias>=100) and (cantidadfotocopias<=200)) 
    	{
    	preciototal=preciounit*cantidadfotocopias ;
    	preciocondes=preciototal*88/100;
    	 cout<<" el total a pagar por las "<<cantidadfotocopias<<" fotocopias incluyendole el 12 % de descuento es de $"<<preciocondes<<"  pesos "<<endl;	
		}
    	else 
    	{
    	 if ((cantidadfotocopias>201) and (cantidadfotocopias<=400)) 
    	 {
    	 	preciototal=preciounit*cantidadfotocopias; 
    		preciocondes=preciototal*85/100;
    		 cout<<" el total a pagar por las "<<cantidadfotocopias<<" fotocopias incluyendole el 15 % de descuento es de $"<<preciocondes<<"  pesos "<<endl;
		 }
    	else
    		{
    		 if  (cantidadfotocopias>400) 
    		 {
    		 	preciototal=preciounit*cantidadfotocopias; 
    			preciocondes=preciototal*82/100;
    			 cout<<" el total a pagar por las "<<cantidadfotocopias<<" fotocopias incluyendole el 18 % de descuento es de $"<<preciocondes<<"  pesos "<<endl;	
			 }
    			
			}		
		}
    	
    			
    

   				   
}
   
