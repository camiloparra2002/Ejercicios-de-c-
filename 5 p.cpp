#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()	
{
	/*5.  Algoritmo que me permita calcular la edad de una persona*/
	int edadpersona,anodenacimiento,anoactual;
	
	 cout<<" BIENVENIDO A EL PROGRAMA QUE TE CALCULA LA EDAD DE UNA PERSONA "<<endl;
	 cout<<" a continuacion digite el ano de su fecha de nacimiento "<<endl;
	 cin>>anodenacimiento;
	 cout<<" a continuacion digite el ano actual en el que estamos"<<endl;
	 cin>>anoactual;
	 edadpersona=anoactual-anodenacimiento;
	 cout<<" la edad de esa persona es  "<<edadpersona<< " anos "<<endl;
	 
	 
}
