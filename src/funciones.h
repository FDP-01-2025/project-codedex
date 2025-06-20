#include <iostream>

using namespace std;

struct Pregunta {
    string texto;
    string opcionA;
    string opcionB;
    string opcionC;
    string opcionD;
    char respuestaCorrecta; // 'A', 'B', 'C' or 'D'
};

struct Nivel {
    int numero;
    string dificultad;
    Pregunta preguntas[5];
    int puntosPorRespuesta;
};