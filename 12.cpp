#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
	int numero,unid,decenas;
	/*12.  En la clase de aritmética de la escuela secundaria técnica No. 35, el maestro les solicita al departamento de sistemas 
	que se le desarrolle un programa que pida al usuario un número entero  decimal  entre  1  y  99,  incluyendo  los  extremos 
	 y  obtenga  la  correspondiente representación  en  el  sistema  romano  y  su  decimal,  con  el  objetivo  de  poder  explicar
	  mediante el programa visualmente el sistema de conversión a sus alumnos. El programa mostrará en pantalla el número decimal y
	   su conversión al sistema romano.*/
	cout<<"bienvenido al el programa que te convierte un numero entero a un numero romano"<<endl;
	cout<<"a continuacion digite el numero que desea convertir a romano TIENE QUE SER UN NUMERO ENTRE 1 A 99"<<endl;
	cin>>numero;
	if ((numero>=1) and (numero<=99))
	{
		cout << "el numero entero ("<<numero<<") convertido a romano es ";
		unid=numero %10 ; numero= numero/10 ;
		decenas= numero%10 ; numero=numero/10 ;
		
		
		switch (decenas)
		{
		case 1 : cout<<"X";	
		break;
		case 2 : cout<<"XX";	
		break;
		case 3 : cout<<"XXX";	
		break;
		case 4 : cout<<"XL";	
		break;
		case 5 : cout<<"L";	
		break;
		case 6 : cout<<"LX";	
		break;
		case 7 : cout<<"LXX";	
		break;
		case 8 : cout<<"LXXX";	
		break;
		case 9 : cout<<"XC";	
		break;
		}
		switch (unid)
		{
		case 1 : cout<<"I";	
		break;
		case 2 : cout<<"II";	
		break;
		case 3 : cout<<"III";	
		break;
		case 4 : cout<<"IV";	
		break;
		case 5 : cout<<"V";	
		break;
		case 6 : cout<<"VI";	
		break;
		case 7 : cout<<"VII";	
		break;
		case 8 : cout<<"VIII";	
		break;
		case 9 : cout<<"IX";	
		break;
				
		}
	}	
	else
		{
		cout<<"el numero digitado no se encuentra entre 1 y 99 ,opcion incorrecta"<<endl;
		}
}
	
	
	
	

	
	

	
	
	
	
	
