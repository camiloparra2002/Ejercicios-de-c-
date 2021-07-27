#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()	
{
  /*4.Algoritmo que me envié un mensaje por pantalla con los días de la semana.*/

char entrar,seguirdia;

cout<<"  bienvenido a el programa que te da un mensaje por pantalla con los días de la semana "<<endl;
cout<<" desea continuar con el programa si es asi presione s ,si no presione otra tecla "<<endl;
cin>>entrar;
	while(entrar=='s') 
	{

		cout<<"a continuacion apareceran los dias de la semana en orden , para continuar viendo los dias digite a"<<endl;
		cout<<" , si no digite otra tecla "<<endl;
		cin>>seguirdia;
			if (seguirdia=='a') 
			{
				cout<< "lunes"<<endl;
			}
			cin>>seguirdia;
				if (seguirdia=='a') 
				{
					cout<<"martes"<<endl;
				}
				cin>>seguirdia;
					if (seguirdia=='a')
					{
						cout<<"miercoles"<<endl;
					}
					cin>>seguirdia;
						if (seguirdia=='a') 
						{
								
							cout<<"jueves"<<endl;
						}
						cin>>seguirdia;
								if (seguirdia=='a') 
								{
										
									cout<<"viernes"<<endl;
								}
								cin>>seguirdia;
									if (seguirdia=='a')
									{	
										cout<<"sabado"<<endl;
									}
									cin>>seguirdia;
										if (seguirdia=='a') 
										{
												
											cout<<"domingo"<<endl;
										}
										
		cout<<"desea continuar viendo los mismo dias de la semana si es asi presione s, si no presione otra tecla "<<endl;
		cin>>entrar;
	}
	
}

