/*
6.Ordenar tres números
Escribí un programa que:
- Pida al usuario ingresar tres números enteros.
- Los almacene en un array (vector).
- Ordene el array de menor a mayor.
- Muestre el contenido del array ordenado.
*/
#include <iostream>
#include <vector>
void mostrarVector(const std::vector<int> numeros);
//Importante declarar que vamos a recibir una referencia para poder 
//modificar la variable numeros que le estamos pasando
void ordenarVector(std::vector<int>& numeros) {
    for (int i = 0; i < numeros.size() - 1; ++i) {
        for (int j = i + 1; j < numeros.size(); ++j) {
            if (numeros.at(i) > numeros.at(j)) {
                int temp = numeros.at(i);
                numeros.at(i) = numeros.at(j);
                numeros.at(j) = temp;
            }
        }
    }
    mostrarVector(numeros);
}

void mostrarVector(const std::vector<int> numeros) {
    for (int i = 0; i < numeros.size(); ++i) {
        std::cout << numeros[i] << " ";
    }
}

int main (){
    std::vector<int> numeros (3);
    
    // Pedir al usuario que ingrese tres números
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numeros.at(0);
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numeros.at(1);
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> numeros.at(2);
    
    // Ordenar los números de menor a mayor
    ordenarVector(numeros);    

    // Mostrar el contenido del array ordenado
    std::cout << "Números ordenados de menor a mayor: ";
    mostrarVector(numeros);
    std::cout << std::endl;

    return 0;    
}