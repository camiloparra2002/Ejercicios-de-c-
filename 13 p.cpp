#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()

{
/*13. Algoritmo que me permita calcular el porcentaje de hombres, de mujeres y de 
ni�os de un n�mero cualquiera de personas (se debe pedir el n�mero de personas, el 
n�mero de hombres, el n�mero de mujeres y el n�mero de ni�os), enviar
 el porcentaje de hombres, de mujeres y de ni�os por pantalla*/
  float nhombres,nmujeres,nninos,sumagrupo;
  float extracciondeporch,extracciondeporcm,extracciondeporcn,valorporcentajeh,valorporcentajen,valorporcentajem;
 cout<< " BIENVENIDO A EL PROGRAMA QUE TE CALCULA EL PORCENTAJE DE HOMBRES ,MUJERES Y NINOS QUE HAY EN UN GRUPO "<<endl;
 cout<< " a continuacion digite cuanta cantidad hay de hombres en el grupo "<<endl;
 cin>>nhombres;
 cout<< " a continuacion digite cuanta cantidad hay de mujeres en el grupo "<<endl;
 cin>>nmujeres,
cout<<" a continuacion digite cuanta cantidad hay de ninos en el grupo "<<endl;
 cin>>nninos;
  sumagrupo=nhombres+nmujeres+nninos;
cout<<" la suma de hombres ,mujeres y ninos que hay en el grupo es de "<<sumagrupo<<"  personas "<<endl;
   extracciondeporch=nhombres/sumagrupo;
   extracciondeporcm=nmujeres/sumagrupo;
    extracciondeporcn=nninos/sumagrupo;
   valorporcentajeh=extracciondeporch*100;
   valorporcentajem=extracciondeporcm*100;
   valorporcentajen=extracciondeporcn*100;
cout<<"el porcentaje de hombres que hay en ese grupo es del "<<valorporcentajeh<<"% ,el valor de porcentaje de mujeres es  del "<<valorporcentajem<<"%"<<endl;
cout<<" y el valor de porcentaje de ni�os es del  "<<valorporcentajen<<" % "<<endl;
}
    
 
