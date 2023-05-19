#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> nombres;  // Declaración de una lista de cadenas de texto

    // Agregar nombres a la lista
    nombres.push_back("Ana");
    nombres.push_back("Juan");
    nombres.push_back("María");
    nombres.push_back("Pedro");
    nombres.push_back("Luisa");

    cout << "Nombres en la lista:" << endl;

    // Mostrar los nombres de la lista utilizando un bucle for
    for (auto it = nombres.begin(); it != nombres.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}