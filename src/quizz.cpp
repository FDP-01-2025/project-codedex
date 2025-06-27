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
        {"\n¿Cuántos continentes hay en el mundo?", "5", "6", "7", "8", 'C'}, 
        {"\n¿Qué estructura se usa para decisiones múltiples en C++?", "if", "while", "for", "switch", 'D'}, 
        {"\n¿Cuál es el resultado de 5 % 2 en C++?", "2.5", "0", "1", "2", 'C'}, 
        {"\n¿Qué palabra clave define una clase en C++?", "class", "struct", "define", "module", 'A'},
        {"\n¿Qué estructura de datos funciona como una fila (FIFO)?", "Stack", "Queue", "Array", "Tree", 'B'}}, 20};

    // Nivel 3
    niveles[2] = {
        3, "Intermedio", {
        {"\n¿Quién escribió 'Cien años de soledad'?", "Pablo Neruda", "Gabriel García Márquez", "Julio Cortázar", "Mario Vargas Llosa", 'B'}, 
        {"¿Cuál es la estructura de datos para agrupar múltiples datos de diferente tipo?", "vector", "array", "struct", "int", 'C'}, 
        {"¿Qué bucle se ejecuta al menos una vez?", "for", "do-while", "while", "switch", 'B'}, 
        {"¿Qué operador se usa para comparar igualdad en C++?", "=", "==", "!=", "<>", 'B'},
        {"¿Qué función se usa para obtener la longitud de un string en C++?", "size()", "length()", "count()", "len()", 'B'}}, 30};

    // Nivel 4
    niveles[3] = {
        4, "Avanzado", { {"¿Cuál es la capital de Canadá?", "Toronto", "Vancouver", "Ottawa", "Montreal", 'C'},
            {"¿Qué tipo de bucle se ejecuta al menos una vez?", "while", "do-while", "for", "foreach", 'B'},
            {"¿Qué componente es el 'cerebro' de la computadora?", "RAM", "Disco Duro", "CPU", "GPU", 'C'},
            {"¿Qué significa 'IDE'?", "Entorno de Desarrollo Integrado", "Editor de Imagen", "Intel Debugger", "Interfaz de Datos Ejecutables", 'A'},
            {"¿Cuál es el símbolo para comentar una línea en C++?", "//", "/*", "#", "<!--", 'A'}}, 40};

    // Nivel 5
    niveles[4] = {
        5, "Desafiante", {{"¿Quién pintó la Mona Lisa?", "Van Gogh", "Picasso", "Da Vinci", "Rembrandt", 'C'},
            {"¿Qué es una variable en programación?", "Una constante", "Un valor fijo", "Un espacio de memoria para almacenar datos", "Un operador lógico", 'C'},
            {"¿Qué operador lógico significa 'y'?", "||", "!", "&&", "&""", 'C'},
            {"¿Qué comando en C++ se usa para imprimir en pantalla?", "cin", "cout", "printf", "print", 'B'},
            {"¿Qué es un 'bug' en programación?", "Una mejora", "Un error", "Un código secreto", "Un compilador", 'B'}}, 50};

    // Nivel 6
    niveles[5] = {
        6, "Dificil", {  {"¿Cuál es el océano más grande del mundo?", "Atlántico", "Índico", "Ártico", "Pacífico", 'D'},
            {"¿Qué palabra clave se usa para constantes en C++?", "static", "final", "const", "immutable", 'C'},
            {"¿Cuál es el resultado de 2 * 3 + 4?", "10", "14", "12", "8", 'A'},
            {"¿Qué tipo de archivo guarda código fuente C++?", ".exe", ".cpp", ".h", ".txt", 'B'},
            {"¿Qué dispositivo sirve para digitalizar documentos?", "Monitor", "Mouse", "Escáner", "Impresora", 'C'}}, 60};

    // Nivel 7
    niveles[6] = {
        7, "Experto", {{"¿Quién propuso la teoría de la relatividad?", "Newton", "Einstein", "Tesla", "Darwin", 'B'},
            {"¿Qué palabra se usa para definir estructuras en C++?", "class", "struct", "define", "data", 'B'},
            {"¿Qué operador se usa para comparación lógica OR?", "&&", "||", "|", "^", 'B'},
            {"¿Qué bucle se usa cuando no sabes cuántas veces repetir?", "for", "while", "do-while", "loop", 'B'},
            {"¿Qué es un compilador?", "Un editor", "Un error", "Un traductor de código", "Una librería", 'C'}}, 70};

    // Nivel 8
    niveles[7] = {
        8, "Maestro", {{"¿Qué país tiene más habitantes en el mundo?", "EE.UU.", "India", "China", "Brasil", 'B'},
            {"¿Qué operador se usa para negar en C++?", "!", "~", "not", "-", 'A'},
            {"¿Qué es una función en programación?", "Un número", "Un bucle", "Un bloque de código reutilizable", "Una variable", 'C'},
            {"¿Qué lenguaje es conocido por su simplicidad?", "Java", "Python", "C++", "Assembly", 'B'},
            {"¿Qué tecnología permite guardar archivos en la nube?", "WiFi", "Bluetooth", "Cloud", "USB", 'C'}}, 80};

    // Nivel 9
    niveles[8] = {
        9, "Genio", { {"¿Quién inventó el lenguaje C++?", "Bjarne Stroustrup", "Dennis Ritchie", "Linus Torvalds", "James Gosling", 'A'},
            {"¿Qué operador se usa para acceder a miembros por puntero?", ".", "->", "&", "*", 'B'},
            {"¿Qué es la recursividad?", "Un tipo de variable", "Una función que se llama a sí misma", "Un ciclo infinito", "Un error de sintaxis", 'B'},
            {"¿Qué unidad mide la frecuencia de un procesador?", "Watts", "Bytes", "Hertz", "Ohms", 'C'},
            {"¿Qué siglas representan inteligencia artificial?", "IA", "AI", "AR", "IE", 'B'}}, 90};

    // Nivel 10
    niveles[9] = {
        10, "Leyenda", { {"¿Cuál es la capital de Australia?", "Sydney", "Melbourne", "Canberra", "Perth", 'C'},
            {"¿Qué hace la función 'main' en C++?", "Nada", "Es la función principal", "Guarda variables", "Es una librería", 'B'},
            {"¿Qué palabra se usa para manejar errores en C++?", "catch", "throw", "try", "error", 'C'},
            {"¿Qué extensión se usa para archivos de cabecera?", ".cpp", ".exe", ".h", ".txt", 'C'},
            {"¿Qué significa RAM?", "Read After Memory", "Random Access Memory", "Real Algorithm Machine", "Remote Access Module", 'B'}}, 100};
}

// Función que recibe una pregunta (tipo Pregunta) y muestra su texto y las cuatro opciones posibles.
// No modifica la pregunta recibida, solo la muestra al usuario.
void mostrarPregunta(const Pregunta p) {
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

    int puntosTotales = 0; // Se inicializa un contador para llevar los puntos acumulados del jugador.
    

    cout << "Bienvenido al Juego de Preguntas por Niveles!\n";   //Mensaje de bienvenida.
    cout << "Responde correctamente para avanzar y ganar puntos.\n\n"; //se imprimen instrucciones basicas.
    
    //ciclo principal para recorrer cada nivel.
    for (int i = 0; i < NUM_NIVELES; ++i) {
        Nivel nivelActual = niveles[i]; 
        int puntosNivel = 0; //inicializar el contador de puntos obtenidos en cada nivel.
        
        //Se muestra en qué nivel estás y cuántos puntos vale cada respuesta.
        cout << "=== NIVEL " << nivelActual.numero << " (" << nivelActual.dificultad << ") ===\n";
        cout << "Puntos por respuesta correcta: " << nivelActual.puntosPorRespuesta << "\n\n";
        
        //Se inicializa un contador de respuestas correctas para el nivel actual.
        int respuestasCorrectas = 0;
        
        for (int j = 0; j < 5; ++j){  //Cada nivel tiene 5 preguntas, este ciclo las recorre una por una.
           
            //Se llama a la función mostrarPregunta para ver la pregunta actual.
            mostrarPregunta(nivelActual.preguntas[j]);
            char respuesta;
            cout << "Tu respuesta (A-D): "; //Se pide al usuario que escriba su respuesta (letra A-D).
            cin >> respuesta;
            respuesta = toupper(respuesta); //Se convierte la respuesta a mayúscula para evitar errores de mayúsculas/minúsculas.
            
        //Se realiza la validacion de la opcion de respuesta ingresada.
        if(respuesta == 'A' || respuesta == 'B' || respuesta == 'C' || respuesta == 'D'){
            //Se compara con la respuesta correcta.
            if (respuesta == nivelActual.preguntas[j].respuestaCorrecta) {
                cout << "Correcto! +" << nivelActual.puntosPorRespuesta << " puntos\n";
                puntosNivel += nivelActual.puntosPorRespuesta;
                respuestasCorrectas++;
            } else {
                cout << "Incorrecto. La respuesta correcta era: " 
                     << nivelActual.preguntas[j].respuestaCorrecta << "\n";
            }
        }else{
            cout << "Ingrese una respuesta válida (A, B, C o D).\n";
            --j; // Volver a intentar esta misma pregunta
        }
            
        }
        
         // Se suma al total solo si completó el nivel
        puntosTotales += puntosNivel;

        //Se muestra resumen del nivel: aciertos y puntos acumulados.
    cout << "\nHas completado el nivel " << nivelActual.numero << "!\n";
    cout << "Respuestas correctas: " << respuestasCorrectas << "/5\n";
    cout << "Puntos obtenidos en este nivel: " << puntosNivel << "\n";
    cout << "Puntos acumulados: " << puntosTotales << "\n\n";
        
        if (i < NUM_NIVELES - 1) {
            char continuar;
            cout << "Continuar al siguiente nivel? (S/N): "; //Si no es el último nivel, se le pregunta al usuario si quiere seguir.
            cin >> continuar;
            
            if (toupper(continuar) != 'S') { //Si dice que no (N o cualquier letra distinta de S), se termina el juego.
                cout << "\nHas decidido salir del juego.\n";
                cout << "Puntuación total acumulada: " << puntosTotales << " puntos.\n";
                cout << "¡Gracias por jugar! :D\n";
                return;
            }
        }
    }
    
    cout << "Felicidades! Has completado todos los niveles.\n";
    cout << "Puntuacion final: " << puntosTotales << " puntos.\n";
    }

