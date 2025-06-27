#include "funciones.h"

// Funcion que muestra las questions y posibles respuestas de cada nivel, al responder de forma correcta se suman puntos y avanza de nivel

void initializateLevel(Level levels[])
{
    // Level 1
    levels[0] = {
        1, "Facil", {
            {"\n¿Cuál es el planeta más cercano al Sol?", "Venus", "Marte", "Mercurio", "Júpiter", 'C'}, 
            {"\n¿Qué tipo de dato se usa para números enteros en C++?", "int", "float", "char", "bool", 'A'}, 
            {"\n¿En qué año llegó el hombre a la Luna?", "1965", "1969", "1972", "1959", 'B'},
            {"\n¿Cuál es el idioma más hablado en el mundo?", "Español", "Inglés", "Chino mandarín", "Hindi", 'C'},
            {"\n¿Qué científico desarrolló la teoría de la evolución?", "Einstein", "Darwin", "Newton", "Pasteur", 'B'}}, 10};
    
    // Level 2  
    levels[1] = {
        2, "Basico", {
        {"\n¿Cuántos continentes hay en el mundo?", "5", "6", "7", "8", 'C'}, 
        {"\n¿Qué estructura se usa para decisiones múltiples en C++?", "if", "while", "for", "switch", 'D'}, 
        {"\n¿Cuál es el resultado de 5 % 2 en C++?", "2.5", "0", "1", "2", 'C'}, 
        {"\n¿Qué palabra clave define una clase en C++?", "class", "struct", "define", "module", 'A'},
        {"\n¿Qué estructura de datos funciona como una fila (FIFO)?", "Stack", "Queue", "Array", "Tree", 'B'}}, 20};

    // Level 3
    levels[2] = {
        3, "Intermedio", {
        {"\n¿Quién escribió 'Cien años de soledad'?", "Pablo Neruda", "Gabriel García Márquez", "Julio Cortázar", "Mario Vargas Llosa", 'B'}, 
        {"¿Cuál es la estructura de datos para agrupar múltiples datos de diferente tipo?", "vector", "array", "struct", "int", 'C'}, 
        {"¿Qué bucle se ejecuta al menos una vez?", "for", "do-while", "while", "switch", 'B'}, 
        {"¿Qué operador se usa para comparar igualdad en C++?", "=", "==", "!=", "<>", 'B'},
        {"¿Qué función se usa para obtener la longitud de un string en C++?", "size()", "length()", "count()", "len()", 'B'}}, 30};

    // Level 4
    levels[3] = {
        4, "Avanzado", { {"¿Cuál es la capital de Canadá?", "Toronto", "Vancouver", "Ottawa", "Montreal", 'C'},
            {"¿Qué tipo de bucle se ejecuta al menos una vez?", "while", "do-while", "for", "foreach", 'B'},
            {"¿Qué componente es el 'cerebro' de la computadora?", "RAM", "Disco Duro", "CPU", "GPU", 'C'},
            {"¿Qué significa 'IDE'?", "Entorno de Desarrollo Integrado", "Editor de Imagen", "Intel Debugger", "Interfaz de Datos Ejecutables", 'A'},
            {"¿Cuál es el símbolo para comentar una línea en C++?", "//", "/*", "#", "<!--", 'A'}}, 40};

    // Level 5
    levels[4] = {
        5, "Desafiante", {{"¿Quién pintó la Mona Lisa?", "Van Gogh", "Picasso", "Da Vinci", "Rembrandt", 'C'},
            {"¿Qué es una variable en programación?", "Una constante", "Un valor fijo", "Un espacio de memoria para almacenar datos", "Un operador lógico", 'C'},
            {"¿Qué operador lógico significa 'y'?", "||", "!", "&&", "&""", 'C'},
            {"¿Qué comando en C++ se usa para imprimir en pantalla?", "cin", "cout", "printf", "print", 'B'},
            {"¿Qué es un 'bug' en programación?", "Una mejora", "Un error", "Un código secreto", "Un compilador", 'B'}}, 50};

    // Level 6
    levels[5] = {
        6, "Dificil", {  {"¿Cuál es el océano más grande del mundo?", "Atlántico", "Índico", "Ártico", "Pacífico", 'D'},
            {"¿Qué palabra clave se usa para constantes en C++?", "static", "final", "const", "immutable", 'C'},
            {"¿Cuál es el resultado de 2 * 3 + 4?", "10", "14", "12", "8", 'A'},
            {"¿Qué tipo de archivo guarda código fuente C++?", ".exe", ".cpp", ".h", ".txt", 'B'},
            {"¿Qué dispositivo sirve para digitalizar documentos?", "Monitor", "Mouse", "Escáner", "Impresora", 'C'}}, 60};

    // Level 7
    levels[6] = {
        7, "Experto", {{"¿Quién propuso la teoría de la relatividad?", "Newton", "Einstein", "Tesla", "Darwin", 'B'},
            {"¿Qué palabra se usa para definir estructuras en C++?", "class", "struct", "define", "data", 'B'},
            {"¿Qué operador se usa para comparación lógica OR?", "&&", "||", "|", "^", 'B'},
            {"¿Qué bucle se usa cuando no sabes cuántas veces repetir?", "for", "while", "do-while", "loop", 'B'},
            {"¿Qué es un compilador?", "Un editor", "Un error", "Un traductor de código", "Una librería", 'C'}}, 70};

    // Level 8
    levels[7] = {
        8, "Maestro", {{"¿Qué país tiene más habitantes en el mundo?", "EE.UU.", "India", "China", "Brasil", 'B'},
            {"¿Qué operador se usa para negar en C++?", "!", "~", "not", "-", 'A'},
            {"¿Qué es una función en programación?", "Un número", "Un bucle", "Un bloque de código reutilizable", "Una variable", 'C'},
            {"¿Qué lenguaje es conocido por su simplicidad?", "Java", "Python", "C++", "Assembly", 'B'},
            {"¿Qué tecnología permite guardar archivos en la nube?", "WiFi", "Bluetooth", "Cloud", "USB", 'C'}}, 80};

    // Level 9
    levels[8] = {
        9, "Genio", { {"¿Quién inventó el lenguaje C++?", "Bjarne Stroustrup", "Dennis Ritchie", "Linus Torvalds", "James Gosling", 'A'},
            {"¿Qué operador se usa para acceder a miembros por puntero?", ".", "->", "&", "*", 'B'},
            {"¿Qué es la recursividad?", "Un tipo de variable", "Una función que se llama a sí misma", "Un ciclo infinito", "Un error de sintaxis", 'B'},
            {"¿Qué unidad mide la frecuencia de un procesador?", "Watts", "Bytes", "Hertz", "Ohms", 'C'},
            {"¿Qué siglas representan inteligencia artificial?", "IA", "AI", "AR", "IE", 'B'}}, 90};

    // Level 10
    levels[9] = {
        10, "Leyenda", { {"¿Cuál es la capital de Australia?", "Sydney", "Melbourne", "Canberra", "Perth", 'C'},
            {"¿Qué hace la función 'main' en C++?", "Nada", "Es la función principal", "Guarda variables", "Es una librería", 'B'},
            {"¿Qué palabra se usa para manejar errores en C++?", "catch", "throw", "try", "error", 'C'},
            {"¿Qué extensión se usa para archivos de cabecera?", ".cpp", ".exe", ".h", ".txt", 'C'},
            {"¿Qué significa RAM?", "Read After Memory", "Random Access Memory", "Real Algorithm Machine", "Remote Access Module", 'B'}}, 100};
}

// Función que recibe una pregunta (tipo Question) y muestra su texto y las cuatro opciones posibles.
// No modifica la pregunta recibida, solo la muestra al usuario.
void showQuestion(const Question p) {
    cout << "\n" << p.text << "\n";
    cout << "A) " << p.optionA << "\n";
    cout << "B) " << p.optionB << "\n";
    cout << "C) " << p.optionC << "\n";
    cout << "D) " << p.optionD << "\n";
    }

    void executeGame() {//falta desarrollar las frases y for de levels de juego
    const int NUM_LEVELS = 10; //definicion de constante
    Level levels[NUM_LEVELS]; //arreglo de 10 elementos de tipo nivel
    initializateLevel(levels); //Se llama a initializateLevel(levels) para llenar cada nivel con sus questions, difficulty y puntaje.

    int finalPoints = 0; // Se inicializa un contador para llevar los puntos acumulados del jugador.
    

    cout << "Bienvenido al Juego de Preguntas por Niveles!\n";   //Mensaje de bienvenida.
    cout << "Responde correctamente para avanzar y ganar puntos.\n\n"; //se imprimen instrucciones basicas.
    
    //ciclo principal para recorrer cada nivel.
    for (int i = 0; i < NUM_LEVELS; ++i) {
        Level currentLevel = levels[i]; 
        int pointsLevel = 0; //inicializar el contador de puntos obtenidos en cada nivel.
        
        //Se muestra en qué nivel estás y cuántos puntos vale cada answer.
        cout << "=== NIVEL " << currentLevel.numbers << " (" << currentLevel.difficulty << ") ===\n";
        cout << "Puntos por answer correcta: " << currentLevel.pointsForAnswer << "\n\n";
        
        //Se inicializa un contador de respuestas correctas para el nivel actual.
        int rightAnswer = 0;
        
        for (int j = 0; j < 5; ++j){  //Cada nivel tiene 5 questions, este ciclo las recorre una por una.
           
            //Se llama a la función showQuestion para ver la pregunta actual.
            showQuestion(currentLevel.questions[j]);
            char answer;
            cout << "Tu respuesta (A-D): "; //Se pide al usuario que escriba su answer (letra A-D).
            cin >> answer;
            answer = toupper(answer); //Se convierte la answer a mayúscula para evitar errores de mayúsculas/minúsculas.
            
        //Se realiza la validacion de la opcion de answer ingresada.
        if(answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D'){
            //Se compara con la answer correcta.
            if (answer == currentLevel.questions[j].correctAnswer) {
                cout << "Correcto! +" << currentLevel.pointsForAnswer << " puntos\n";
                pointsLevel += currentLevel.pointsForAnswer;
                rightAnswer++;
            } else {
                cout << "Incorrecto. La respuesta correcta era: " 
                     << currentLevel.questions[j].correctAnswer << "\n";
            }
        }else{
            cout << "Ingrese una respuesta válida (A, B, C o D).\n";
            --j; // Volver a intentar esta misma pregunta
        }
            
        }
        
         // Se suma al total solo si completó el nivel
        finalPoints += pointsLevel;

        //Se muestra resumen del nivel: aciertos y puntos acumulados.
    cout << "\nHas completado el nivel " << currentLevel.numbers << "!\n";
    cout << "Respuestas correctas: " << rightAnswer << "/5\n";
    cout << "Puntos obtenidos en este nivel: " << pointsLevel << "\n";
    cout << "Puntos acumulados: " << finalPoints << "\n\n";
        
        if (i < NUM_LEVELS - 1) {
            char next;
            cout << "Continuar al siguiente nivel? (S/N): "; //Si no es el último nivel, se le pregunta al usuario si quiere seguir.
            cin >> next;
            
            if (toupper(next) != 'S') { //Si dice que no (N o cualquier letra distinta de S), se termina el juego.
                cout << "\nHas decidido salir del juego.\n";
                cout << "Puntuación total acumulada: " << finalPoints << " puntos.\n";
                cout << "¡Gracias por jugar! :D\n";
                return;
            }
        }
    }
    
    cout << "Felicidades! Has completado todos los levels.\n";
    cout << "Puntuacion final: " << finalPoints << " puntos.\n";
    }

