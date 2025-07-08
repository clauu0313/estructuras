//b06.cpp
//este programa te deja registrar un libro usando un puntero a estructura

#include <iostream>
#include <string>
using namespace std;

//estructura
struct Libro {
    string titulo;
    string autor;
};

int main() {
    
    Libro* miLibro = new Libro;

    //pedir datos
    cout << "ingrese el titulo del libro: ";
    getline(cin, miLibro->titulo);

    cout << "ingrese el autor del libro: ";
    getline(cin, miLibro->autor);

    //mostrar la informacion
    cout << "\nlibro registrado:\n";
    cout << "titulo: " << miLibro->titulo << endl;
    cout << "autor: " << miLibro->autor << endl;

    //liberamos memoria
    delete miLibro;

    return 0;
}
