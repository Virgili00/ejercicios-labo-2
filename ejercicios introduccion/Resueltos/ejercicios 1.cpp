#include <iostream>
//1.Desarrollar una calculadora que tome 2 valores y los sume,divida,reste o multiplique
int main() {
    double num1, num2;
    char operacion;

while(true){
    std::cout << "Ingrese la operaci�n (+, -, *, /,0): ";
    std::cin >> operacion;
     if(operacion == '0') {
        break;
    }

    std::cout << "Ingrese el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo n�mero: ";
    std::cin >> num2;


    switch (operacion)
    {
        case '+':
            std::cout << "Resultado: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Resultado: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Divisi�n por cero." << std::endl;
            }
            break;
        case '0':
            break;
        default:
            std::cout << "Operaci�n no v�lida." << std::endl;
    }
}

    return 0;
}
