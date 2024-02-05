#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string; using std::cin;
using std::equal; using std::remove;

int main(){
    string s1;
	string s2;
	cout << "Ingrese la primer cadena: " << endl;
	cin >> s1;
	cout << "Ingrese la segunda cadena: " << endl;
	cin >> s2;
    cout<<"\n";
    if (s1 == string(s1.rbegin(), s1.rend())) {
        cout <<s1<< " es palindromo" << endl;
    } else {
        cout <<s1<< " No es palindromo" << endl;
    }
    if (s2 == string(s2.rbegin(), s2.rend())) {
        cout <<s2<< " es palindromo" << endl;
    } else {
        cout <<s2<< " No es palindromo" << endl;
    }

    return EXIT_SUCCESS;
}
