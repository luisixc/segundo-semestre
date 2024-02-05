
#include<iostream>
using namespace std;

int main() {
	float factorial;
	float numero;
	float x;
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	if (numero<0) {
		cout << "El numero " << numero << " no se puede calcular" << endl;
	} else {
		x = 1;
		factorial = 1;
		while (x<=numero) {
			factorial = factorial*x;
			x = x+1;
		}
		cout << "El factorial del n�mero " << numero << " = " << factorial << endl;
	}
	return 0;
}

