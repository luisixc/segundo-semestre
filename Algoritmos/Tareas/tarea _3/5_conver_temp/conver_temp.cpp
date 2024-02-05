#include<iostream>
using namespace std;

int main() {
	float c;
	float f;
	float k;
	float r;
	cout << "Ingrese la temperatura cent�grada: " << endl;
	cin >> c;
	r = (c*2)/2;
	f = (c*9/5)+32;
	k = c+273.15;
	cout << "La temperatura en Reaumur es: " << r << endl;
	cout << "La temperatura en Fahrenheit es: " << f << endl;
	cout << "La temperatura en Kelvin es: " << k << endl;
	return 0;
}

