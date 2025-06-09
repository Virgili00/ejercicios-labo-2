#include <vector>
#include <iostream>
class Auto {

};

int main(){
std::vector<int> vectorEnteros;
std::vector<int> vectorEnteros2(5); //Crea un vector de enteros con 5 elementos, inicializados a 0
std::vector<int> vectorEnteros3(5, 1); //Crea un vector de enteros con 5 elementos, inicializados a 1
std::vector<int> vectorEnteros4(vectorEnteros2); //Crea un vector de enteros a partir de otro vector 
std::vector<int> vectorEnteros5 {1, 2, 3, 4, 5}; //Crea un vector de enteros con los valores especificados

std::vector<std::string> vectorCadenas; //Crea un vector de cadenas de texto
std::vector<std::string> vectorCadenas2(5); //Crea un vector de cadenas de texto con 5 elementos, inicializados a cadena vacía

std::vector<Auto> vectorAutos; //Crea un vector de objetos de la clase Auto
std::vector<Auto> vectorAutos2(5); //Crea un vector de objetos de la clase Auto con 5 elementos, inicializados a objetos por defecto
std::vector<Auto> vectorAutos3 {Auto(), Auto(), Auto()}; //Crea un vector de objetos de la clase Auto con los objetos especificados
vectorCadenas.push_back("Hola"); //Agrega un elemento al final del vector de cadenas


vectorEnteros.push_back(1);
vectorEnteros.push_back(2); //Agrego un elemento al final del vector

vectorEnteros.pop_back(); //Elimina el último elemento del vector
vectorEnteros.insert(vectorEnteros.begin(), 0); //Inserta un elemento al principio del vector
vectorEnteros.erase(vectorEnteros.begin() + 1); //Elimina el segundo elemento del vector
vectorEnteros.clear(); //Elimina todos los elementos del vector
vectorEnteros.resize(5); //Redimensiona el vector a 5 elementos, inicializados a 0
vectorEnteros.resize(10, 1); //Redimensiona el vector a 10 elementos, inicializados a 1
vectorEnteros.reserve(20); //Reserva espacio para 20 elementos, sin cambiar el tamaño actual


}