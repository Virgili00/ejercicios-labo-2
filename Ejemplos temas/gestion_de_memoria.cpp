#include <iostream>
using namespace std;

int main() {
    // Asignación dinámica de memoria para un entero
    int* ptr = new int; // Reserva memoria para un entero
    *ptr = 42; // Asigna un valor al entero
    cout << "Valor almacenado en ptr: " << *ptr << endl;

    // Liberar la memoria asignada
    delete ptr;
    ptr = nullptr; // Evitar punteros colgantes
    
    return 0;
}