#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
	{
	float num1,num2,num3;	
/*7.  El maestro de la clase de Matemáticas quiere determinar cuál es la calificación más alta de
su grupo, forma grupos de tres calificaciones y las captura. Desarrollar un programa en C++, el cual determine el mayor de las tres calificaciones, el programa debe mostrar en pantalla la
calificación mayor.*/

cout<<"bienvenido a el programa que te calcula la nota mas alta entre tres calificaciones"<<endl;
cout<<"a continuacion digita las 3 calificaciones"<<endl;
cin>>num1>>num2>>num3;
	if ( (num1>num2) and (num1>num3))
	{
		cout<<"la calificacion mas alta de las 3 notas  es "<<num1<<endl;
	}
	if ((num2>num1)  and (num2>num3))
	{
		cout<<"la calificacion mas alta de las 3 notas  es "<<num2<<endl;
	}
	if ((num3>num2) and (num3>num2))
	{
		cout<<"la calificacion mas alta de las 3 notas  es "<<num3<<endl;
	}
	
}
