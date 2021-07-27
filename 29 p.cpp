#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()
{
	/*29. Realizar 5 ejercicios donde se evidencie:
	a. Manejo de mientras 
	b. Repetir hasta qué. 
	c. Para	
	d. Si (simple y anidado)
	e. Según (caso)*/
	
	/*planteamiento del programa
	en un negocio de comidas rapidas  se tine un programa que
	 calcula el costo de todas las comidas que se venden ,las comidas
	 que se venden son hamburguesa ,perro caliente y papas fritas ,ademas este 
	programa calcula los servicios que alli ofrecen como lo 
	son el wifi ,zona de juegos,estos servicios son opcionales */
	int opcioncomida,cantidadcomida,totalcontodo,n,preciodec,bienvenido;
	char s,entrar,comenzarserv,a;
	
	 cout<<" bienvenido a el programa de las comidas rapidas doña mari "<<endl;
	 cout<<" para continuar con el programa digite s "<<endl;
	  cin>>entrar;
	 while (('S'==entrar)||('s'==entrar)) 
	 {
	 	
	 
		cout<<" a comtinuacion vendemos estas comidas cual desea  comprar"<<endl;
		cout<<"las comidas que se venden son hamburguesa a $5000 ,perro caliente $4000 y papas fritas $3000 "<<endl;
		cout<<" si quiere comprar una hamburguesa DIGITE 1 , SI DESEA UN perro caliente DIGITE 2 y  SI DESEA UNAS papas fritas DIGITE 3 "<<endl;
	   	cout<<"si quiere comprar las 3 cosas DIGITE 4,el combo completo cuesta $12.000 "<<endl;
	   	cout<<"si desea comprar dos cosas del menu como la hamburguesa y papas fritas DIGITE 5 , cada combo cuesta $8000 "<<endl;
	    cout<<"si desea comprar dos cosas del menu como el perro caliente y papas fritas DIGITE 6, cada combo cuesta $7000 "<<endl;
	    cout<<"si desea comprar dos cosas del menu como la hamburguesa y perro caliente DIGITE 7 , cada combo cuesta $9000 "<<endl;
	    cout<<" A CONTINUACION DIGITE LO QUE DESEA LLEVAR "<<endl;
	     cin>>opcioncomida;
		     switch ( opcioncomida)
		     {
			 
			     case 1: cout<<"cuantas hamburguesas vas a comprar"<<endl;
			     cin>>cantidadcomida;
			     preciodec=5000*cantidadcomida;
			     cout<<" el costo de las hamburguesas es de $"<<preciodec<<endl;
			     break;
			     
			     
			     case 2:cout<<"cuantas perros calientes  vas a comprar"<<endl;
			     cin>>cantidadcomida;
			     preciodec=4000*cantidadcomida;
			     cout<<" el costo de los perros calientes es de $"<<preciodec<<endl;
			     break;
			     
			     case 3:cout<<"cuantas papas fritas vas a comprar"<<endl;
			    cin>>cantidadcomida;
			     preciodec=3000*cantidadcomida;
			     cout<<" el costo de las papas fritas es de $"<<preciodec<<endl;
			     break;
			     
			     case 4:cout<<"cuantos combos vas a comprar"<<endl;
			     cin>>cantidadcomida;
			     preciodec=12000*cantidadcomida;
			     cout<<" el costo de los combos es de $"<<preciodec<<endl;
			     break;
			     
			     case 5:cout<<"cuantas hamburguesas  y papas fritas vas a comprar"<<endl;
			    cin>>cantidadcomida;
			     preciodec=8000*cantidadcomida;
			     cout<<" el costo de las hamburguesas  y papas fritas  es de $"<<preciodec<<endl;
			     break;
			     
			     case 6:cout<<"cuantos perros calientes y papas fritas vas a comprar "<<endl;
			     cin>>cantidadcomida;
			     preciodec=7000*cantidadcomida;
			     cout<<" el costo de los perros calientes y papas fritas  es de $"<<preciodec<<endl;
			     break;
			     
			     case 7:cout<<"cuantas hamburguesas y perros calientes vas a comprar"<<endl;
			     cin>>cantidadcomida;
			     preciodec=9000*cantidadcomida;
			     cout<<" el costo de las hamburguesas y perros calientes es de $"<<preciodec<<endl;
			     break;
			     
				 default: cout<<"la tecla digitada no se encuentra en el menu de opciones "<<endl;
				 
	    	}
	     cout<<" ofrecemos servicios especiales como wifi y zona de juegos si desea adquirirlos presione a sino presione otra tecla "<<endl;
	     cin>>comenzarserv;
	     
	    	 if (comenzarserv=='a')
			 {
			 	cout<<"  accediste a los servicios ,el costo de los dos servicios es de $10000 "<<endl;
			     totalcontodo=preciodec+10000;
			     cout<<" el total a pagar por la comida y los servicios es de $"<<totalcontodo<<endl;
			 }
	     		else
	     		{
	     		cout<<" fin de el programa ,cancele el valor a pagar que es de $"<<preciodec<<endl;
			  	} 
	   	 	for (n=1 ; n<=2 ; n++)
	   	 	{
	   	 	cout<< " gracias por su compra muchos exitos !!!!!!"<<endl;	
			}
			    
	    cout<<"desea seguir comprando algo mas si desea seguir comprando digite s si no presiona otra tecla "<<endl;
	    cin>>entrar;
	    
	}
}


