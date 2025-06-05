#include <iostream>
int main() {
    double num1, num2;
    char operacion;

while(true){
    std::cout << "Ingrese la operación (+, -, *, /,0): ";
    std::cin >> operacion;
     if(operacion == '0') {
        break;
    }

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
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
                std::cout << "Error: División por cero." << std::endl;
            }
            break;
        case '0':
            break;
        default:
            std::cout << "Operación no válida." << std::endl;
    }
}

    return 0;
}
