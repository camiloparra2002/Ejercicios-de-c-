#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
/*23.   Imprimir los 100 primeros números de Fibonacci.
 /*Recuerde que un número de Fibonacci se calcula como
 la suma de los dos anteriores así: 0, 1, 1, 2, 3, 5, 8,13…*/
 int numero,variable1,variable2,variable3,s,n;
 cout<<" bienvenido a el programa que te imprime los numeros fibonacci"<<endl;
 cout<<" a continuacion digite un numero para comenzar la serie "<<endl;
 cin>>numero;
 variable1=0;
 variable2=1;
 for (s=1 ; s<=numero; s++ )
  {
 
 cout<<variable1<<endl;
  variable3=variable1+variable2;
  variable1=variable2;
  variable2=variable3;
  }
  


}
 
