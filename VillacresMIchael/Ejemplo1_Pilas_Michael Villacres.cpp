#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pila;  // Declaración de una pila de enteros

    // Agregar elementos a la pila
    pila.push(10);
    pila.push(20);
    pila.push(30);
    pila.push(40);
    pila.push(50);

    cout << "Elementos de la pila:" << endl;

    // Mostrar los elementos de la pila utilizando un bucle for
    for (; !pila.empty(); pila.pop()) {
        cout << pila.top() << " ";
    }

    cout << endl;

    return 0;
}