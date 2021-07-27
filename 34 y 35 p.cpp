#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;
 int main ()
{
	/*34. El programa tiene un menú, donde se evidencia:
	a. Calcula el promedio de notas de un estudiante";
	b. Calcular el promedio e imprime Aprobado o Reprobado del curso";
	c. Para   N estudiantes calcula promedio e imprime Aprobado o Reprobado";
	Se recomienda organizarlo mediante subproceso o funciones. (caso)
	35. Analizar convertir y digitar el siguiente ejercicio en LPP.*/
	int opcion;
	double ciclo,codigo,contador,n;
	double n1,n2,n3,n4,n5,promedio;
	string nombre ;
	
	opcion=3;
		while (opcion==3) 
		{
			cout<<"menu de opciones "<<endl;
			cout<<" 1. calcula el promedio de notas de un estudiante "<<endl;
			cout<<" 2.calcular el promedio e imprime aprobado o reprobado el curso "<<endl;
			cout<<" 3. para n estudiantes calcula promedio e imprime aprobado del curso "<<endl;
			cout<<" 4. opcion para salir "<<endl;
			cout<<" digite el numero que desee teniendo en cuenta el menu "<<endl;
			cin>>opcion;
		    switch ( opcion )
		    {
		    	case 1:
				 system("cls");
				 cout<<"digite el codigo y nombre del alumno "<<nombre<<endl;
				 cin>>codigo>>nombre;
				 cout<<"introduzca las 5 calificaciones en la misma linea separadas por coma "<<endl;
				 cin>>n1>>n2>>n3>>n4>>n5;
				 promedio= ( n1+n2+n3+n4+n5 )/5 ;
				 cout<<" registro de calificaciones "<<endl;
				 cout<<" codigo:  " << codigo<<"  nombre del alumno  "<<nombre<<endl;
				 cout<< "calificaciones :"<<endl;
				 cout<<"   "<<n1<<endl;
				 cout<<"   "<<n2<<endl;
				 cout<<"   "<<n3<<endl;
				 cout<<"   "<<n4<<endl;
				 cout<<"   "<<n5<<endl;
				 cout<<"   "<<endl;
				 cout<<"nota final "<<promedio<<endl;
				 break;
				 
				 
				 case 2:
				 system("cls");
				 cout<<" digite el codigo y nombre del alumno "<<endl;
				 cin>>codigo>>nombre;
				 cout<<"digite las 5 calificaciones "<<endl;
				 cin>>n1>>n2>>n3>>n4>>n5;
				 promedio= ( n1+n2+n3+n4+n5 )/5 ;
				 cout<<" registro de calificaciones "<<endl;
				 cout<<" codigo:  " << codigo<< "  nombre del alumno "<<nombre<<endl;
				 cout<<"calificaciones :"<<endl;
				 cout<<"   "<<n1<<endl;
				 cout<<"   "<<n2<<endl;
				 cout<<"   "<<n3<<endl;
				 cout<<"   "<<n4<<endl;
				 cout<<"   "<<n5<<endl;
				 cout<<"   ";
				 cout<< "nota final "<<promedio<<endl;
				 if (promedio>=7) 
				 	{
				 	cout<< " aprobado "<<endl;	
				 	}
				 else
				 {
				 cout<< " reprobado "<<endl;	
				 }
				 break;
				 
				 case 3:
				 system("cls");
				 contador=1;
				 cout<< " ¿cuantos alumnos se van a relacionar "<<endl;
				 cin>>n;
				 
				while (contador<=n) 
				{
				  	cout<< " codigo y nombre del alumno   "<<contador<<":"<<endl;
				 	cin>>codigo>>nombre;
				 	cout<< " digita las 5 calificaciones  "<<endl;
				 	cin>>n1>>n2>>n3>>n4>>n5;
				 	promedio= ( n1+n2+n3+n4+n5 )/5 ;
					 cout<< " registro de calificaciones "<<endl;
					 cout<< " codigo: " << codigo<< "  nombre del alumno  "<<nombre<<endl;
					 cout<< "calificaciones :"<<endl;
					 cout<< "   "<<n1<<endl;
					 cout<< "   "<<n2<<endl;
					 cout<< "   "<<n3<<endl;
					 cout<< "   "<<n4<<endl;
					 cout<< "   "<<n5<<endl;
					 cout<< "   "<<endl;
					 cout<< "nota final  "<<promedio<<endl;
					 if (promedio>=6) 
						 {
						 cout<< "aprobado "<<endl;
						 }
					else
					     {
						 
						 cout<< " reprobado "<<endl;
						 
						 }

					contador=contador+1;
				 }

				 break;
	 			case 4: 
	 			cout<< "opcion equivocada "<<endl;
	 			break;
	 			default: cout<<"la opcion digitada no se encuentra en el menu de opciones"<<endl;
		    	
			}
				
	 	
		}
			
	  
}
	 
	 
	 
	
	

