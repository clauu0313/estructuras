//a03.cpp
//este programa crea una estructura tipo calculadora

#include <iostream>
using namespace std;

//funciones suma y resta
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

//estructura - punteros a funciones para operaciones
struct Calculadora {
    int (*funcionSuma)(int, int);
    int (*funcionResta)(int, int);
};

int main() {
    Calculadora calc;

    //asignamos las funciones a los punteros
    calc.funcionSuma=sumar;
    calc.funcionResta=restar;

    int x, y;
    cout << "ingresar el primer numero: ";
    cin >> x;
    cout << "ingresar el segundo numero: ";
    cin >> y;

    cout << "suma:" << calc.funcionSuma(x, y) << endl;
    cout << "resta:" << calc.funcionResta(x, y) << endl;

    return 0;
}
