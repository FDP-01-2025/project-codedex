# C++ Project - [Quizz]

## Project Description

Brief description of the game:  
This project is a general knowledge quiz game developed in C++. The game is divided into 10 levels of progressive difficulty. Each level presents more questions than the previous one, starting with easy questions at level 1 and gradually increasing up to level 10. The questions include 4 options (a, b, c, d) and cover various topics such as science, history, geography, art, and general knowledge.

The objective of the game is to correctly answer all the questions in each level to advance to the next. Ideal for reinforcing knowledge and having fun at the same time.

## General Gameplay Idea

The game consists of overcoming a series of levels with increasing difficulty by correctly answering general knowledge questions. Each level contains a set of questions with 4 possible options (a, b, c, d), and the player must choose the correct option to progress.

## Game Mechanics

1. **Game Start:**

- The game begins at level 1, with 2 questions.
- Questions are displayed one by one along with their options.

2. **Answer Selection:**

- The player chooses their answer by typing the corresponding letter (a, b, c, or d).
- The game checks if the answer is correct.

3. **Level Progression:**

- If the player answers all questions in the current level correctly, they advance to the next level.
- With each level, the number and difficulty of questions increase (up to 10 questions at level 10).

4. **End of the Game:**

- The game ends if the player successfully completes all levels.
- It can also end if the player fails, depending on how you implement the rules (for example, if only one attempt per question is allowed or not).

## Application of Covered Topics

- Struct: used to store text variables and answers for the questions in each level  
- Level Struct: key for defining and setting the maximum number of questions each level can contain and the points to be earned  
- Functions: used to store and display all quiz questions and to run the game  
- Console input and output "cout and cin"  
- Conditional structures  
- Use of for and while loops  
- Variables and data types (int, char, string)

## Technical Development Considerations

- Main development language: C++  
- Compiler version: MSVC  
- Project architecture:  
  - **main.cpp** runs the game flow  
  - **funciones.h** contains the code with the structures for questions and levels  
  - **niveles.cpp** initializes the levels  

## Team

- **Team name:** Codedex ++

### Team Members

1. **Full name:** Ortiz Reyes, Guillermo Andrés  
   **ID:** 00131725

2. **Full name:** Ramírez Chávez, Daniela Alexandra  
   **ID:** 00047025

## Execution Instructions

1. Clone this repository to your local machine:  
   ```bash
   git clone [https://github.com/FDP-01-2025/project-codedex.git]
