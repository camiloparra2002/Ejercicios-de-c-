#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()	
{

    /*1.  Algoritmo que me permita calcular el área de un triángulo.*/
	int base,altura,areatriangulo;
	char s,entrar;

	cout<<"   bienvenido a el algoritmo que calcula el area de un triangulo     "<<endl;
	cout<<"para continuar con el programa digite s(minuscula) si no digite otra tecla"<<endl;
	cin>>entrar;
while (entrar=='s') 
		{	

			cout<<" a continuacion para hallar el area de un triangulo digite  primero la base y"<<endl; 
			cout<<"despues la altura del triangulo (todo en cms)"<<endl;
			cin>>base;
			cin>>altura;
			cout<<" la formula para hallar el area de un triangulo es base por altura divido 2 osea a*b/2"<<endl;
			areatriangulo=altura*base/2;
			cout<<"la area del triangulo es "<<areatriangulo<<" cms"<<endl;
			cout<<"desea continuar usando el programa si es asi presione s (minuscula) si no es asi presione otra tecla)"<<endl;
			cin>>entrar;
		}
	
	cout<<"fin del programa"<<endl;
	
}
