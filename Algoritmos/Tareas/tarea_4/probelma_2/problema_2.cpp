#include<iostream>
using namespace std;
int main() {
	float c;
	float p1;
	float p2;
	float p3;
	float pm1;
	float pm2;
	cout << "Ingrese el costo de la primera pelicula: " << endl;
	cin >> p1;
	cout << "Ingrese el costo de la segunda pelicula: " << endl;
	cin >> p2;
	cout << "Ingrese el costo de la tervera pelicula: " << endl;
	cin >> p3;
	if (p1!=p2 && p1!=p3 && p2!=p3) {
		if (p1<p2 && p1<p3) {
			pm1 = p1;
			if (p2<p3) {
				pm2 = p2;
			} else {
				pm2 = p3;
			}
		} else {
			if (p2<p1 && p2<p3) {
				pm1 = p2;
				if (p1<p3) {
					pm2 = p1;
				} else {
					pm2 = p3;
				}
			} else {
				if (p3<p1 && p3<p2) {
					pm1 = p3;
					if (p2<p1) {
						pm2 = p2;
					} else {
						pm2 = p1;
					}
				}
			}
		}
		c = pm1+pm2;
		cout << "El total a pagar por las tres peliculas es: Q" << c << endl;
	} else {
		cout << "Los precios deben ser distintos" << endl;
	}
	return 0;
}
