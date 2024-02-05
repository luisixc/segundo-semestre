#include <iostream>

 

using namespace std;

 

struct registro{

    char nombre[35];

    string correo,telefono, edad;

   

};

 

registro persona[10];

 

void listado();

void registrar();

int i=0;

 

 

int main()

{

    int op,op1;

    do {

        cout<<"\t\n\tMenu\n\n";

        cout<<"1.Registrar persona "<<endl;

        cout<<"2.ver listado "<<endl;

        cout<<"3.Salir "<<endl;

        cout<<"Escoja una opcion: "<<endl;

        cin>>op;

        //system("cls");

        switch(op) {

            case 1:

                registrar();

                //system("cls");

            break;

            case 2:

                listado();

            break;

            case 3:

                cout<<"\t\n\tSALIENDO\n\n";

                return 0;

            break;

            default:

                cout<<"\t\n\tError de opcion\n\n";

            break;

        }

        cout<<"Desea regresar al menu\n"<<endl;

        cout<<"1.SI/2.NO"<<endl;

        cin>>op1;

    }while (op1==1);

 

    getchar();

 

    return 0;

}

 

void listado() {

    int j;

 

    for (j=0; j<i; j++){

        cout<<"Nombre del estudiante: "<<persona[j].nombre<<endl;

        cout<<"Carnet: "<<persona[j].edad<<endl;

        cout<<"Fecha de nacimiento: "<<persona[j]. telefono<<endl;

        cout<<"Dirección: "<<persona[j].correo<<endl;

    }

}

 

void registrar() {

    int n;

    cout << "Cuantas personas desea registrar: ";

    cin >> n;

    for (i=0; i<n; i++) {

        cout<<"Registro "<<endl;

        cout<<"Ingrese su nombre: \n";

        cin.getline(persona[i].nombre,35);

        cin.getline(persona[i].nombre,35);

        cout<<"Ingrese su carnet: \n";

        cin>>persona[i].edad;

        cout<<"Ingrese su fecha de nacimiento: \n";

        cin>>persona[i].telefono;

        cout<<"Ingrese su dirección: \n";

        cin>>persona[i].correo;

    }

}
