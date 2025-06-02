/*2.Escribir un programa que muestre el eco de todo lo que el usuario introduzca 
hasta que el usuario escriba “salir” que terminará.*/
#include <iostream>
using namespace std;
void agregarTexto(string &texto, const string nuevoTexto);
int main() {
    string input,inputTotal;

    cout << "Escribe 'salir' para terminar el programa." << endl;

    while (true) {
        cout << "Introduce un texto: ";
        cin >> input;
        if (input == "salir") {
            break;
        }
        // Mostrar el eco del texto introducido
        agregarTexto(inputTotal, input);

        cout << "Eco: " << inputTotal << endl;
    }

    return 0;
}

void agregarTexto(string &texto, string nuevoTexto) {
    texto = texto.append(nuevoTexto);
}