#include<iostream>
using namespace std;
int main() {
	int c;
	float i;
	float n;
	float na;
	float nb;
	float s;
	int x;
	s = 0;
	c = 0;
	i = 1;
	for (x=1;x<=4;x++) {
		cout << "Escriba nota: #" << i << endl;
		cin >> n;
		s = s+n;
		if (n>6) {
			c = c+1;
		}
		if (x==1) {
			na = n;
			nb = n;
		} else {
			if (n>na) {
				na = n;
			} else {
				if (n<nb) {
					nb = n;
				}
			}
		}
		i = i+1;
	}
	cout << "El promedio de las 4 notas es: " << s/4 << endl;
	cout << "La nota mas baja es: " << nb << endl;
	cout << "La nota mas alta es: " << na << endl;
	cout << "Calificaciones mayores a 6 son: " << c << endl;
	return 0;
}
