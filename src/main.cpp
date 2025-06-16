#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Archivo main que contiene todas las funciones a utilizar dentro del proyecto.

// Definición de la clase Pregunta
class Pregunta {
public:
    string enunciado;
    vector<string> opciones;
    char respuestaCorrecta;
};

// Función para mostrar una pregunta y obtener respuesta
bool hacerPregunta(const Pregunta& p) {
    cout << p.enunciado << endl;
    for (int i = 0; i < 4; i++) {
        cout << char('a' + i) << ") " << p.opciones[i] << endl;
    }
    char respuesta;
    cout << "Tu respuesta (a/b/c/d): ";
    cin >> respuesta;
    respuesta = tolower(respuesta);
    return respuesta == p.respuestaCorrecta;
}
