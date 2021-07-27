#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
	float num1,num2,division;
	/*5.  Programa que lea dos números por teclado y muestre el resultado de la división 
	del primer número por el segundo. Se debe comprobar que el divisor no puede ser cero.*/
	cout<<"bienvenido a el programa que te lee dos numeros y te los divide ,el primer numero es el numerador y el segundo el dividendo"<<endl;
	cin>>num1>>num2;
	if (num2==0)
	{
		cout<<"el dividendo no puede ser cero ,ERROR"<<endl;
	}
	else
	{
		division=num1/num2;
	cout<< " la division de "<<num1<<" dividido entre "<<num2<<" da  "<<division<<" en otras terminos  "<<num1<<"/"<<num2<<"="<<division<<endl;
	}
	

}


