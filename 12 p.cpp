#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()

{
/*12. Algoritmo que me permita calcular el porcentaje de hombres
 y de mujeres de un número cualquiera de personas (se debe pedir 
 el número de hombres y el número de mujeres), enviar el porcentaje
  de hombres y de mujeres por pantalla.*/
  float nhombres,nmujeres,sumagrupo;
  float extracciondeporch,extracciondeporcm,valorporcentajeh,valorporcentajem;
  cout<<" BIENVENIDO A EL PROGRAMA QUE TE CALCULA EL PORCENTAJE DE HOMBRES Y MUJERES EN UN GRUPO "<<endl;
  cout<<" a continuacion escriba los hombres que hay en el grupo "<<endl;
   cin>>nhombres; 
   cout<<" a continuacion escriba las mujeres que hay en el grupo "<<endl;
   cin>>nmujeres;
   sumagrupo=nhombres+nmujeres;
   extracciondeporch=nhombres/sumagrupo;
   extracciondeporcm=nmujeres/sumagrupo;
   valorporcentajeh=extracciondeporch*100;
   valorporcentajem=extracciondeporcm*100;
   cout<<"el porcentaje de hombres que hay en ese grupo es de "<<valorporcentajeh<<"% y el valor de porcentaje de mujeres es  de "<<valorporcentajem <<"%"<<endl;
}
  
