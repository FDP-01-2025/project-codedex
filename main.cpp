#include <iostream>
#include "funciones.h" // Se incluye el archivo .h donde tenemos las funciones del juego

int main()
{
    int = num_niveles = 10;
    Nivel niveles[num_niveles]; // Arreglo donde se llenaran las preguntas y niveles
    inicializarNiveles(niveles);

    int nivelActual = cargarJuego(); // En esta variable se carga el progreso el cual es 0 para iniciar
    cout << "Bienvenido al Quizz-UCA!" << endl;
    cout << "Te encuentras en el nivel:  " << nivelActual << endl;

    bool continuar = true;
    while (continuar && nivelActual < num_niveles) // se hace uso del bucle while para avanzar preguntas y niveles
    {
        cout << "Nivel" << niveles[nivelActual].numero << " : " << niveles[nivelActual].dificultad < endl;

        // uso del ciclo for para recorrer las preguntas de cada nivel
        for (const Pregunta &pregunta : niveles[nivelActual].preguntas)
        {
            bool correcta = hacerPregunta(pregunta);
            if (correcta) // Uso del condicional para saber si la respuesta es correcta o no
            {
                cout << "¡Haz respondido muy bien!" << endl;
            }
            else
            {
                cout << "Más suerte en la proxima :( )" << endl;
            }
        }
    }

    // El nivel actual va aumentand y se guarda el progreso del jugador al responder de forma correcta o incorrecta
    nivelActual++ guardarProgreso(nivelActual);

    // Uso del condicional cuando el jugador complete todos los niveles
    if (nivelActual >= num_niveles)
    {
        cout << "¡Felicidades! Eres el super ganador de Quizz-UCA";
        continuar = false;
    }
    else
    {
        cout << "¿Quieres continuar al siguiente nivel? (s/n): ";
        char opcion;
        cin >> opcion;
        if (opcion != 's' && opcion != 'S')
        {
            continuar = false;
        }
    }

    // Se termina el quizz
    cout << "Gracias por visitar Quizz-UCA, hasta la próxima :)";
    return 0;
}
