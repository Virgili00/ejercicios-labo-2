#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
public:
    Persona(std::string _nombre, int _edad) {
        nombre = _nombre;
        edad = _edad;
    }
    ~Persona() {
        std::cout << "Destructor de Persona llamado para " << nombre << std::endl;
    }
    void mostrar() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

class Archivo {
private:
    std::string nombreArchivo;
    FILE* archivo;

public:
    Archivo(const std::string& nombre) : nombreArchivo(nombre), archivo(nullptr) {
        archivo = fopen(nombreArchivo.c_str(), "w");
        if (archivo) {
            std::cout << "Archivo " << nombreArchivo << " abierto correctamente." << std::endl;
        } else {
            std::cerr << "Error al abrir el archivo " << nombreArchivo << "." << std::endl;
        }
    }

    ~Archivo() {
        if (archivo) {
            fclose(archivo);
            std::cout << "Archivo " << nombreArchivo << " cerrado correctamente." << std::endl;
        }
    }

    void escribir(const std::string& texto) {
        if (archivo) {
            fputs(texto.c_str(), archivo);
        } else {
            std::cerr << "No se puede escribir en el archivo " << nombreArchivo << "." << std::endl;
        }
    }
};

int main () {
    Persona* persona1 = new Persona("Juan", 30);
    persona1->mostrar(); // Muestra los datos de la persona
    delete persona1; // Llama al destructor de Persona
    return 0;
}



