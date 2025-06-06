#include <iostream>

class Auto {
    private:
        // Atributos privados (no pueden ser accedidos desde fuera de la clase)
        std::string marca;
        std::string modelo;
        std::string color;
    public:
        // Atributos publicos (accesibles desde fuera de la clase)
        Auto(std::string marca, std::string modelo, std::string color) {
            this->marca = marca;
            this->modelo = modelo;
            this->color = color;
        }

        
        void cambiarColor (std::string nuevoColor) {
            color = nuevoColor;
            std::cout << "El color del auto " << marca << " " << modelo << " ha cambiado a " << nuevoColor << "." << std::endl;
        }
        void arrancar () {
            std::cout << "El auto " << marca << " " << modelo << " ha arrancado." << std::endl;
        }
        void detener () {
            std::cout << "El auto " << marca << " " << modelo << " se ha detenido." << std::endl;
        }
};

int main () {
    Auto * auto1 = new Auto("Toyota", "Corolla", "Rojo"); 
    
    // Llamar a métodos del objeto
    auto1->arrancar();
    auto1->detener();
    
    auto1->cambiarColor("azul");
    delete auto1;
    auto1 = nullptr;
    return 0;
};