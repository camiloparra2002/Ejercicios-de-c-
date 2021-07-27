#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()	
{
int opcionnum,suma,resta,multiplicacion,inicio;
float n1,n2,division;
	do 
	{

		
		/*15.  Realizar un programa que pida dos números enteros por teclado y muestra por pantalla el siguiente menú:
		MENU
		1.  Sumar
		2.  Restar
		3.  Multiplicar
		4.  Dividir
		Elija la Opción Deseada:
		
		El usuario deberá elegir una opción y el programa deberá mostrar el resultado por pantalla.
		 Además, para que en aquellos casos en los que el usuario elige una opción distinta de las 4 posibles 
		 el programa muestre un mensaje de error (por ejemplo: "Error. Opción no válida" y a continuación finalice.*/
		 
	cout<<"Bienvenido a el programa que te suma,resta,multiplica con dos numeros que desee ingresar"<<endl;
	cout<<"**************************MENU*****************************"<<endl;
	cout<<"\t\t\t 1. Suma"<<endl;
	cout<<"\t\t\t 2. Resta"<<endl;
	cout<<"\t\t\t 3. Multiplicar"<<endl;
	cout<<"\t\t\t 4. Dividir"<<endl;
	cout<<"\t\t      Elija la opcion deseada"<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cin>>opcionnum;
	 switch (opcionnum)
	 	{
	 	case 1 :
	 		cout<<"Bienvenido a la suma a continuacion digite dos numeros para sumarlos"<<endl;
	 		cin>>n1>>n2;
	 		suma=n1+n2;
	 		cout<<" el primer numero digitado es "<<n1<< " y el segundo numero digitado es "<<n2<<endl;
	 		cout<<"  la suma fue  "<<n1<<" + "<<n2<<" = " <<" = "<<suma<<endl;
	 		break;
	 	case 2 :
	 		cout<<"Bienvenido a la resta a continuacion digite dos numeros para restarlos"<<endl;
	 		cin>>n1>>n2;
	 		resta=n1-n2;
	 		cout<<" el primer numero digitado es "<<n1<< " y el segundo numero digitado es "<<n2<<endl;
	 		cout<<"  la resta fue  "<<n1<<" - "<<n2 <<" = "<<resta<<endl;
	 		break;
	 	case 3 :
	 		cout<<"Bienvenido a la multiplicacion a continuacion digite dos numeros para multiplicarlos"<<endl;
	 		cin>>n1>>n2;
	 		multiplicacion=n1*n2;
	 		cout<<" el primer numero digitado es "<<n1<< " y el segundo numero digitado es "<<n2<<endl;
	 		cout<<"  la multiplicacion fue  "<<n1<<" * "<<n2<<" = "<<multiplicacion<<endl;
	 		break;
	 	case 4 :
	 		cout<<"Bienvenido a la division a continuacion digite dos numeros para dividirlos"<<endl;
	 		cin>>n1>>n2;
	 		division=n1/n2;
	 		cout<<" el primer numero digitado es "<<n1<< " y el segundo numero digitado es "<<n2<<endl;
	 		cout<<"  la division fue  "<<n1<<" / "<<n2<<" = " <<" = "<<division<<endl;
	 		break;
	 		default :
	 		cout<<"Error. Opción no válida y a continuacion finalice."<<endl;
	 		system ("pause");
	 		system ("cls");
	 		
	 		
		 	
		}
	cout<<"desea continuar usando el programa si es asi digite 1 , si no presione otra tecla"<<endl;
	cin>>inicio;
	system ("pause");
	system ("cls");
	
	 
	} 
	while (inicio==1);
	
}
 
 

