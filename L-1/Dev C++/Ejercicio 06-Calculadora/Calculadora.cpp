#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Datos de Entrada
	
	int a = 0;
	int b = 0;
	int suma = 0;
	int resta = 0;
	int multiplicar = 0;
	int dividir = 0;
	
	cout<<"Ingrese el valor de a:\n";
	cin>>a;
	
	cout<<"Ingrese el valor de b:\n";
	cin>>b;
	
	cout<<endl;
	
	//Proceso
	
	suma = a + b;
	resta = a - b;
	multiplicar = a * b;
	dividir = a / b;
	
	//Salida
	cout<<endl;
	
	cout<<"El resultado de la suma entre " <<a  <<" y "  <<b <<" es: " << suma<<endl;
	cout<<"El resultado de la resta entre " <<a  <<" y "  <<b <<" es: " << resta<<endl;
	cout<<"El resultado de la multiplicacion entre " <<a  <<" y "  <<b <<" es: " << multiplicar<<endl;
	cout<<"El resultado de la division entre " <<a  <<" y "  <<b <<" es: " << dividir<<endl;
	
	return 0;
}
