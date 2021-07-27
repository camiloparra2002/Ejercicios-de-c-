#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()
{
		
		/*32. Realizar un ejemplo en donde se incluyan los ejercicios 4 y 5.*/
		
		/*4.  Algoritmo que me envié un mensaje por pantalla con los días de la semana.
		5.  Algoritmo que me permita calcular la edad de una persona.*/
		int edadpersona,anodenacimiento,anoactual;
		char entrar,seguirdia,comenzardiassema; 
		cout<<"bienvenido a el programa que  te calcula la edad de una persona "<<endl;
		 cout<<" a continuacion digite el ano de su fecha de nacimiento "<<endl;
		 cin>>anodenacimiento;
		 cout<<" a continuacion digite el ano actual en el que estamos"<<endl;
		 cin>>anoactual;
		 edadpersona=anoactual-anodenacimiento;
		 cout<< " la edad de esa persona es  "<<edadpersona<< " anos "<<endl;
		 cout<<"desea ver los dias de la semana si es asi presione s, si no presione otra tecla "<<endl;
		 cin>>comenzardiassema;
		 if (comenzardiassema=='s') 
		 {
		 cout<<"  bienvenido a el programa que te da un mensaje por pantalla con los días de la semana "<<endl;
		cout<<" desea continuar con el programa si es asi presione s ,si no presione otra tecla "<<endl;
		cin>>entrar;	
		 }
		
			while (entrar=='s')
			{
				cout<<"a continuacion apareceran los dias de la semana en orden , para continuar viendo los dias digite a";
			cout<<" , si no digite otra tecla "<<endl;
			cin>>seguirdia;
				if (seguirdia=='a') 
				{
					cout<< "lunes"<<endl;
				}	
				cin>>seguirdia;
					if (seguirdia=='a') 
					{
					cout<< "martes"<<endl;	
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
										cout<< "sabado"<<endl;	
										}
										cin>>seguirdia;
											if (seguirdia=='a')
											{
											cout<< "domingo"<<endl;	
											 } 
												
			cout<<"desea continuar viendo los mismo dias de la semana si es asi presione s, si no presione otra tecla "<<endl;
			cin>>entrar;
			}
			
}
 
