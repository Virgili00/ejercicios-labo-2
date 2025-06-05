#include <iostream>
#include <string>


class Calculadora {
public:
    // Método para sumar dos números enteros
    int sumar(int a, int b) {
        return a + b;
    }

    // Método para sumar tres números enteros
    int sumar(int a, int b, int c) {
        return a + b + c;
    }

    // Método para sumar dos números de punto flotante
    double sumar(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculadora calc;

    // Llamadas a los métodos de suma
    int sumaEnteros = calc.sumar(5, 10); // Llama al método con dos enteros
    int sumaTresEnteros = calc.sumar(5, 10, 15); // Llama al método con tres enteros
    double sumaFlotantes = calc.sumar(5.5, 10.1); // Llama al método con dos flotantes
    
    std::cout << "Suma de enteros: " << sumaEnteros << std::endl; // Imprime
    std::cout << "Suma de tres enteros: " << sumaTresEnteros << std::endl; // Imprime 
    std::cout << "Suma de flotantes: " << sumaFlotantes << std::endl; // Imprime
    return 0;
}