
#include<iostream>
using namespace std;
int main() {
	float n;
	float suma;
	int total;
	int x;
	cout << "�Cuantos n�meros deseas sumar?" << endl;
	cin >> total;
	cout << "Escriba los n�meros a sumar: " << endl;
	x = 1;
	suma = 0;
	while (x<=total) {
		cin >> n;
		suma = suma+n;
		x = x+1;
	}
	cout << "La suma de los " << total << " numeros es: " << suma << endl;
	return 0;
}

