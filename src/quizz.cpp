#include "funciones.h"

void inicializarNiveles(Nivel niveles[]) {
    // Nivel 1
    niveles[0] = {
         1, "Facil",{/*Poner preguntas de nivel 1.*/},10
    };

     // Nivel 2
    niveles[1] = {
        2, "Basico", {/*Poner preguntad de nivel 2.*/}, 20
    };

    // Nivel 3
    niveles[2] = {
        3, "Intermedio", {/*Poner preguntas de nivel 3.*/}, 30
    };

    // Nivel 4
    niveles[3] = {
        4, "Avanzado", {/*Poner preguntas de nivel 4.*/}, 40
    };

     // Nivel 5
    niveles[4] = {
        5, "Desafiante", {/*Poner preguntas de nivel 5.*/}, 50
    };
    


}