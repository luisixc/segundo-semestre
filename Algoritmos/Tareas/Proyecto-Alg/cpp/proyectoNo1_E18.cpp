
#include<iostream>
using namespace std;

int main() {
	int aprobados;
	float cali;
	int n;
	int reprobados;
	cout << "Ingresa el n�mero de alumnos" << endl;
	cin >> n;
	reprobados = 0;
	aprobados = 0;
	while (n>0) {
		cout << "Ingresa la calificaci�n" << endl;
		cin >> cali;
		if (cali<6) {
			reprobados = reprobados+1;
		} else {
			aprobados = aprobados+1;
		}
		n = n-1;
	}
	cout << "El total de alumnos aprobados es: " << aprobados << endl;
	cout << "El total de alumnos reprobados es: " << reprobados << endl;
	return 0;
}

