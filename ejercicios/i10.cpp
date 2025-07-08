//i10.cpp
//este programa guarda una coordenada, modifica sus valores luego los muestra

#include <iostream>
using namespace std;

//estructura coordenada
struct Coordenada {
    int x;
    int y;
};

int main() {
    Coordenada punto;         
    Coordenada* ptr = &punto;

    //usamos el puntero para modificar los valores
    cout << "ingresa el valor de x: ";
    cin >> ptr->x;

    cout << "ingresa el valor de y: ";
    cin >> ptr->y;

    //mostrar los valores accediendo directamente al objeto
    cout<< "\ncoordenada ingresada:\n";
    cout<< "x=" << punto.x << endl;
    cout<< "y=" << punto.y << endl;

    return 0;
}
