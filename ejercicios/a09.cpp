//a09.cpp
//este programa permite ingresar numeros y los guarda en un AVL

#include <iostream>
#include <algorithm>
using namespace std;

//estructura nodo de un arbol AVL
struct NodoAVL {
    int dato;
    int altura;
    NodoAVL* izq;
    NodoAVL* der;

    NodoAVL(int valor) : dato(valor), altura(1), izq(nullptr), der(nullptr) {}
};

//funcion para obtener la altura de un nodo (0 si es nulo)
int obtenerAltura(NodoAVL* nodo) {
    return nodo ? nodo->altura : 0;
}

//funcion para actualizar la altura de un nodo
void actualizarAltura(NodoAVL* nodo) {
    nodo->altura = 1 + max(obtenerAltura(nodo->izq), obtenerAltura(nodo->der));
}

//obtener el factor de balanceo de un nodo
int balance(NodoAVL* nodo) {
    return nodo ? obtenerAltura(nodo->izq) - obtenerAltura(nodo->der) : 0;
}

//rotacion simple a la derecha
NodoAVL* rotarDerecha(NodoAVL* y) {
    NodoAVL* x = y->izq;
    NodoAVL* T2 = x->der;

    x->der = y;
    y->izq = T2;

    actualizarAltura(y);
    actualizarAltura(x);

    return x;
}

//rotacion simple a la izquierda
NodoAVL* rotarIzquierda(NodoAVL* x) {
    NodoAVL* y = x->der;
    NodoAVL* T2 = y->izq;

    y->izq = x;
    x->der = T2;

    actualizarAltura(x);
    actualizarAltura(y);

    return y;
}

NodoAVL* insertar(NodoAVL* nodo, int valor) {
    if (!nodo) return new NodoAVL(valor);

    if (valor < nodo->dato)
        nodo->izq = insertar(nodo->izq, valor);
    else if (valor > nodo->dato)
        nodo->der = insertar(nodo->der, valor);
    else
        return nodo;

    actualizarAltura(nodo);

    int bal = balance(nodo);

    //rotaciones segun el tipo de desequilibrio
    if (bal > 1 && valor < nodo->izq->dato)
        return rotarDerecha(nodo);

    if (bal < -1 && valor > nodo->der->dato)
        return rotarIzquierda(nodo);

    if (bal > 1 && valor > nodo->izq->dato) {
        nodo->izq = rotarIzquierda(nodo->izq);
        return rotarDerecha(nodo);
    }

    if (bal < -1 && valor < nodo->der->dato) {
        nodo->der = rotarDerecha(nodo->der);
        return rotarIzquierda(nodo);
    }

    return nodo;
}

//recorrido inorden para mostrar el arbol ordenado
void inorden(NodoAVL* raiz) {
    if (!raiz) return;
    inorden(raiz->izq);
    cout << raiz->dato << " ";
    inorden(raiz->der);
}

//liberar memoria
void liberar(NodoAVL* nodo) {
    if (!nodo) return;
    liberar(nodo->izq);
    liberar(nodo->der);
    delete nodo;
}

int main() {
    NodoAVL* raiz = nullptr;
    int n, valor;

    cout << "cuantos numeros deseas ingresar al arbol AVL?:";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "numero " << i + 1 << ":";
        cin >> valor;
        raiz = insertar(raiz, valor);
    }

    cout << "elementos en orden (inorden):";
    inorden(raiz);
    cout << endl;

    liberar(raiz);
    return 0;
}
