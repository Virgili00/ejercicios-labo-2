/*
5-Implementar la clase Señora y Ave, donde la Señora les de comida a las Aves y ellas recarguen energia.
*/

#include <iostream>
#include <string>
class Ave {
private:
    std::string nombre;
    
public:
    int energia;
    Ave(std::string nombre) : nombre(nombre), energia(0) {}

    void recargarEnergia(int cantidad) {
        energia += cantidad;
        std::cout << nombre << " ha recargado " << cantidad << " de energía. Energía actual: " << energia << std::endl;
    }

    std::string getNombre(){
        return nombre;
    }

    void mostrarEnergia(){
        std::cout << nombre << " tiene " << energia << " de energía." << std::endl;
    }
};

class Senora {
private:
    std::string nombre;
public:
    Senora(std::string nombre) : nombre(nombre) {}

    void darComida(Ave& Ave, int cantidad) {
        std::cout << nombre << " le da " << cantidad << " de comida a " << Ave.getNombre() << "." << std::endl;
        Ave.recargarEnergia(cantidad);
    }
};

int main() {
    Senora senora("Doña Rosa");
    Ave ave1("Aguilucho");
    Ave ave2("Hornero");

    senora.darComida(ave1, 10);
    senora.darComida(ave2, 15);
    senora.darComida(ave1, 30);
    senora.darComida(ave2, 40);

    ave1.mostrarEnergia();
    ave2.mostrarEnergia();

    return 0;
}