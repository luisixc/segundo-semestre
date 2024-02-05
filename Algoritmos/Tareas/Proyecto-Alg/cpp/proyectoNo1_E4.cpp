
#include<iostream>
using namespace std;
int main() {
	float altura;
	float area;
	float base;
	cout << "Escribe la base del tri�ngulo" << endl;
	cin >> base;
	cout << "Escribe la altura del tri�ngulo" << endl;
	cin >> altura;
	area = (base*altura)/2;
	cout << "El area del triangulo es: " << area << endl;
	return 0;
}

