#include <iostream>
#include <string>

class Animal {
    protected:
    std::string nombre;
    public:
    Animal(std::string nombre){
        this->nombre = nombre;
    }
    void comer() {
        std::cout << nombre << " esta comiendo" << std::endl;
    }
};

class Perro : public Animal {
    public:
    int patas;
    Perro(std::string nombre,int patas) : Animal(nombre) {
       this->patas = patas;
    }
    void ladrar() {
        std::cout << nombre << " esta ladrando" << std::endl;
    }
};

int main(){
    Perro* mi_perro = new Perro("Firulais",4);
    mi_perro->comer(); // Llama al método de la clase base
    mi_perro->ladrar(); // Llama al método de la clase derivada
    return 0;
}