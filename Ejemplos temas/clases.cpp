#include <iostream>

class Auto {
private:
    // Atributos
    std::string marca;
    std::string modelo;
    std::string color;
public:
    // Constructor 
    Auto(std::string marca, std::string modelo, std::string color){
        this->marca = marca;
        this->modelo = modelo;
        this->color = color;
    }
    // Métodos
    void arrancar () {
        std::cout << "El auto " << marca << " " << modelo << " ha arrancado." << std::endl;
    }
    void detener () {
        std::cout << "El auto " << marca << " " << modelo << " se ha detenido." << std::endl;
    }
};

int main () {
    Auto * auto1 = new Auto("Toyota", "Corolla", "Rojo"); // Crear un objeto de la clase Auto
    
    // Llamar a métodos del objeto
    auto1->arrancar();
    auto1->detener();

    delete auto1; // Liberar la memoria asignada al objeto
    auto1 = nullptr; // Evitar punteros colgantes
    return 0;
}