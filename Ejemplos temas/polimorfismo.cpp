#include <iostream>
#include <string>
using namespace std;

// Clase base
class Animal {
public:
    Animal() {
        // Constructor de la clase base
    }
   // Método virtual puro (función abstracta)
    virtual void hacerSonido() = 0;
};
// Clase derivada 2
class Perro : public Animal {
    public:
    // Constructor de la clase derivada 1   
    Perro(): Animal() {
        // Constructor de la clase derivada 1
    }
    // Implementación del método virtual puro
    void hacerSonido() override {
        cout << "Guau!" << endl; // Implementación específica para Perro
    }

    
};

// Clase derivada 2
class Gato : public Animal {
public:
    // Constructor de la clase derivada 2
    Gato(): Animal() {
        // Constructor de la clase derivada 2
    }
    // Implementación del método virtual puro
    void hacerSonido() override {
        cout << "Miau!" << endl; // Implementación específica para Gato
    }
    
};


int main() {
    // Crear un objeto de la clase derivada 1
    Perro* miPerro = new Perro(); // Puntero a la clase base
    miPerro->hacerSonido(); // Llama a la versión de Perro


    return 0;
}
