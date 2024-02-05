
#include<iostream>
using namespace std;

#define ARREGLO_MAX 100

int main() {
	int a;
	float c;
	int error;
	string letra;
	int n;
	string secreta;
	string vector1[ARREGLO_MAX];
	string vector2[ARREGLO_MAX];
	int x;
	cout << "Ingresa la palabra secreta" << endl;
	cin >> secreta;
	n = secreta.size();
	for (x=1;x<=n;x++) {
		vector1[x-1] = secreta.substr(x-1,x-x+1);
		vector2[x-1] = "_";
	}
	a = 0;
	while (a<5) {
		for (x=1;x<=n;x++) {
			cout << vector2[x-1];
		}
		cout << "" << endl;
		cout << "Ingresa una letra" << endl;
		cin >> letra;
		error = 1;
		for (x=1;x<=n;x++) {
			if (letra==vector1[x-1]) {
				if (vector2[x-1]=="_") {
					vector2[x-1] = letra;
					error = 0;
					c = c+1;
				}
			}
		}
		if (c==n) {
			cout << "Felicidades has ganado el juego" << endl;
			a = 6;
		} else {
			if (error==1) {
				a = a+1;
			}
			if (a==1) {
				cout << "." << endl;
				cout << "." << endl;
				cout << "." << endl;
				cout << "." << endl;
				cout << "Te quedan 4 intentos" << endl;
			}
			if (a==2) {
				cout << "?.." << endl;
				cout << "." << endl;
				cout << "." << endl;
				cout << "." << endl;
				cout << "Te quedan 3 intentos" << endl;
			}
			if (a==3) {
				cout << "?.." << endl;
				cout << ".   o" << endl;
				cout << "." << endl;
				cout << "." << endl;
				cout << "Te quedan 2 intentos" << endl;
			}
			if (a==4) {
				cout << "?.." << endl;
				cout << ".   o" << endl;
				cout << ".   ^" << endl;
				cout << "." << endl;
				cout << "Te queda 1 intento" << endl;
			}
			if (a==5) {
				cout << "?.." << endl;
				cout << ".   o" << endl;
				cout << ".   ^" << endl;
				cout << ".   ^" << endl;
				cout << "AHORCADO" << endl;
			}
		}
	}
	return 0;
}

