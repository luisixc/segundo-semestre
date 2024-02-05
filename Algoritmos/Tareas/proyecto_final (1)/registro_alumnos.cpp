
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
//uso de en caso de, para la seleción de opciones multiples, realiza el llamado a la funcion correspondiente
int main() {
    int exit = 1;
    while (exit) {
        cout << "\n";
        cout << " 1. Visualizar base de datos \n 2. Ingresar información de alumno \n 3. Actualizar información de alumno"
                "\n 4. Ordenar base de información \n 5. Eliminar alumno \n 6. Buscar alumno"
                "\n 0. Salir.\n";
        cout << "\n";
        cin >> exit;
        switch (exit) {
            case 1:
                displayAllContacts();
                break;
            case 2:
                createContact();
                break;
            case 3:
                updateContact();
                
				break;
            case 4:
				sortAllContact();
                break;
            case 5:
                deleteContact();
                break;
            case 6:
                searchContact();
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
//Ordenamiento de información
void sortAllContact() {
    ofstream fout;
    string line;
    remove("temp.txt");
    fout.open("temp.txt", ios::app);
    fstream fin("data_base.txt");
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
    remove("data_base.txt");
    fout.open("data_base.txt", ios::app);
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
    cout << "\t\t¡Registro de alumnos ordenado con éxito!\n";
    fout.close();
}
//Actualización de alumnos
void updateContact() {
    int lineNumber = 0;
    string myText, search, smallString;
    ifstream MyReadFile("data_base.txt");
    cout << "Escriba referencia de alumno: ";
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
    cout << "Ingrese el ID del alumno correspondiente: ";
    cin >> id;

    ifstream fin("data_base.txt");
    ofstream fout;
    remove("temp.txt");
    fout.open("temp.txt", ios::app);
    string line;
    int lineCount = 0;
    while (getline(fin, line)) {
        if (lineCount == id) {
            cout << line;
            string fname, mname, lname, number, sex, curs, sec;
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
					case 4:
                        sex = word;
                        break;
					case 5:
                        curs = word;
                        break;
					case 6:
                        sec = word;
                        break;
                    default:
                        break;
                }
                index++;
            }
            cout << fname << "\t" << mname << "\t" << lname << "\t" << number << "\t" << sex << "\t" << curs << "\t" << sec << "\t"
                 << endl;
            cout << endl;
            int myUpdate;
            cout << "\t\tActualizar detalles de alumno\n 1. Carnet de alumno\n 2. Primer Nombre"
                    "\n 3. Primer Apellido "
                    "\n 4. Telefóno"
					"\n 5. Sexo"
					"\n 6. Curso"
					"\n 7. Sección" 
					"\n 8. Guardar y salir\n 9. Salir\n";
            cin >> myUpdate;
            switch (myUpdate) {
                case 1:
                    cout << "Carnet de alumno : ";
                    cin >> fname;
                    break;
                case 2:
                    cout << "Primer Nombre : ";
                    cin >> mname;
                    break;
                case 3:
                    cout << "Primer Apellido : ";
                    cin >> lname;
                    break;
                case 4:
                    cout << "Número de telefóno : ";
                    cin >> number;
                    break;
				case 5:
                    cout << "Sexo : ";
                    cin >> sex;
                    break;
				case 6:
                    cout << "Curso : ";
                    cin >> curs;
                    break;
				case 7:
                    cout << "Sección : ";
                    cin >> sec;
                    break;
                case 8:
                    break;
                case 9:
                    break;
                default:
                    break;
            }
            fout << fname << " " << mname << " " << lname << " " << number << sex << " " << curs << " " << sec 
                 << "\n";
        } else {
            fout << line << endl;
        }
        lineCount++;
    }
    fout.close();
    remove("data_base.txt");
    rename("temp.txt", "data_base.txt");
}
//creación de funcion, creación de contactos.
void createContact() {
    //declaración de variables para almacenamiento en txt
    char firstName[30], middleName[30], lastName[30], sex_student[30], curso_student[30], section_student[30];
    char number[30];
fname:
    cout << "Carnet de alumno: ";
    cin >> firstName;
mname:
    cout << "Primer Nombre: ";
    cin >> middleName;
lname:
    cout << "Primer Apellido: ";
    cin >> lastName;
mo:
    cout << "Número de telefóno: ";
    cin >> number;
sex:
    cout << "Sexo: ";
    cin >> sex_student;
curs:
    cout << "Curso: ";
    cin >> curso_student;
sec:
    cout << "Sección: ";
    cin >> section_student;

    if (strlen(number) != 8) {
        cout << "xxx Ingrese un número de telefono válido de 8 dígitos xxx \n ";
        goto mo;
    }
    ofstream fout;
    string line;
    fout.open("data_base.txt", ios::app);
    fout << firstName << " " << middleName << " " << lastName << " " << number << " " << sex_student << " " << curso_student << " " << section_student
         << "\n";
    cout << "\t\t¡Alumno registrado correctamente!\n";
    fout.close();
}
//ornamentatia de impresión de datos
void displayAllContacts() {
    string myText;
    ifstream MyReadFile("data_base.txt");
    cout << "+" << setfill('-') << setw(140) << "+" << endl;
    cout << "|" << setfill(' ') << setw(75) << "Alumnos" << setw(65) << "|"
         << endl;
    cout << "+" << setfill('-') << setw(80) << "+" << setw(20) << "+"
         << setw(20) << "+" << setw(20) << "+" << endl;
    cout << "|" << setfill(' ') 
			<< setw(10) << "Carnet de alumno" << setw(4) << "|"
			<< setw(15) << "Primer Nombre" << setw(5) << "|" 
			<< setw(17) << "Primer Apellido" << setw(3) << "|" 
			<< setw(12) << "Telefóno" << setw(9) << "|" 
			<< setw(10) << "Sexo" << setw(10) << "|" 
			<< setw(10) << "Curso" << setw(10) << "|" 
			<< setw(11) << "Sección" << setw(10) << "|" << endl;
    cout << "+" << setfill('-') << setw(80) << "+" << setw(20) << "+"
         << setw(20) << "+" << setw(20) << "+" << endl;
         //obtención de data
    while (getline(MyReadFile, myText)) {
        string fname, mname, lname, number, sex, curs, sec;
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
				case 4:
                    sex = word;
                    break;
				case 5:
                    curs = word;
                    break;
				case 6:
                    sec = word;
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
		int w9 = ((20 - sex.size()) / 2) + sex.size();
        int w10 = 20 - w9;
		int w11 = ((20 - curs.size()) / 2) + curs.size();
        int w12 = 20 - w11;
		int w13 = ((20 - sec.size()) / 2) + sec.size();
        int w14 = 20 - w13;
        cout << "|" << setfill(' ') 
			<< setw(w1) << fname << setw(w2) << "|"
             << setw(w3) << mname << setw(w4) << "|" 
			 << setw(w5) << lname << setw(w6) << "|" 
			 << setw(w7) << number << setw(w8) << "|"
			 << setw(w9) << sex << setw(w10) << "|"
			 << setw(w11) << curs << setw(w12) << "|"
			 << setw(w13) << sec << setw(w14) << "|"
             << endl;
    }
    cout << "+" << setfill('-') << setw(80) << "+" << setw(20) << "+"
         << setw(20) << "+" << setw(20) << "+" << endl;
    MyReadFile.close();
}
//busqueda de un alumno
void searchContact() {
    string myText, search, smallString;
    ifstream MyReadFile("data_base.txt");
    cout << "Ingrese carnet de alumno para buscar: ";
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
    ifstream MyReadFile("data_base.txt");
    cout << "Buscar alumno para eliminar: ";
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
    cout << "Ingrese el ID del alumno correspondiente: ";
    cin >> id;
    cout << "¿Está seguro? ¡Esto no se puede deshacer! \nIngrese 1. Para eliminar. \nIngrese 0. Para cancelar. \n";
    cin >> choice;
    if (!choice == 0) {
        delete_line("data_base.txt", id);
        cout << "+" << setfill('-') << setw(60) << "+" << endl;
        cout << "|" << setfill(' ') << setw(46)
             << "¡Alumno eliminado correctamente!" << setw(14) << "|" << endl;
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