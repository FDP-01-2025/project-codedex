#include "funciones.h"

// Funcion que muestra las preguntas y posibles respuestas de cada nivel, al aumentar el nivel
// se agregan mas preguntas con mayor dificuktad lo que hace que el Quizz sea mas emocinante

void inicializarNiveles(Nivel niveles[])
{
    // Nivel 1
    niveles[0] = {
        1, "Facil", {{"\n¿Cuál es el planeta más cercano al Sol?", {"Venus", "Marte", "Mercurio", "Júpiter"}, 'c'}, 
        {"¿Qué tipo de dato se usa para números enteros en C++?", {"int", "float", "char", "bool"}, 'a'}}, 10};

    // Nivel 2
    niveles[1] = {
        2, "Basico", {{"\n¿Cuántos continentes hay en el mundo?", {"5", "6", "7", "8"}, 'c'}, 
        {"¿Qué estructura se usa para decisiones múltiples en C++?", {"if", "while", "for", "switch"}, 'd'}, 
        {"¿Cuál es el resultado de 5 % 2 en C++?", {"2.5", "0", "1", "2"}, 'c'}}, 20};

    // Nivel 3
    niveles[2] = {
        3, "Intermedio", {{"\n¿Quién escribió 'Cien años de soledad'?", {"Pablo Neruda", "Gabriel García Márquez", "Julio Cortázar", "Mario Vargas Llosa"}, 'b'}, 
        {"¿Cuál es la estructura de datos para agrupar múltiples datos de diferente tipo?", {"vector", "array", "struct", "int"}, 'c'}, 
        {"¿Qué bucle se ejecuta al menos una vez?", {"for", "do-while", "while", "switch"}, 'b'}, 
        {"¿Qué operador se usa para comparar igualdad en C++?", {"=", "==", "!=", "<>"}, 'b'}}, 30};

    // Nivel 4
    niveles[3] = {
        4, "Avanzado", { {"¿Cuál es la capital de Canadá?", "Toronto", "Vancouver", "Ottawa", "Montreal", 'c'},
            {"¿Qué tipo de bucle se ejecuta al menos una vez?", "while", "do-while", "for", "foreach", 'b'},
            {"¿Qué componente es el 'cerebro' de la computadora?", "RAM", "Disco Duro", "CPU", "GPU", 'c'},
            {"¿Qué significa 'IDE'?", "Entorno de Desarrollo Integrado", "Editor de Imagen", "Intel Debugger", "Interfaz de Datos Ejecutables", 'a'},
            {"¿Cuál es el símbolo para comentar una línea en C++?", "//", "/*", "#", "<!--", 'a'}}, 40};

    // Nivel 5
    niveles[4] = {
        5, "Desafiante", {{"¿Quién pintó la Mona Lisa?", "Van Gogh", "Picasso", "Da Vinci", "Rembrandt", 'c'},
            {"¿Qué es una variable en programación?", "Una constante", "Un valor fijo", "Un espacio de memoria para almacenar datos", "Un operador lógico", 'c'},
            {"¿Qué operador lógico significa 'y'?", "||", "!", "&&", "&""", 'c'},
            {"¿Qué comando en C++ se usa para imprimir en pantalla?", "cin", "cout", "printf", "print", 'b'},
            {"¿Qué es un 'bug' en programación?", "Una mejora", "Un error", "Un código secreto", "Un compilador", 'b'}}, 50};

    // Nivel 6
    niveles[5] = {
        6, "Dificil", {  {"¿Cuál es el océano más grande del mundo?", "Atlántico", "Índico", "Ártico", "Pacífico", 'd'},
            {"¿Qué palabra clave se usa para constantes en C++?", "static", "final", "const", "immutable", 'c'},
            {"¿Cuál es el resultado de 2 * 3 + 4?", "10", "14", "12", "8", 'a'},
            {"¿Qué tipo de archivo guarda código fuente C++?", ".exe", ".cpp", ".h", ".txt", 'b'},
            {"¿Qué dispositivo sirve para digitalizar documentos?", "Monitor", "Mouse", "Escáner", "Impresora", 'c'}}, 60};

    // Nivel 7
    niveles[6] = {
        7, "Experto", {{"¿Quién propuso la teoría de la relatividad?", "Newton", "Einstein", "Tesla", "Darwin", 'b'},
            {"¿Qué palabra se usa para definir estructuras en C++?", "class", "struct", "define", "data", 'b'},
            {"¿Qué operador se usa para comparación lógica OR?", "&&", "||", "|", "^", 'b'},
            {"¿Qué bucle se usa cuando no sabes cuántas veces repetir?", "for", "while", "do-while", "loop", 'b'},
            {"¿Qué es un compilador?", "Un editor", "Un error", "Un traductor de código", "Una librería", 'c'}}, 70};

    // Nivel 8
    niveles[7] = {
        8, "Maestro", {/*Poner preguntas de nivel 8.*/}, 80};

    // Nivel 9
    niveles[8] = {
        9, "Genio", {/*Poner preguntas de nivel 9.*/}, 90};

    // Nivel 10
    niveles[9] = {
        10, "Leyenda", {/*Poner preguntas de nivel 10.*/}, 100};
}