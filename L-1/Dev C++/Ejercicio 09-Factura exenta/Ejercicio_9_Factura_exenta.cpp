#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		//Declaración de variables
	char estaExenta;
	double subtotal = 0;
	int desc = 0;
	double tdesc = 0;
	double timp = 0;
	double tp = 0;
	
	//Datos de entrada
	cout<<"Ingrese el subtotal de la factura:\n";
	cin>>subtotal;
	cout<<"Ingrese el descuento (0, 10, 15, 20):\n";
	cin>>desc;
	cout<<"Es factura exenta ? Escriba S o N:\n";
	cin>>estaExenta;
	cout<<endl;
	
	//Proceso
	if (estaExenta=='s' || estaExenta=='S')
	{
		tdesc = subtotal - ((subtotal * desc)/100);
		cout<<"El total a pagar es:\n" <<tdesc <<" lps";
	}
	else
	{
		if (estaExenta=='n' || estaExenta=='N')
		{
			tdesc = subtotal - ((subtotal * desc)/100);
			timp = tdesc + ((tdesc * 15)/100);
			cout<<"El total a pagar es:\n" <<timp <<" lps";
		}
	}
	return 0;
}
