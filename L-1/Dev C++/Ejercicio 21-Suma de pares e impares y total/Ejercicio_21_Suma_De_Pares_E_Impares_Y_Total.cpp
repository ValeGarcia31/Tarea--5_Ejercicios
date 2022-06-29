#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		//Definición de variables
	int pares = 0;
	int impares = 0;
	int total = 0;
	int n = 0;
	int m = 0;
	
	//Datos de entrada
	cout<<"Ingrese el numero inicial:\n ";
	cin>>n;
	cout<<endl;
	
	cout<<"Ingrese el numero final:\n ";
	cin>>m;
	cout<<endl;
	
	//Proceso
	for (int i = n; i <= m; i++)
	{
		if ( i % 2 == 0) {
			pares = pares + i;
		}
		else {
			impares = impares + i;
		}
	}
	
	total = pares + impares;
	
	//Salida
	cout<<"La suma de los numeros pares es: " <<pares <<endl;
	cout<<"La suma de los numeros impares es: " <<impares <<endl;
	cout<<"La suma total de los numeros pares e impares es: " <<total <<endl;

	return 0;
}
