#include <iostream>
#include "libro.h"
#include <cstring>
using namespace std;


libro::libro(){

}
    libro::libro(char titulo[100], persona autor, int anio, char genero[100], char editorial[100], char isbn[100]) {
    strcpy(this->titulo,titulo);
    this->autor = autor;
    this->anio = anio;
    strcpy(this->genero,genero);
    strcpy(this->editorial,editorial);
    strcpy(this->isbn,isbn);
}

void libro::update(char titulo[100], persona autor, int anio, char genero[100], char editorial[100], char isbn[100]) {
    strcpy(this->titulo,titulo);
    this->autor = autor;
    this->anio = anio;
    strcpy(this->genero,genero);
    strcpy(this->editorial,editorial);
    strcpy(this->isbn,isbn);
}
void libro::getAutor() {
    this->autor.toString();
}

void libro::toString() {
    cout << "---Informacion del libro---"<<endl;
    cout << "Titulo: "<< this->titulo<<endl;
    cout << "Anio: "<< this->anio<<endl;
    cout << "Genero: "<< this->genero<<endl;
    cout << "Editorial: "<< this->editorial<<endl;
    cout << "ISBN: "<< this->isbn<<endl;
    this->autor.toString();

}
