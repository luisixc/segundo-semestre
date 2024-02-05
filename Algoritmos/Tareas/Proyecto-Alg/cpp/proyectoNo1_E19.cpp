
#include<iostream>
using namespace std;

int main() {
	float entre_45_y_55;
	float i;
	float mayores_de_50;
	float menores_de_15;
	float numero_natural;
	entre_45_y_55 = 0;
	mayores_de_50 = 0;
	menores_de_15 = 0;
	for (i=1;i<=100;i++) {
		cout << "Ingrese el numero: " << i << endl;
		cout << "Ingresa el valor de numero natural:";
		cin >> numero_natural;
		if (numero_natural<15) {
			menores_de_15 = menores_de_15+1;
		}
		if (numero_natural>50) {
			mayores_de_50 = mayores_de_50+1;
		}
		if (numero_natural>=25 && numero_natural<=45) {
			entre_45_y_55 = entre_45_y_55+1;
		}
		cout << "" << endl;
	}
	cout << "Comprendidos entre 25 y 45: " << entre_45_y_55 << endl;
	cout << "Mayores de 50: " << mayores_de_50 << endl;
	cout << "Menores de 15: " << menores_de_15 << endl;
	return 0;
}

