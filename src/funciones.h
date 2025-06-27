#include <iostream>

using namespace std;

struct Question {
    string text;
    string optionA;
    string optionB;
    string optionC;
    string optionD;
    char correctAnswer; // 'A', 'B', 'C' or 'D'
};

//Struct con los datos que contendra cada nivel 
struct Level {
    int numbers;
    string difficulty;
    Question questions[5];
    int pointsForAnswer;
};

void initializateLevel(Level levels[]);
void showQuestion(const Question q);
void executeGame();

