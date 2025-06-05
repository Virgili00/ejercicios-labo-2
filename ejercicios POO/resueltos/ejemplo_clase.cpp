/*
En este ejercicios se va a animales que comen de formas diferentes y una persona que les da de comer.
*/
#include <iostream>
#include <string>
#include <vector>
class Comida {
public:
    int energia;
    std::string tipo;
    Comida(int energia,std::string tipo){
        this->energia = energia;
        this->tipo = tipo;
    };
};

class Animal {
private:
    std::string nombre;
public:
    int energia;

    Animal(std::string nombre): nombre(nombre), energia(0){
    }

    void recargarEnergia(int cantidad) {
        energia += cantidad;
        std::cout << nombre << " ha recargado " << cantidad << " de energía. Energía actual: " << energia << std::endl;
    }

    void mostrarEnergia(){
        std::cout << nombre << " tiene " << energia << " de energía." << std::endl;
    }

    std::string getNombre(){
        return nombre;
    }

    virtual void comer(Comida comida) = 0;

};

class Perro : public Animal {
private:
    std::string nombre;

public:
    Perro(std::string nombre) :  Animal(nombre) {}



    void comer(Comida comida) override {
        if (comida.tipo == "chocolate"){
            std::cout << "Me enferm2" << std::endl;
        }
        else {
            recargarEnergia(comida.energia);
        }
    }



};

class Ave : public Animal {
    public:
        Ave(std::string nombre): Animal(nombre){
        };
    void comer(Comida comida) override{
        recargarEnergia(comida.energia);
    }

};

class Senora {
private:
    std::string nombre;
public:
    std::vector<Comida> comidas {Comida(2,"pan"),Comida(1,"chocolate")};
    Senora(std::string nombre) : nombre(nombre) {}

    void darComida(Animal& Animal,int tipo) {
        std::cout << nombre << " le da " << " comida a " << Animal.getNombre() << "." << std::endl;
        Animal.comer(comidas.at(tipo));
    }
};


int main() {
    
    Senora senora = Senora("Dona Rosa");
    Ave pajarito = Ave("El pajaro loco");
    Perro ozzy = Perro("Ozzy");

    senora.darComida(ozzy,1);
    senora.darComida(pajarito,0);

    // for(size_t i = 0; i < senora.comidas.size();i++){
    //      std::cout << senora.comidas.at(i).tipo;
    // }




    return 0;
}
