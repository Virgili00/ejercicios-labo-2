#include <iostream>

namespace tipos_de_datos   // Defino el namespace tipos_de_datos
{
    void tipos_de_datos()
    {
        bool flag; // declaro la variable
        int numero; // declaro la variable
        float decimal; // declaro la variable
        char letra; // declaro la variable
        std::string cadena; // declaro la variable
    }
    void ifs()
    {
         // declaro la variable
        std::cout << "Enter a number: "; //Imprimo un mensaje y el valor de la variable
        //leo el valor de la variable
        if (int numero=2 > 0)
        {
            std::cout << "El numero es positivo" << std::endl;
        }
        else
        {
            std::cout << "El numero es cero" << std::endl;
        }
    }
    void for_and_while()
    {
        int numero; // declaro la variable
        std::cout << "Enter a number: "; //Imprimo un mensaje y el valor de la variable
        std::cin >> numero; //leo el valor de la variable
        for (int i = 0; i < numero; i++)
        {
            std::cout << "El numero es positivo" << std::endl;
        }
        while (numero > 0)
        {
            std::cout << "El numero es positivo" << std::endl;
            numero--;
        }
    }
}

int main () {
    // Llamo a la funcion del namespace tipos_de_datos
    tipos_de_datos::tipos_de_datos();
    tipos_de_datos::ifs();
    tipos_de_datos::for_and_while();
    
    return 0;
}
