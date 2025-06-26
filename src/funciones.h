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

//Struct con los datos que contendra cada nivel 
struct Nivel {
    int numero;
    string dificultad;
    Pregunta preguntas[5];
    int puntosPorRespuesta;
};

void inicializarNiveles(Nivel niveles[]);
void ejecutarJuego();
void guardarProgreso(); 




//Funcion para mostrar las preguntas 
void mostrarPregunta(const Pregunta &q){

    /*int num_niveles = 10;
    Nivel niveles[num_niveles]; // Arreglo donde se llenaran las preguntas y niveles
    inicializarNiveles(niveles);

    int nivelActual = ejecutarJuego(); // En esta variable se carga el progreso el cual es 0 para iniciar
    cout << "Bienvenido al Quizz-UCA!" << endl;
    cout << "Te encuentras en el nivel:  " << nivelActual << endl;

    bool continuar = true;
    while (continuar && nivelActual < num_niveles) // se hace uso del bucle while para avanzar preguntas y niveles
    {
        cout << "Nivel" << niveles[nivelActual].numero << " : " << niveles[nivelActual].dificultad < endl;

        // uso del ciclo for para recorrer las preguntas de cada nivel
        for (const Pregunta &pregunta : niveles[nivelActual].preguntas)
        {
            bool correcta = mostrarPregunta(pregunta);
            if (correcta) // Uso del condicional para saber si la respuesta es correcta o no
            {
                cout << "¡Haz respondido muy bien!" << endl;
            }
            else
            {
                cout << "Más suerte en la proxima :( )" << endl;
            }
        }
    }*/
};


