
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  int meses=12, departamentos=3;
  float costos [departamentos][meses];
  float suma=0.0;
  float promdep[meses];
  float mesmay=costos[0][0];
  float mesmen=1000;
  float depmay=0,mesmay1=0;
  float depmen=0,mesmen1=0;
  cout<<"================================="<<endl;
  cout<<"Departamento numero 1: Dulces"<<endl;
  cout<<"Departamento numero 2: Bebidas"<<endl;
  cout<<"Departamento numero 3: Conservas"<<endl;
  cout<<"================================="<<endl;
  for(int i=0; i<departamentos; i++) {

    for (int j=0; j<meses; j++) {
      
      cout<<"Ingrese los costos del mes "<<j+1<<" y el departamento No "<<i+1<<" :";
      cin>>costos[i][j];
      suma+=costos[i][j];
      
      }
      promdep[i]=suma/meses;
      cout<<"El promedio anual del departamento No: "<<i+1<<" es de: "<<promdep[i]<<endl;
      cout<<"\n";
      suma=0.0;
    
    }
    
    for(int i=0; i<departamentos; i++) {
      
      for (int j=0; j<meses; j++) { 
        
        if (costos[i][j]>mesmay) {
          mesmay=costos[i][j];
          mesmay1=j;
          depmay=i;
          
          }
          if (costos[i][j]<mesmen) {
            
            mesmen=costos[i][j];
            mesmen1=j;
            depmen=i;
            
            }      
        }
        
      }
      
      cout<<"El departamento de mayor costo de produccion fue el No: "<<depmay+1<<" en el mes "<<mesmay1+1<<endl;
      cout<<"y el departamento de menor costo de produccion fue el No: "<<depmen+1<<" en el mes "<<mesmen1+1<<endl;
      
  }