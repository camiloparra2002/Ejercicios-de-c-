#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
		
		/*8.  Un cliente ordena cierta cantidad de brochas de cerda, rodillos y sellador; las brochas de cerda tienen un 20% de descuento y los rodillos un 15% de descuento. 
		Los datos que se tienen por cada tipo de artículo son: la cantidad pedida y el precio unitario. Además, si se paga de contado todo tiene un descuento del 7%.
		 Elaborar un programa en C++ que calcule y muestre en pantalla el costo total de la orden, tanto para el pago de contado como para el caso de pago de crédito.*/
		 float cantidaddebrochas,costobrocha,calculodedesb,costocondesb,cantidadderod,costorod,calculodedesr,costocondesr,cantidaddesell,costosell,calculodesctotal,totalsindes,totalcondes;
		 int opcion;
		 cout<<"bienvenido a el programa que calcula la orden del cliente"<<endl;
		 cout<<" a continuacion cuantas brochas de cerda va a comprar ,recuerde que el costo de la brocha es de $5000 y tiene un descuento del 20% ,solo las brochas"<<endl;
		 cin>>cantidaddebrochas;
		 costobrocha=5000*cantidaddebrochas;
		 calculodedesb= (costobrocha/100)*20;
		 costocondesb=costobrocha-calculodedesb;
		 cout<<"el costo solo de las brochas es de $ "<<costocondesb<<" pesos "<<endl;
		 
		 cout<<" a continuacion cuantos rodillos  va a comprar ,recuerde que el costo de los rodillos es de $10000 y tiene un descuento del 15% ,solo los rodillos"<<endl;
		 cin>>cantidadderod;
		 costorod=10000*cantidadderod;
		 calculodedesr= (costorod/100)*15;
		 costocondesr=costorod-calculodedesr;
		 cout<<"el costo solo de los rodillos es de $ "<<costocondesr<<" pesos "<<endl;
		 
		 
		 cout<<" a continuacion cuantos selladores  va a comprar ,recuerde que el costo de los selladores es de $4000 "<<endl;
		 cin>>cantidaddesell;
		 costosell=4000*cantidaddesell;
		
		 cout<<"el costo solo de los selladores es de $ "<<costosell<<" pesos "<<endl;
		 cout<<"en que desea pagar la compra a contado o a credito ,si es a contado le hacemos un descuento del 7% a la compra si es asi  digite 1 , si es a credito digite 2 "<<endl;
		 cin>>opcion;
		 switch (opcion)
			 {
			 	case 1 :
			 		calculodesctotal=((costocondesb+costocondesr+costosell)/100)*7;
		 			totalsindes=costocondesb+costocondesr+costosell;
		 			totalcondes=totalsindes-calculodesctotal;
		  			cout<<"el costo total de la compra es de $"<<totalsindes<<" pesos  pero ala compra le hacemos un descuento del 7% y el valor total a pagar es de $"<<totalcondes<< " pesos"<<endl;
			 		break;
			 	case 2 :
				 	totalsindes=costocondesb+costocondesr+costosell;
				 	cout<<"el costo total de la compra a credito es de $"<<totalsindes<<" pesos "<<endl;
				 	break;
			 	default: cout<<" la tecla digitada no corresponde con  el menu de opciones , PROGRAMA FINALIZADO"<<endl;
			 }
		 
		 
}
 
 
 
