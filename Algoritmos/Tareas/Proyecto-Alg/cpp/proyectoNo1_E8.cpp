
#include<iostream>
using namespace std;
int main() {
	float numero;
	cout << "Escriba un n�mero: " << endl;
	cin >> numero;
	if (numero / 2 == 0) {
		cout << numero << " es par" << endl;
	} else {
		cout << numero << " no es par" << endl;
	}
	return 0;
}

