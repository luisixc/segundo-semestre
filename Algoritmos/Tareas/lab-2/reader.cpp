#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura ();
int main (){
    lectura();
    return 0;
}

void lectura () {
    ifstream archivo;
    string texto;

    archivo.open("/home/llima/Desktop/lab-2/agenda.txt",ios::in);

    if(archivo.fail()){
        cout<<"No se puede abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }

    archivo.close();
}