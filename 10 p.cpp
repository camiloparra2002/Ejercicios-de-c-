#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main ()
{

	/*10. Algoritmo que pida el valor de un artículo cualquiera y calcule el IVA del 16%, debe enviar un mensaje */
	int precio,precioconiva,calculoiva;							
	cout<<" BIENVENIDO AEL PROGRAMA QUE TE CALCULA EL IVA del 16% ,DE CUALQUIER PRODUCTO O ARTICULO "<<endl;
	cout<<" a continuacion digite el precio del articulo que desea comprar en pesos para calcular el iva que tiene "<<endl; 
	cin>>precio; 
	cout<<"el precio del articulo es $ "<<precio<<endl;
	calculoiva=precio*16/100;
	precioconiva=precio+calculoiva;
	cout<<" el iva de ese producto son : $ "<<calculoiva<<endl;
	cout<<" el precio del articulo que usted compro incluyendole el iba es de $  "<<precioconiva<<" pesos "<<endl;
}
	

