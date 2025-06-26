#include "funciones.h"

// Funcion que muestra las preguntas y posibles respuestas de cada nivel, al responder de forma correcta se suman puntos y avanza de nivel

void inicializarNiveles(Nivel niveles[])
{
    // Nivel 1
    niveles[0] = {
        1, "Facil", {
            {"\n¿Cuál es el planeta más cercano al Sol?", "Venus", "Marte", "Mercurio", "Júpiter", 'C'}, 
            {"\n¿Qué tipo de dato se usa para números enteros en C++?", "int", "float", "char", "bool", 'A'}, 
            {"\n¿En qué año llegó el hombre a la Luna?", "1965", "1969", "1972", "1959", 'B'},
            {"\n¿Cuál es el idioma más hablado en el mundo?", "Español", "Inglés", "Chino mandarín", "Hindi", 'C'},
            {"\n¿Qué científico desarrolló la teoría de la evolución?", "Einstein", "Darwin", "Newton", "Pasteur", 'B'}}, 10};
    
    // Nivel 2
    niveles[1] = {
        2, "Basico", {
        {"\n¿Cuántos continentes hay en el mundo?", "5", "6", "7", "8", 'c'}, 
        {"\n¿Qué estructura se usa para decisiones múltiples en C++?", "if", "while", "for", "switch", 'd'}, 
        {"\n¿Cuál es el resultado de 5 % 2 en C++?", "2.5", "0", "1", "2", 'c'}, 
        {"\n¿Qué palabra clave define una clase en C++?", "class", "struct", "define", "module", 'a'},
        {"\n¿Qué estructura de datos funciona como una fila (FIFO)?", "Stack", "Queue", "Array", "Tree", 'b'}}, 20};

    // Nivel 3
    niveles[2] = {
        3, "Intermedio", {
        {"\n¿Quién escribió 'Cien años de soledad'?", "Pablo Neruda", "Gabriel García Márquez", "Julio Cortázar", "Mario Vargas Llosa", 'b'}, 
        {"¿Cuál es la estructura de datos para agrupar múltiples datos de diferente tipo?", "vector", "array", "struct", "int", 'c'}, 
        {"¿Qué bucle se ejecuta al menos una vez?", "for", "do-while", "while", "switch", 'b'}, 
        {"¿Qué operador se usa para comparar igualdad en C++?", "=", "==", "!=", "<>", 'b'},
        {"¿Qué función se usa para obtener la longitud de un string en C++?", "size()", "length()", "count()", "len()", 'b'}}, 30};

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
        8, "Maestro", {{"¿Qué país tiene más habitantes en el mundo?", "EE.UU.", "India", "China", "Brasil", 'b'},
            {"¿Qué operador se usa para negar en C++?", "!", "~", "not", "-", 'a'},
            {"¿Qué es una función en programación?", "Un número", "Un bucle", "Un bloque de código reutilizable", "Una variable", 'c'},
            {"¿Qué lenguaje es conocido por su simplicidad?", "Java", "Python", "C++", "Assembly", 'b'},
            {"¿Qué tecnología permite guardar archivos en la nube?", "WiFi", "Bluetooth", "Cloud", "USB", 'c'}}, 80};

    // Nivel 9
    niveles[8] = {
        9, "Genio", { {"¿Quién inventó el lenguaje C++?", "Bjarne Stroustrup", "Dennis Ritchie", "Linus Torvalds", "James Gosling", 'a'},
            {"¿Qué operador se usa para acceder a miembros por puntero?", ".", "->", "&", "*", 'b'},
            {"¿Qué es la recursividad?", "Un tipo de variable", "Una función que se llama a sí misma", "Un ciclo infinito", "Un error de sintaxis", 'b'},
            {"¿Qué unidad mide la frecuencia de un procesador?", "Watts", "Bytes", "Hertz", "Ohms", 'c'},
            {"¿Qué siglas representan inteligencia artificial?", "IA", "AI", "AR", "IE", 'b'}}, 90};

    // Nivel 10
    niveles[9] = {
        10, "Leyenda", { {"¿Cuál es la capital de Australia?", "Sydney", "Melbourne", "Canberra", "Perth", 'c'},
            {"¿Qué hace la función 'main' en C++?", "Nada", "Es la función principal", "Guarda variables", "Es una librería", 'b'},
            {"¿Qué palabra se usa para manejar errores en C++?", "catch", "throw", "try", "error", 'c'},
            {"¿Qué extensión se usa para archivos de cabecera?", ".cpp", ".exe", ".h", ".txt", 'c'},
            {"¿Qué significa RAM?", "Read After Memory", "Random Access Memory", "Real Algorithm Machine", "Remote Access Module", 'b'}}, 100};
}

// Función que recibe una pregunta (tipo Pregunta) y muestra su texto y las cuatro opciones posibles.
// No modifica la pregunta recibida, solo la muestra al usuario.
void mostrarPregunta(const Pregunta &p) {
    cout << "\n" << p.texto << "\n";
    cout << "A) " << p.opcionA << "\n";
    cout << "B) " << p.opcionB << "\n";
    cout << "C) " << p.opcionC << "\n";
    cout << "D) " << p.opcionD << "\n";
    }

    void ejecutarJuego() {//falta desarrollar las frases y for de niveles de juego
    const int NUM_NIVELES = 10; //definicion de constante
    Nivel niveles[NUM_NIVELES]; //arreglo de 10 elementos de tipo nivel
    inicializarNiveles(niveles); //Se llama a inicializarNiveles(niveles) para llenar cada nivel con sus preguntas, dificultad y puntaje.
    }