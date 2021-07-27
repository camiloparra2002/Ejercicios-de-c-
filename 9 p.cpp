#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()
{
	/*9.  Algoritmo que pida dos números, los sume, reste, multiplique y divida*/
	int s1,s2 ,r1,r2,m1,m2,d1,d2,suma,resta,multiplicacion,opcion1;
	double division;
	int comenzar;
	cout<<"                         BIENVENIDO A EL PROGRAMA QUE TE DA LA SOLUCION  	"<<endl;
	cout<<"                           A TU SUMA ,RESTA ,MULTIPLICACION Y DIVISION CON DOS NUMEROS "<<endl;
	cout<<"digite 1 para continuar con  el programa"<<endl;
	cin>>comenzar;
	
	while (comenzar==1) 
	{
			
		
		cout<<"                     a continuacion digite de acuerdo a las instrucciones  "<<endl;
		cout<<"                            si deseas hacer una suma + , DIGITA 1   "<<endl; 
		cout<<"                              si deseas hacer una resta - ,DIGITA 2	"<<endl; 
		cout<<"                           si deseas hacer una multiplicacion * ,DIGITA 3 "<<endl;
		cout<<"                            si deseas hacer una division / ,DIGITA 4	"<<endl; 
		cout<<"                  digite lo que desea hacer del 1 al 4 (digite solo una opcion)  "<<endl;
		cin>>opcion1;
		switch(opcion1)
			{
		
				case 1:cout<<"bienvenido a las sumas , digite dos numeros que desea sumar"<<endl;
				cin>>s1>>s2;
				suma=s1+s2;
				cout<<"la suma de  "<<s1<<"  mas  "<<s2<< "  es igual a  "<<suma<<endl;
				cout<<"fin de la operacion"<<endl;
				break;
				case 2:cout<<"bienvenido a las restas , digite dos numeros que desea restar"<<endl;
				cin>>r1>>r2;
				resta=r1-r2;
				cout<<"la resta de  "<< r1<<"  menos "<<r2<< "  es igual a  "<<resta<<endl;
				cout<<"fin de la operacion"<<endl;
				break;
				case 3:cout<<"bienvenido a las multiplicaciones, digite dos numeros que desea multiplicar"<<endl;
				cin>>m1>>m2;
				multiplicacion=m1*m2;
				cout<<"la multiplicacion de  "<< m1<<"  por  "<< m2<< "  es igual a  "<<multiplicacion<<endl;
				cout<<"fin de la operacion"<<endl;
				break;
				case 4:cout<<"bienvenido a las divisiones , digite dos numeros que desea dividir"<<endl;
				cin>>d1>>d2;
				division=d1/d2;
				cout<<"la division de  "<< d1<<"  dividido  "<< d2 <<"  es igual a  "<<division<<endl;
				cout<<"fin de la operacion"<<endl;
				break;
				default :cout<<"el numero o caracter que digito no se encuentra en el menu de operaciones "<<endl;
			}
				
		cout<<" si desea continuar usando el programa digite 1 si no desea continuar digite otro numero"<<endl;
			    
		cin>>comenzar;
		
	}

}
			
