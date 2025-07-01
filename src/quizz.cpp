#include "funciones.h"

//Función que inicializa las preguntas y opciones para cada nivel
void initializateLevel(Level levels[])
{
    // Level 1
    levels[0] = {
        1, "Easy", {
            {"\nWhat is the closest planet to the Sun?", "Venus", "Mars", "Mercury", "Jupiter", 'C'}, 
            {"\nWhich data type is used for integers in C++?", "int", "float", "char", "bool", 'A'}, 
            {"\nIn what year did man land on the Moon?", "1965", "1969", "1972", "1959", 'B'},
            {"\nWhat is the most spoken language in the world?", "Spanish", "English", "Mandarin Chinese", "Hindi", 'C'},
            {"\nWhich scientist developed the theory of evolution?", "Einstein", "Darwin", "Newton", "Pasteur", 'B'}}, 10};
    
    // Level 2  
    levels[1] = {
        2, "Basic", {
        {"\nHow many continents are there in the world?", "5", "6", "7", "8", 'C'}, 
        {"\nWhich structure is used for multiple decisions in C++?", "if", "while", "for", "switch", 'D'}, 
        {"\nWhat is the result of 5 % 2 in C++?", "2.5", "0", "1", "2", 'C'}, 
        {"\nWhich keyword defines a class in C++?", "class", "struct", "define", "module", 'A'},
        {"\nWhich data structure works like a queue (FIFO)?", "Stack", "Queue", "Array", "Tree", 'B'}}, 20};

    // Level 3
    levels[2] = {
        3, "Intermediate", {
        {"\nWho wrote 'One Hundred Years of Solitude'?", "Pablo Neruda", "Gabriel García Márquez", "Julio Cortázar", "Mario Vargas Llosa", 'B'}, 
        {"Which data structure groups multiple data of different types?", "vector", "array", "struct", "int", 'C'}, 
        {"Which loop executes at least once?", "for", "do-while", "while", "switch", 'B'}, 
        {"Which operator is used to compare equality in C++?", "=", "==", "!=", "<>", 'B'},
        {"Which function gets the length of a string in C++?", "size()", "length()", "count()", "len()", 'B'}}, 30};

    // Level 4
    levels[3] = {
        4, "Advanced", {
            {"What is the capital of Canada?", "Toronto", "Vancouver", "Ottawa", "Montreal", 'C'},
            {"Which loop executes at least once?", "while", "do-while", "for", "foreach", 'B'},
            {"What component is the 'brain' of the computer?", "RAM", "Hard Drive", "CPU", "GPU", 'C'},
            {"What does 'IDE' stand for?", "Integrated Development Environment", "Image Editor", "Intel Debugger", "Executable Data Interface", 'A'},
            {"Which symbol is used to comment a line in C++?", "//", "/*", "#", "<!--", 'A'}}, 40};

    // Level 5
    levels[4] = {
        5, "Challenging", {
            {"Who painted the Mona Lisa?", "Van Gogh", "Picasso", "Da Vinci", "Rembrandt", 'C'},
            {"What is a variable in programming?", "A constant", "A fixed value", "A memory space to store data", "A logical operator", 'C'},
            {"Which logical operator means 'and'?", "||", "!", "&&", "&", 'C'},
            {"Which command is used to print to screen in C++?", "cin", "cout", "printf", "print", 'B'},
            {"What is a 'bug' in programming?", "An improvement", "An error", "A secret code", "A compiler", 'B'}}, 50};

    // Level 6
    levels[5] = {
        6, "Hard", {
            {"What is the largest ocean in the world?", "Atlantic", "Indian", "Arctic", "Pacific", 'D'},
            {"Which keyword is used for constants in C++?", "static", "final", "const", "immutable", 'C'},
            {"What is the result of 2 * 3 + 4?", "10", "14", "12", "8", 'A'},
            {"Which file extension is for C++ source code?", ".exe", ".cpp", ".h", ".txt", 'B'},
            {"Which device is used to scan documents?", "Monitor", "Mouse", "Scanner", "Printer", 'C'}}, 60};

    // Level 7
    levels[6] = {
        7, "Expert", {
            {"Who proposed the theory of relativity?", "Newton", "Einstein", "Tesla", "Darwin", 'B'},
            {"Which word defines structures in C++?", "class", "struct", "define", "data", 'B'},
            {"Which operator is used for logical OR?", "&&", "||", "|", "^", 'B'},
            {"Which loop is used when you don't know how many times to repeat?", "for", "while", "do-while", "loop", 'B'},
            {"What is a compiler?", "An editor", "An error", "A code translator", "A library", 'C'}}, 70};

    // Level 8
    levels[7] = {
        8, "Master", {
            {"Which country has the most inhabitants in the world?", "USA", "India", "China", "Brazil", 'B'},
            {"Which operator is used to negate in C++?", "!", "~", "not", "-", 'A'},
            {"What is a function in programming?", "A number", "A loop", "A reusable block of code", "A variable", 'C'},
            {"Which language is known for its simplicity?", "Java", "Python", "C++", "Assembly", 'B'},
            {"Which technology allows cloud storage?", "WiFi", "Bluetooth", "Cloud", "USB", 'C'}}, 80};

    // Level 9
    levels[8] = {
        9, "Genius", {
            {"Who invented the C++ language?", "Bjarne Stroustrup", "Dennis Ritchie", "Linus Torvalds", "James Gosling", 'A'},
            {"Which operator is used to access members by pointer?", ".", "->", "&", "*", 'B'},
            {"What is recursion?", "A type of variable", "A function that calls itself", "An infinite loop", "A syntax error", 'B'},
            {"Which unit measures processor frequency?", "Watts", "Bytes", "Hertz", "Ohms", 'C'},
            {"What does AI stand for?", "IA", "AI", "AR", "IE", 'B'}}, 90};

    // Level 10
    levels[9] = {
        10, "Legend", {
            {"What is the capital of Australia?", "Sydney", "Melbourne", "Canberra", "Perth", 'C'},
            {"What does the 'main' function do in C++?", "Nothing", "It is the main function", "Stores variables", "It is a library", 'B'},
            {"Which word is used for error handling in C++?", "catch", "throw", "try", "error", 'C'},
            {"Which extension is used for header files?", ".cpp", ".exe", ".h", ".txt", 'C'},
            {"What does RAM stand for?", "Read After Memory", "Random Access Memory", "Real Algorithm Machine", "Remote Access Module", 'B'}}, 100};
}

// Función que recibe una pregunta (tipo Pregunta) y muestra su texto y las cuatro opciones posibles.
// No modifica la pregunta recibida, solo la muestra al usuario.
void showQuestion(const Question p) {
    cout << "\n" << p.text << "\n";
    cout << "A) " << p.optionA << "\n";
    cout << "B) " << p.optionB << "\n";
    cout << "C) " << p.optionC << "\n";
    cout << "D) " << p.optionD << "\n";
}

 //Lógica de ejecución del juego
void executeGame() {
    const int NUM_LEVELS = 10;
    Level levels[NUM_LEVELS]; //arreglo de 10 elementos de tipo nivel
    initializateLevel(levels); //Se llama a inicializarNiveles(niveles) para llenar cada nivel con sus preguntas, dificultad y puntaje.

    int finalPoints = 0; // Se inicializa un contador para llevar los puntos acumulados del jugador.

    cout << "Welcome to the Level-Based Quiz Game!\n"; //Mensaje de bienvenida.
    cout << "Answer correctly to advance and earn points.\n\n"; //se imprimen instrucciones basicas.

    //ciclo principal para recorrer cada nivel.
    for (int i = 0; i < NUM_LEVELS; ++i) {
        Level currentLevel = levels[i];
        int pointsLevel = 0; //inicializar el contador de puntos obtenidos en cada nivel.

        cout << "=== LEVEL " << currentLevel.numbers << " (" << currentLevel.difficulty << ") ===\n";
        cout << "Points per correct answer: " << currentLevel.pointsForAnswer << "\n\n";

        //Se inicializa un contador de respuestas correctas para el nivel actual.
        int rightAnswer = 0;

        for (int j = 0; j < 5; ++j) {   //Cada nivel tiene 5 preguntas. Este ciclo las recorre una por una.

             //Se llama a la función mostrarPregunta para ver la pregunta actual.
            showQuestion(currentLevel.questions[j]);
            char answer;
            cout << "Your answer (A-D or X to exit): "; //Se pide al usuario que escriba su respuesta (letra A-D).
            cin >> answer;
            answer = toupper(answer); //Se convierte la respuesta a mayuscula.

            if (answer == 'X') {
            cout << "\nYou have chosen to exit the game. Thanks for playing!\n";
            cout << "Final score: " << finalPoints << " points.\n";
            return; // Termina el juego inmediatamente.
}
            //Realizar validación de opcion de respuesta.   
            if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
                if (answer == currentLevel.questions[j].correctAnswer) {
                    cout << "Correct! You're n fire +" << currentLevel.pointsForAnswer << " points\n";
                    pointsLevel += currentLevel.pointsForAnswer;
                    rightAnswer++;
                } else {
                    cout << "Incorrect. The correct answer was: "
                         << currentLevel.questions[j].correctAnswer << "\n";
                }
            } else {
                cout << "Please enter a valid answer (A, B, C or D).\n";
                --j; // Volver a intentar esta misma pregunta
            }
        }

        // Se suma al total solo si completó el nivel
        finalPoints += pointsLevel;

         //Se muestra resumen del nivel: aciertos y puntos acumulados.
        cout << "\n You have completed level " << currentLevel.numbers << "!\n";
        cout << "Correct answers: " << rightAnswer << "/5\n";
        cout << "Points earned in this level: " << pointsLevel << "\n";
        cout << "Total accumulated points: " << finalPoints << "\n\n";

        if (i < NUM_LEVELS - 1) {
            char next;
            cout << "Continue to the next level? (Y/N): "; //Si no es el último nivel, se le pregunta al usuario si quiere seguir.
            cin >> next;

            if (toupper(next) != 'Y') {
                cout << "\nYou decided to quit the game.\n"; //Si dice que no (N o cualquier letra distinta de S), se termina el juego.
                cout << "Total accumulated score: " << finalPoints << " points.\n";
                cout << "Thanks for playing! :D\n";
                return;
            }
        }
    }

    // Si llega hasta aquí, completó todos los niveles
    cout << "Congratulations! You've completed all levels.\n";
    cout << "Final score: " << finalPoints << " points.\n";
}
