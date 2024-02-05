
#include<iostream>
using namespace std;
#define ARREGLO_MAX 100
#define SIN_TIPO string
int main() {
	int b;
	SIN_TIPO categoria[ARREGLO_MAX];
	string codigo[ARREGLO_MAX];
	int n;
	SIN_TIPO stock[ARREGLO_MAX];
	cout << "Ingresar la cantidad de sucursales: " << endl;
	cin >> n;
	for (b=1;b<=n;b++) {
		cout << "Ingrese categoria: " << b << endl;
		cin >> categoria[b-1];
		if (b<n) {
			cout << "Ingrese codigo: " << b << endl;
			cin >> codigo[b-1];
		} else {
			codigo[b-1] = "X";
		}
		cout << "Ingrese stock: " << b << endl;
		cin >> stock[b-1];
	}
	for (b=1;b<=n;b++) {
		cout << "CATEGORIA" << "  " << categoria[b-1] << " " << "Codigo" << "  " << codigo[b-1] << "  " << "Sotck" << "  " << stock[b-1] << endl;
	}
	return 0;
}

