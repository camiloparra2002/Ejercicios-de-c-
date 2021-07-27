#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()
{

	/*28.   Leer un dato y almacenarlo en la variable n, leer otro 
	dato y almacenarlo en la variable x. Calcular el valor de x 
	elevado a la potencia n.*/
	
	int numerox,potencian,elavarpotencia;
	
	
	cout<<"bienvenido a el programa que te calcula la potencia de cualquier numero "<<endl;
	cout<<" a continuacion escribe el numero a el cual le quiere elevarle la potencia despues "<<endl;
	cin>>numerox;
	cout<<" ahora digite el numero de la pòtencia para elevarle ese numero a "<<numerox<<endl;
	cin>>potencian;
	elavarpotencia=pow(numerox,potencian);
	cout<<" ya se hizo la operacion , dio asi  "<<numerox<<" ^ "<<potencian<<" = "<<elavarpotencia<<endl;

}

