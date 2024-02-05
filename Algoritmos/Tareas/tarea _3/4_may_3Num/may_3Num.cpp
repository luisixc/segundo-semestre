#include<iostream>
using namespace std;

int main() {
	int n1;
	int n2;
	int n3;
	cout << "Ingrese 3 numeros: " << endl;
	cin >> n1 >> n2 >> n3;
	if (n1>n2) {
		if (n1>n3) {
			cout << "El numero " << n1 << " es el mayor" << endl;
		} else {
			cout << "El numero " << n3 << " es el mayor" << endl;
		}
	} else {
		if (n2>n3) {
			cout << "El numero " << n2 << " es el mayor" << endl;
		} else {
			cout << "El numero " << n3 << " es el mayor" << endl;
		}
	}
	return 0;
}

