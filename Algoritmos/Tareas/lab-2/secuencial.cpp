#include <cstdlib>

#include <cstdio>

using namespace std;

int main()

{

FILE *archivo;

char texto[10000];

char nombre[100];

cout<< "Nombre del archivo a editar: ";

cin.getline(nombre, sizeof(nombre)); 

cout << "Nombre de la persona: ";


cin.getline(texto, sizeof(texto));

cout << "Puntero : ";

cin.getline(texto, sizeof(texto));


archivo = fopen(nombre,"w");

fprintf(archivo,texto);

system("pause");

return 0;

}