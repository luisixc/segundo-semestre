
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main (){
    
    int num;
    double sum = 0;
    double mult = 1;
    cout <<"Ingrese cantidad: ";
    cin >>num;
    double arr[num];
    for (int i = 0; i < num; ++i) {
        cout <<"Ingres el #"<<i<<" numero: ";
        cin >> arr[i];
    }
    int valmax = arr[0];
    int valmin = arr[0];
    for (int i = 0; i < num; ++i) {
        sum = sum +arr[i];
        mult *= arr[i];
        if(valmax < arr[i])
        valmax = arr[i];

        if(valmin > arr[i])
        valmin = arr[i];
    }
    cout <<"El tamaño del arreglo que solicitó consta de: "<<num<<" posiciones.\n";
    cout <<"La suma de los valores que ingresó es: "<<sum<<".\n";
    cout <<"La multiplicación de los valores que ingresó es: "<<mult<<".\n";
    cout <<"El mínimo valor dentro del arreglo es: " << valmin<<".\n";
    cout <<"El maxino valor dentro del arreglo es: " << valmax<<".\n";
    
}