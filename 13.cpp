#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 main ()	
{
float cantidades,preundes,calculoprees,cantidadrec,preundrec,calculoprerec,cantidadaro,preundaro,calculoprearo,subtotal,total,caldescuento;
int categoria ;
string nombrecl,descuento;
	cout<<"bienvenido a el programa de la empresa comercializadora Poncha"<<endl;
	cout<<" a continuacion digite cuantas  escobas va a comprar , si  no va llevar ninguna ,digite 0"<<endl;
	cin>>cantidades;
	
		cout<<" a continuacion digite el precio de una unidad de escoba"<<endl;
		cin>>preundes;	
		cout<<" el precio de cada unidad de escoba es de  $"<<preundes<<endl;
		calculoprees=preundes*cantidades;
		cout<<"el precio solo de las escobas costo $"<<calculoprees<<endl;
	
	cout<<" a continuacion digite cuantas  recogedores va a comprar , si  no va llevar ninguno ,digite 0"<<endl;
	cin>>cantidadrec;
	
		cout<<" a continuacion digite el precio de una unidad de recogedor"<<endl;
		cin>>preundrec;	
		cout<<" el precio de cada unidad de recogedor es de  $"<<preundrec<<endl;
		calculoprerec=preundrec*cantidadrec;
		cout<<"el precio solo de las recogedores costo $"<<calculoprerec<<endl;
	
	cout<<" a continuacion digite cuantas  aromizantes va a comprar , si  no va llevar ninguno ,digite 0"<<endl;
	cin>>cantidadaro;
	
		cout<<" a continuacion digite el precio de una unidad de aromizante"<<endl;
		cin>>preundaro;	
		calculoprearo=preundaro*cantidadaro;
		cout<<"el precio solo de las aromatizantes costo $"<<calculoprearo<<endl;
	system("pause");
	subtotal=calculoprees+calculoprerec+calculoprearo;
	system("cls");
	cout<<"digite el nombre del cliente"<<endl;
	cin>>nombrecl;
	cout<<"digite la categoria de este cliente"<<endl;
	cin>>categoria;
	cout<<"la cantidad de escobas comprada fue de "<<cantidades<<" unidades"<<endl;
	cout<<"la cantidad de recogedores comparada fue de "<<cantidadrec<<" unidades"<<endl;
	cout<<"la cantidad de aromatizantes comprada  fue de "<<cantidadaro<<" unidades"<<endl;
	system("pause");
	system ("cls");
	switch (categoria)
		{
		case 1 :
		descuento="5 %" ;
		caldescuento=(subtotal/100)*5;
		total=subtotal-caldescuento;
		break;
		case 2 :
			descuento= "8 % ";
		caldescuento=(subtotal/100)*8;
		total=subtotal-caldescuento;
		break;
		case 3 :
			descuento="12  % " ;
		caldescuento=(subtotal/100)*12;
		total=subtotal-caldescuento;
		break;
		case 4 :
			descuento= "15 % " ;
		caldescuento=(subtotal/100)*15;
		total=subtotal-caldescuento;
		break;
		default: cout<<"no selecciono una categoria ,error "<<endl;
		}
		
cout<<"Nombre del cliente : "<<nombrecl<<endl;
cout<<"Sub total a pagar :"<<subtotal<<endl;
cout<<"Descuento del "<<descuento<<" =  $ -"<<caldescuento<<endl;
cout<<" Total a pagar : $"<<total<<endl;
system("pause");
		


}




