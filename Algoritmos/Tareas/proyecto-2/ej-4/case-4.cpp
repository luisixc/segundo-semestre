#include <iostream>
using namespace std;

int main () {
    int num, maxc = 0, total = 0, posc, poscGanador = -1;
    char cand[] = {'A' , 'B' , 'c' , 'D'};


    do {
        cout<<"Ingrese la cantidad de distritos: ";
        cin >> num;
    } while (num <= 0);

    int candidato[num][4];
    int totalVotos[num];
    double porc[4];

    for (int i = 0 ; i <num ; i++) {
        cout<<"Distrito #"<<(i+1)<<"\n\n";

        for (int j = 0 ; j<4;j++) {
            cout<<"Digite votos del candidato"<<cand[j]<<" : ";

            cin>>candidato[i][j];
            totalVotos[j] = 0;
        }

        cout<<endl<<endl;
    }

    int cont;
    for (int i = 0 ; i<num ;i++){
        cont = 0;
        for (int j = 0 ; j<4 ; j++){
            totalVotos[cont] += + candidato[i][j];
            cont++;
        }
    }
    
    cout<<"Distrito\tCandidato\tCandidato\tCandidato\tCandidato\n";
    cout<<"\t\tA\t\tB\t\tC\t\tD\n";
    for (int i = 0 ;i<num;i++){
        cout<<(i+1)<<"\t\t";
        for (int j = 0 ; j<4;j++){
            cout<<candidato[i][j]<<"\t\t";
        }
    }

    cout<<"\nVotos\t\t";
    for (int i = 0 ; i<4;i++){
        cout<<totalVotos[i]<<"\t\t";
        total+= totalVotos[i];
    }

    for (int i = 0 ; i<4;i++){
        if(totalVotos[i]>maxc){
            maxc = totalVotos[i];
            posc = i;
        }
    }

    cout<<"\nEl candidato "<<cand[posc]<<" fue el mas votdo con "<<maxc<<"votos \n\n";

    for (int i = 0 ; i<4 ; i++){
        porc[i] = (totalVotos [i]* 100.0/total);
        cout<<"Candidato "<<cand[i]<<" : "<<porc[i]<<" %\n";
    }

    for (int i = 0 ; i<4 && poscGanador == -1 ; i++){
        if (porc[i]>50){
            poscGanador = i;
        }
    }

    if(poscGanador == -1) {
        cout<<"\nAun no hay candidato ganador..";
    } else {
        cout<<"\nGanador : Candidato "<<cand[poscGanador];
    }
}

