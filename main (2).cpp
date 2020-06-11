#include <iostream>
#include <cstring>
#include <string>
#include "Persona.h"
#include "libro.h"

using namespace std;

libro registrar(){
    char titulo[100];
    char nombre[100];
    char apellido[100];
    char nacionalidad[100];
    int anio;
    char genero[100];
    char editorial[100];
    char isbn[100];

    cout << "Ingrese el titulo del libro"<<endl;
    cin >>titulo;

    cout << "Annio del libro"<<endl;
    cin >> anio;

    cout << "Genero del libro"<<endl;
    cin >> genero;

    cout << "Editorial del libro"<<endl;
    cin >>editorial;

    cout << "ISBN del libro"<<endl;
    cin >> isbn;

    cout << "--- Datos del autor ---"<< endl;
    cout << "Ingrese le nombre del autor"<<endl;
    cin >>nombre;

    cout << "Ingrese los apellidos del autor"<<endl;
    cin >> apellido;

    cout << "Nacionalidad del autor"<< endl;
    cin >> nacionalidad;

    cout << "--- Libro registrado con exito---"<< endl;

    persona autor =persona(nombre,apellido,nacionalidad);
    libro nuevo = libro(titulo,autor,anio,genero,editorial,isbn);

    return nuevo;
}

void menu(){
    cout << "---------- MENU -------------"<<endl;
    cout << "   1.- Registrar libro "<<endl;
    cout << "   2.- Editar datos del libro"<<endl;
    cout << "   3.- Eliminar "<<endl;
    cout << "   4.- Consultar autor"<<endl;
    cout << "   5.- Consultar datos "<<endl;
    cout << "-----------------------------"<<endl;
}
int main(){
    libro libros[10];
    bool power = true;
    int op = 0, librosC = 0, num = 0, imc;

    while (power){
        menu();
        cout << "Ingrese la opcion deseada :"<< endl;
        cin >> op;

        switch (op) {
            case 1:
                cout << "--- registrar libro---"<< endl;
                libros[librosC] = registrar();
                librosC++;
                num++;

                break;
            case 2:
                cout << "--- Editar datos del libro---"<< endl;
                cout << "Ingrese el numero del libro: "<<endl;
                cin >> num;

                libros[num].toString();

                libros[num] = registrar();
                break;

            case 3:
                cout << "Ingrese el numero de libro: "<<endl;
                cin >>num;

                libros[num].toString();
                libros[num] = libro();
                cout << "Libro eliminado"<<endl;
                break;

            case 4:
                cout << "Ingrese el numero del libro: "<<endl;
                cin >> num;

                libros[num].getAutor();
                break;

            case 5:
                cout << "Ingrese el numero de libro: "<<endl;
                cin >> num;

                libros[num].toString();
                break;

            default:
                power = false;
                break;
        }
    }

    return 0;
}
