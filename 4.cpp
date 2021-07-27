#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{	
char opcion;	
/*4/Escriba un programa que cuente por pantalla del 1 al 10 en español. Utiliza una estructura
switch que incluya la cláusula  default.*/

cout<<"bienvenido a el programa que te cuenta los numeros del 1 al 10 por pontalla"<<endl;
cout<<"si desea ver los numeros del 1 al 10 en español presione s , minuscula"<<endl;
cout<<"si no desea  ver los numeros del 1 al 10 en español presione a , minuscula"<<endl;
cin>>opcion;
	switch (opcion)
	{
	case 's':
		cout<<"vas aver los numeros del 1 al 10 en español , presione cualquier tecla para ver cada uno de los numeros"<<endl;
		cout<<"el uno"<<endl;
		system("pause");
		cout<<"el dos"<<endl;
		system("pause");
		cout<<"el tres"<<endl;
		system("pause");
		cout<<"el cuatro"<<endl;
		system("pause");
		cout<<"el cinco"<<endl;
		system("pause");
		cout<<"el seis"<<endl;
		system("pause");
		cout<<"el siete"<<endl;
		system("pause");
		cout<<"el ocho"<<endl;
		system("pause");
		cout<<"el nueve"<<endl;
		system("pause");
		cout<<"el diez"<<endl;
		break;
	case 'a':
		cout<<"has salido del programa"<<endl;
		break;
	default : cout<<"no selecionaste ninguna de las dos opciones "<<endl;
			
	}


}


