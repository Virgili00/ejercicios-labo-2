/*
3.Escribe un programa que pida el limite inferior y superior de un intervalo. 
Si el límite inferior es mayor que el superior lo tiene que volver a pedir.  
A continuación se van introduciendo números hasta que introduzcamos el 0. 
Cuando termine el programa dará las siguientes informaciones
– La suma de los números que están dentro del intervalo (intervalo abierto).
– Cuantos números están fuera del intervalo.
– Informa si hemos introducido algún número igual a los límites del intervalo.
*/
#include <iostream>
void mostrarNumeros(int limiteInferior, int limiteSuperior, int sumaDentro, int fueraIntervalo, int igualLimites) {
    std::cout << "Suma de números dentro del intervalo (" << limiteInferior << ", " << limiteSuperior << "): " << sumaDentro << std::endl;
    std::cout << "Cantidad de números fuera del intervalo: " << fueraIntervalo << std::endl;
    if (igualLimites > 0) {
        std::cout << "Se introdujo al menos un número igual a los límites del intervalo." << std::endl;
    } else {
        std::cout << "No se introdujo ningún número igual a los límites del intervalo." << std::endl;
    }
}

int main() {
    int limiteInferior, limiteSuperior, numero;
    int sumaDentro = 0, fueraIntervalo = 0, igualLimites = 0;

    // Solicitar al usuario los límites del intervalo
    std::cout << "Ingrese el límite inferior del intervalo: ";
    std::cin >> limiteInferior;
    std::cout << "Ingrese el límite superior del intervalo: ";
    std::cin >> limiteSuperior;

    // Validar que el límite inferior sea menor que el superior
    do {
        if (limiteInferior >= limiteSuperior) {
            std::cout << "Error: El límite inferior debe ser menor que el límite superior." << std::endl;
            std::cout << "Ingrese nuevamente el límite inferior: ";
            std::cin >> limiteInferior;
            std::cout << "Ingrese nuevamente el límite superior: ";
            std::cin >> limiteSuperior;
        }
    } while (limiteInferior >= limiteSuperior);
    std::cout << "Ingrese un número (0 para terminar): ";
        std::cin >> numero;
    while(numero != 0) {
        // Verificar si el número está dentro del intervalo
        if (numero > limiteInferior && numero < limiteSuperior) {
            sumaDentro += numero; // Sumar al total de números dentro del intervalo
        } else if (numero != 0) {
            fueraIntervalo++; // Contar números fuera del intervalo
        }

        // Verificar si el número es igual a los límites del intervalo
        if (numero == limiteInferior || numero == limiteSuperior) {
            igualLimites += 1; // Indicar que se ha introducido un número igual a los límites
        }
        std::cout << "Ingrese un número (0 para terminar): ";
        std::cin >> numero;
        
    }
    mostrarNumeros(limiteInferior, limiteSuperior, sumaDentro, fueraIntervalo, igualLimites);
    return 0; // Salir con éxito

}