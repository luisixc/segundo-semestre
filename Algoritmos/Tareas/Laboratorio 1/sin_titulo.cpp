// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// En C++ no se puede dimensionar un arreglo estático con una dimensión no constante.
// PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
// Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
// este mecanismo aún no está soportado en las traducciones automáticas de PSeInt.
#define ARREGLO_MAX 100

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int a;
	int b;
	int c;
	int f;
	int mat[ARREGLO_MAX][ARREGLO_MAX];
	int sum;
	cout << "Ingrese filas de matriz: " << endl;
	cin >> f;
	cout << "Ingrese columnas de matriz: " << endl;
	cin >> c;
	for (a=1;a<=f;a++) {
		for (b=1;b<=c;b++) {
			cout << "Ingrese un numero en la fila: " << a << " columna: " << b << endl;
			cin >> mat[a-1][b-1];
		}
	}
	sum = 0;
	for (b=1;b<=f;b++) {
		for (a=1;a<=c;a++) {
			sum = sum+mat[b-1][b-1];
		}
	}
	cout << "La smuma de los elementos de la matriz es: " << sum << endl;
	return 0;
}

