
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

void createContact();
void displayAllContacts();
void searchContact();
void deleteContact();
void sortAllContact();
void actualSorting();
void updateContact();
void delete_line(const char*, int);

int main() {
    int exit = 1;
    while (exit) {
        cout << "\n";
        cout << " 1. Ver contactos. \n 2. Búscar número. \n 3. Crear contacto."
                "\n 4. Eliminar contacto. \n 5. Ordenar contactos. \n 6. Actualizar contacto"
                "\n 0. Salir.\n";
        cout << "\n";
        cin >> exit;
        switch (exit) {
            case 1:
                displayAllContacts();
                break;
            case 2:
                searchContact();
                break;
            case 3:
                createContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                sortAllContact();
                break;
            case 6:
                updateContact();
                break;
            case 0:
                cout << "¡Gracias por usar este sistema!\n";
                break;
            default:
                cout << "Enter Valid Input";
                break;
        }
    }
    return 0;
}

void sortAllContact() {
    ofstream fout;
    string line;
    remove("temp.txt");
    fout.open("temp.txt", ios::app);
    fstream fin("sample.txt");
    while (getline(fin, line)) {
        fout << line << endl;
    }
    fout.close();
    actualSorting();
}
void actualSorting() {
    ofstream fout;
    string myText;
    char v = 'a';
    // cout << int(v);
    // cout << endl << char(int(v));
    int letter = 97;
    remove("sample.txt");
    fout.open("sample.txt", ios::app);
SORTING:
    ifstream fin("temp.txt");
    while (getline(fin, myText)) {
        char myChar = myText[0];
        if (isupper(myChar)) {
            myChar = tolower(myChar);
        }
        if (int(myChar) == letter) {
            fout << myText << endl;
        }
    }
    fin.seekg(0);
    fin.close();
    if (letter != 124) {
        letter++;
        goto SORTING;
    }
    cout << "\t\t¡Contactos ordenado con éxito!\n";
    fout.close();
}

void updateContact() {
    int lineNumber = 0;
    string myText, search, smallString;
    ifstream MyReadFile("sample.txt");
    cout << "Buscar contacto para actualizar: ";
    cin >> search;
    while (getline(MyReadFile, myText)) {
    
        smallString = myText;
        transform(smallString.begin(), smallString.end(), smallString.begin(),
                  ::toupper);
        transform(search.begin(), search.end(), search.begin(), ::toupper);
        if (smallString.find(search) != string::npos) {
            cout << "ID - " << lineNumber << " " << myText << endl;
        }
        lineNumber++;
    }
    MyReadFile.close();

    int id, choice;
    cout << "Ingrese la ID de contacto de los datos anteriores para actualizar el contacto: ";
    cin >> id;

    ifstream fin("sample.txt");
    ofstream fout;
    remove("temp.txt");
    fout.open("temp.txt", ios::app);
    string line;
    int lineCount = 0;
    while (getline(fin, line)) {
        if (lineCount == id) {
            cout << line;
            string fname, mname, lname, number;
            stringstream sss(line);
            string word;
            int index = 0;
            while (sss >> word) {
                switch (index) {
                    case 0:
                        fname = word;
                        break;
                    case 1:
                        mname = word;
                        break;
                    case 2:
                        lname = word;
                        break;
                    case 3:
                        number = word;
                        break;
                    default:
                        break;
                }
                index++;
            }
            cout << fname << "\t" << mname << "\t" << lname << "\t" << number
                 << endl;
            cout << endl;
            int myUpdate;
            cout << "\t\tActualizar detalles de contacto\n 1. Nombre\n 2. Apellido"
                    "\n 3. Empresa "
                    "\n 4. Número de teledono \n 5. Guardr y salir\n 6. Salir\n";
            cin >> myUpdate;
            switch (myUpdate) {
                case 1:
                    cout << "Nombre : ";
                    cin >> fname;
                    break;
                case 2:
                    cout << "Apellido : ";
                    cin >> mname;
                    break;
                case 3:
                    cout << "Empresa : ";
                    cin >> lname;
                    break;
                case 4:
                    cout << "Número telefonico : ";
                    cin >> number;
                    break;
                case 5:
                    break;
                case 6:
                    break;
                default:
                    break;
            }
            fout << fname << " " << mname << " " << lname << " " << number
                 << "\n";
        } else {
            fout << line << endl;
        }
        lineCount++;
    }
    fout.close();
    remove("sample.txt");
    rename("temp.txt", "sample.txt");
}

void createContact() {
    char firstName[30], middleName[30], lastName[30];
    char number[30];
fname:
    cout << "Nombre: ";
    cin >> firstName;
mname:
    cout << "Apellido: ";
    cin >> middleName;
lname:
    cout << "Empresa: ";
    cin >> lastName;
mo:
    cout << "Número telefonico: ";
    cin >> number;
    if (strlen(number) != 8) {
        cout << "xxx Ingrese un número de telefono válido de 8 dígitos xxx \n ";
        goto mo;
    }
    ofstream fout;
    string line;
    fout.open("sample.txt", ios::app);
    fout << firstName << " " << middleName << " " << lastName << " " << number
         << "\n";
    cout << "\t\t¡Contacto creado correctamente!\n";
    fout.close();
}

void displayAllContacts() {
    string myText;
    ifstream MyReadFile("sample.txt");
    cout << "+" << setfill('-') << setw(80) << "+" << endl;
    cout << "|" << setfill(' ') << setw(46) << "Contactos" << setw(34) << "|"
         << endl;
    cout << "+" << setfill('-') << setw(20) << "+" << setw(20) << "+"
         << setw(20) << "+" << setw(20) << "+" << endl;
    cout << "|" << setfill(' ') << setw(10) << "Nombre" << setw(10) << "|"
         << setw(10) << "Apellido" << setw(10) << "|" << setw(10) << "Empresa"
         << setw(10) << "|" << setw(10) << "Numero" << setw(10) << "|" << endl;
    cout << "+" << setfill('-') << setw(20) << "+" << setw(20) << "+"
         << setw(20) << "+" << setw(20) << "+" << endl;
    while (getline(MyReadFile, myText)) {
        string fname, mname, lname, number;
        stringstream ss(myText);
        string word;
        int index = 0;
        while (ss >> word) {
            switch (index) {
                case 0:
                    fname = word;
                    break;
                case 1:
                    mname = word;
                    break;
                case 2:
                    lname = word;
                    break;
                case 3:
                    number = word;
                    break;
                default:
                    break;
            }
            index++;
        }
        int w1 = ((20 - fname.size()) / 2) + fname.size();
        int w2 = 20 - w1;
        int w3 = ((20 - mname.size()) / 2) + mname.size();
        int w4 = 20 - w3;
        int w5 = ((20 - lname.size()) / 2) + lname.size();
        int w6 = 20 - w5;
        int w7 = ((20 - number.size()) / 2) + number.size();
        int w8 = 20 - w7;
        cout << "|" << setfill(' ') << setw(w1) << fname << setw(w2) << "|"
             << setw(w3) << mname << setw(w4) << "|" << setw(w5) << lname
             << setw(w6) << "|" << setw(w7) << number << setw(w8) << "|"
             << endl;
    }
    cout << "+" << setfill('-') << setw(20) << "+" << setw(20) << "+"
         << setw(20) << "+" << setw(20) << "+" << endl;
    MyReadFile.close();
}
void searchContact() {
    string myText, search, smallString;
    ifstream MyReadFile("sample.txt");
    cout << "Ingrese Número o Nombre para buscar: ";
    cin >> search;
    cout << "\t\tRegistro(s) encontrado(s) :\n";
    while (getline(MyReadFile, myText)) {
        smallString = myText;
        transform(smallString.begin(), smallString.end(), smallString.begin(),
                  ::toupper);
        transform(search.begin(), search.end(), search.begin(), ::toupper);
        if (smallString.find(search) != string::npos) {
            int w1 = ((60 - myText.size()) / 2) + myText.size();
            int w2 = 60 - w1;
            cout << "+" << setfill('-') << setw(60) << "+" << endl;
            cout << "|" << setfill(' ') << setw(w1) << myText << setw(w2) << "|"
                 << endl;
            cout << "+" << setfill('-') << setw(60) << "+" << endl;
        }
    }
    MyReadFile.close();
}

void deleteContact() {
    int lineNumber = 0;

    string myText, search, smallString;
    ifstream MyReadFile("sample.txt");
    cout << "Buscar contacto para eliminar ";
    cin >> search;

    while (getline(MyReadFile, myText)) {

        smallString = myText;
        transform(smallString.begin(), smallString.end(), smallString.begin(),
                  ::toupper);
        transform(search.begin(), search.end(), search.begin(), ::toupper);
        if (smallString.find(search) != string::npos) {
            cout << "ID - " << lineNumber << " " << myText << endl;
        }
        lineNumber++;
    }

    MyReadFile.close();
    int id, choice;
    cout << "Ingrese la ID de contacto de los datos anteriores para eliminar el contacto: ";
    cin >> id;
    cout << "¿Está seguro? ¡Esto no se puede deshacer! \nIngrese 1 para eliminar \nIngrese 0 para cancelar";
    cin >> choice;
    if (!choice == 0) {
        delete_line("sample.txt", id);
        cout << "+" << setfill('-') << setw(60) << "+" << endl;
        cout << "|" << setfill(' ') << setw(46)
             << "¡Contacto eliminado correctamente!" << setw(14) << "|" << endl;
        cout << "+" << setfill('-') << setw(60) << "+" << endl;
    }
}

void delete_line(const char* file_name, int n) {
    ifstream is(file_name);
    ofstream ofs;
    ofs.open("temp.txt", ofstream::out);
    char c;
    int line_no = 0;
    while (is.get(c)) {
        if (c == '\n') line_no++;

        if (line_no != n) ofs << c;
    }

    ofs.close();
    is.close();
    remove(file_name);
    rename("temp.txt", file_name);
}