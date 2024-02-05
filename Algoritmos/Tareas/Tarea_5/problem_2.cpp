// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
void llencalcmsmost(SIN_TIPO complejo);

void llencalcmsmost(SIN_TIPO complejo) {
	int a;
	int habitantes;
	float i;
	float j;
	float k;
	int n;
	for (i=1;i<=7;i++) {
		cout << "Para el edificio: #" << i << endl;
		for (j=1;j<=10;j++) {
			cout << "----------------------------------" << endl;
			cout << "En el piso numero: " << j << " departamenteos, tenemos quue: " << endl;
			for (k=1;k<=6;k++) {
				cout << "dentro del depa " << k << " Viven: " << endl;
				if (j<=10) {
					if (k<=6) {
						habitantes = 0;
						while (habitantes==0) {
							n = 7;
							a = (rand()%n);
							a = int(a);
							habitantes = int((rand()%n));
							cout << a << " personas" << endl;
						}
					}
				}
			}
		}
		for (j=11;j<=15;j++) {
			for (k=1;k<=6;k++) {
				if (j<=10) {
					if (k<=6) {
						habitantes = 0;
						while (habitantes==0) {
							n = 7;
							a = (rand()%n);
							a = int(a);
							habitantes = int((rand()%n));
							cout << a << "personas" << endl;
						}
					}
				}
			}
		}
	}
}

int main() {
	SIN_TIPO complejo[7][20][6];
	llencalcmsmost(complejo);
	return 0;
}

