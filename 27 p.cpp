
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	/*27.   Leer un dato y almacenarlo en la variable n. Calcular el valor de 2 elevado a la potencia n*/
	 int dato,n,valorde2elavadon;
	cout<<"bienvenido a el programa que te da el valor de 2 , elevado a cualquier potencia que desee ingresar "<<endl;
	cout<<" a continuacion escriba una potencia la cual va ser elevada a el 2 "<<endl;
	cin>>dato;
	n=dato;
	valorde2elavadon=pow(dato,2);
	cout<<"se calculo el valor de 2 elevado a la potencia  "<<n<<" y dio como resultado = "<<valorde2elavadon<<endl;
	

}
