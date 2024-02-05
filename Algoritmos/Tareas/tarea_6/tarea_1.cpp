
#include<iostream>
using namespace std;

int main() {
	string c1;
	string c2;
	int longc1;
	int longc2;
	cout << "Ingrese la primer cadena: " << endl;
	cin >> c1;
	cout << "Ingrese la segunda cadena: " << endl;
	cin >> c2;
	longc1 = c1.size();
	longc2 = c2.size();
	cout << "La primer cadena contiene: " << longc1 << " caracteres." << endl;
	cout << "La segunda cadena contiene: " << longc2 << " caracteres." << endl;
	if (longc1>longc2) {
		cout << "La cadena de mayor caracteres es: " << c1 << endl;
	} else {
		if (longc2>longc1) {
			cout << "La cadena de menor caracteres es: " << c1 << endl;
		} else {
			if (longc1==longc2) {
				cout << "Ninguna cadena es mayor." << endl;
			} else {
				if (c1==c2) {
					cout << "Las cadenas son iguales" << endl;
				} else {
					cout << "Las cadenas no son igales" << endl;
				}
			}
		}
	}
	return 0;
}

