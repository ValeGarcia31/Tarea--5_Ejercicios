#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Datos de entrada
	double subtotal = 0;
	double total = 0;
	double impuesto = 0.15;
	
	cout<<"Ingrese el subtotal de la factura: ";
	cin>>subtotal;
	
	//Proceso
	
	total = subtotal + (subtotal * 0.15);
	
	//Salida
	
	cout<<endl;
	cout<<"Total a pagar es: "<<total;
	
	return 0;
}
