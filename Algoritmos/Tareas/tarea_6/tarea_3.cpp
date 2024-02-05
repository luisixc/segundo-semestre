
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {

	string palabra;
	char *cadena = new char[palabra.length() +1 ];//creamos un puntero
	int contador = 0;
	char caracter;
	cout<<"Ingrese una palabra: ";
	cin>>palabra;
	strcpy(cadena,palabra.c_str());
	cout<<"Carcter a verificar: ";cin>>caracter;cout<<endl;

	for(int i=0; i<palabra.length(); i++){
		if(cadena[i] == caracter){
			contador++;
		}
	}
	cout<<"El numero de veces que se repite el caracter "<<caracter<<" es: "<<contador;
	delete cadena;
	cout<<endl;
	return 0;
}