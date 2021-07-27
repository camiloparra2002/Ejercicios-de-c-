/*3.  Escriba un programa que lea temperaturas expresadas en grados Fahrenheit y las convierta a grados Celsius mostrandola. 
El programa finalizara cuando lea un valor de temperatura igual a 999. La conversion de grados Fahrenheit (F) a Celsius (C) esta dada por
C = 5/9(F - 32).*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main ()	
{	
	float gradosf,celsius; 
	
	cout<<"escriba una temperatura en grados fahrenheit  para pasarla a grados celcius ,solo digite el numero de la temperatura"<<endl;
	cin>>gradosf;
	if (gradosf==999)
	{
	cout<< "el programa finalizo por que ingresaste una temperatura igual a 999 fahrenheit "<<endl;
	}
	else
	{
	celsius =  ( gradosf - 32 )*5/9 ;
	cout<<"la temperatuta que usted ingreso es de "<<gradosf<<"  grados fahrenheit convertida a grados celsius queda en "<<celsius<<" grados celsius  "<<endl;
	}

	

}

