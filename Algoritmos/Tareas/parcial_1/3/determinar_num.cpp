#include<iostream>
using namespace std;

int main() {
	int m;
	int n;
	int t;
	int x;
	cout << "Cantidad de numeros a calcular:" << endl;
	cin >> t;
	x = 1;
	while (x<=t) {
		cout << "Escribe un numero" << endl;
		cin >> n;
		if (x==1) {
			m = n;
		} else {
			if (n>m) {
				m = n;
			}
		}
		x = x+1;
	}
	cout << "El numero mayor es: " << m << endl;
	return 0;
}

