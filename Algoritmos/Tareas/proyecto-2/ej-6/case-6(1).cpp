
#include<iostream>
using namespace std;
struct choferes
{
    char nombre[30];
    float pagoxhora;
    int horas[6];
}chofer[5];

int main()
{
    int i,j,mayorr = 0,x,horas;
    float sueldo,total = 0;
   for (i = 0; i < 5; ++i){
        fflush(stdin);
        cout<< "Ingresa el nombre: ";
        getw(chofer[i].nombre);
        cout<< "Ingresa el pago por hora: ";
        cin>> chofer[i].pagoxhora;
        cout<< "Ingresa las horas trabajadas en semana: ";
        for (j = 0; j < 6; ++j){
            cin>> chofer[i].horas[j];
        }
   }
    for (i = 0; i < 5; ++i){
        horas = 0;
        for (j = 0; j < 6; ++j){
           horas = horas + chofer[i].horas[j];
        }
        sueldo = horas * chofer[i].pagoxhora;
        total = total + sueldo;
        cout<< "El trabajador "<<chofer[i].nombre <<endl;
        cout<< "Trabajo "<<horas<< " horas"<<endl;
        cout<< "Sueldo: $"<<sueldo<<endl;
        if (chofer[i].horas[0] > mayorr){
            mayorr = chofer[i].horas[0];
            x = i;
        }
   }
   cout<< "EL total que pagara la empresa es: $"<<total <<endl;
   cout<< "El trabajador que laboro mas horas el dia lunes es: "<<chofer[x].nombre <<endl;
   cout<< "Trabajo "<<chofer[x].horas[0]<< "horas";
    return 0;
}