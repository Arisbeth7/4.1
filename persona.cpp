#include <iostream>
#include "persona.h"
#include <cstring>
using namespace std;


persona::persona(){
}
persona::persona(char nombre[100], char apellido[100], char nacionalidad[100]) {

    strcpy(this->nombre,nombre);
    strcpy(this->apellido,apellido);
    strcpy(this->nacionalidad,nacionalidad);

}
void persona::toString() {

    cout << "--- Informacion Autor ---"<<endl;
    cout << "Nombre: "<< this->nombre << endl;
    cout << "Apellidos: "<< this->apellido << endl;
    cout << "Nacionalidad: "<< this->nacionalidad << endl;
    cout << endl<<endl;
}
