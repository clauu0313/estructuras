//b02.cpp
//este programa crea un punto (x, y) y muestra sus coordenadas

#include <iostream>
using namespace std;

//definir una estructura llamada punto
struct Punto {
    float x;
    float y;
};

int main() {
    //crear un punto con valores iniciales directamente ejm:
    Punto p = {3.13, 15.11};

    //mostramos sus valores en consola
    cout << "coordenadas del punto: (" << p.x << ", " << p.y << ")" << endl;

    return 0;
}
