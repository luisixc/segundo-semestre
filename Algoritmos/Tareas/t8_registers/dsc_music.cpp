/*Programa que almacene datos de hasta 100 canciones, incluyendo un menú con estas opciones: añadir una canción, mostrar el título de todas las canciones, buscar canciones por su título y buscar la canción de un determinado artista.
*/

#include <iostream>
using namespace std;

int main()
{
    struct datosMP3
    {
        string artista;
        string titulo;
        int duracion;
        int tamano;
    };
    datosMP3 canciones[100];

    int cantidad = 0;
    int opcion;

    string tituloBuscar;
    string artistaBuscar;

    do
    {
        cout << "\n1.- Añadir" << endl;
        cout << "2.- Ver todos los títulos" << endl;
        cout << "3.- Buscar por título" << endl;
        cout << "4.- Buscar por artista" << endl;
        cout << "0.- Salir \n" << endl;
        cin >> opcion;

        switch(opcion)
        {
            case 1: 
                cout << "Canción número: " << cantidad+1 << endl;
                cout << "Introduce el artista: ";
                cin >> canciones[cantidad].artista;
                cout << "Introduce el título: ";
                cin >> canciones[cantidad].titulo;
                cout << "Introduce la duración (en segundos): ";
                cin >> canciones[cantidad].duracion;
                cout << "Introduce el tamaño (en KB): ";
                cin >> canciones[cantidad].tamano;
                cantidad++;
                break;

            case 2: 
                for (int i=0; i<cantidad; i++)
                {
                    cout << i+1 << " " << canciones[i].titulo << endl;
                }
                break;

            case 3: 

                cout << "Introduce el título que buscas: ";
                cin >> tituloBuscar;
                for (int i=0; i<cantidad; i++)
                {
                    if (canciones[i].titulo == tituloBuscar)
                        cout << i+1 << " " << canciones[i].titulo
                            << " (" << canciones[i].artista << ")"
                            << endl;
                }
                break;

            case 4:  

                cout << "Introduce el artista que buscas: ";
                cin >> artistaBuscar;
                for (int i=0; i<cantidad; i++)
                {
                    if (canciones[i].artista == artistaBuscar)
                        cout << i+1 << " " << canciones[i].titulo
                            << " (" << canciones[i].artista << ")"
                            << endl;
                }
                break;

        }
    }
    while (opcion != 0);
    return 0;
}