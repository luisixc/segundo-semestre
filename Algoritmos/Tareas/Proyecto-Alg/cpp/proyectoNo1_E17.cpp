
#include<iostream>
using namespace std;

int main() {
	int i;
	int s;
	s = 0;
	for (i=1;i<=100;i++) {
		s = s+(i*i);
	}
	cout << "La suma de los cuadrados de los primeros 100 numeros naturales es: " << s << endl;
	return 0;
}

