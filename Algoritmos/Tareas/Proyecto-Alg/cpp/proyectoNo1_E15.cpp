// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int n;
	int perfecto;
	int x;
	cout << "Ingresa un número" << endl;
	cin >> n;
	x = 2;
	perfecto = 0;
	while (x<=n) {
		if (n%x==0) {
			perfecto = perfecto+(n/x);
		}
		x = x+1;
	}
	if (perfecto==n) {
		cout << "El numero " << n << " es un numero perfecto" << endl;
	} else {
		cout << "Elnumero " << n << " no es un numero ferfecto" << endl;
	}
	return 0;
}

