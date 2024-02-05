
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float area;
	float circunferencia;
	float perimetro;
	float pi;
	float radio;
	cout << "Ingresa el valor de radio:" << endl;
	cin >> radio;
	circunferencia = 2.0*M_PI*radio;
	perimetro = circunferencia;
	area = M_PI*radio*radio;
	cout << "El valor de area es: " << area << endl;
	cout << "El valor de circunferencia es: " << circunferencia << endl;
	cout << "El valor de perimetro es: " << perimetro << endl;
	return 0;
}

