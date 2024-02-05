#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void invertidor (char cadena[], int tamano)
{
    char invertido[tamano];

    for (int x=0, y=tamano-1; x<tamano; x++, y--)
    {
        invertido[x]=cadena[y];
    }
    invertido[tamano] = '\0';
    cout<<"> "<<cadena<<endl;
    cout<<endl<<"> "<<invertido<<endl<<endl;
    return;
}

int main ()
{

    char opcion;
    string palabra;
    int longitud, longitud2;

    while (opcion!='n')
    {

        cout<<"> Ingrese una palabra: ";
        cin>>palabra;

        char cadena[palabra.size()+1];
        strcpy(cadena, palabra.c_str());

        longitud=strlen(cadena);

        invertidor (cadena,longitud);

        cout<<"> Desea hacer una nueva operacion? (s/n): ";
        cin>>opcion;

        if (opcion=='n')
        {
            exit(0);
        }
    }

    return 0;
}