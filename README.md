[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/mi1WNrHU)
# Proyecto de C++ - [Quizz]

## Descripción del Proyecto

Breve descripción del juego:
Este proyecto es un juego de preguntas de cultura general desarrollado en C++. El juego está dividido en 10 niveles de dificultad progresiva. Cada nivel presenta más preguntas que el anterior, comenzando con preguntas faciles en el nivel 1 y aumentando gradualmente hasta el nivel 10. Las preguntas incluyen 4 opciones (a, b, c, d) y cubren temas variados como ciencia, historia, geografía, arte y conocimiento general.

El objetivo del juego es responder correctamente todas las preguntas de cada nivel para avanzar al siguiente. Ideal para reforzar el conocimiento y divertirse al mismo tiempo.

## Idea general de la jugabilidad 

El juego consiste en superar una serie de niveles de dificultad creciente respondiendo correctamente preguntas de cultura general. Cada nivel contiene un conjunto de preguntas con 4 opciones posibles (a, b, c, d), y el jugador debe elegir la opción correcta para avanzar.


## Mecanica de juego

1. **Inicio del juego:** 

- El juego comienza en el nivel 1, con 2 preguntas.
- Las preguntas se muestran una por una junto con sus opciones.

2. **Selección de respuesta:**

- El jugador elige su respuesta escribiendo la letra correspondiente (a, b, c o d).
- El juego verifica si la respuesta es correcta.

3. **Progresión de niveles:**

- Si el jugador responde correctamente todas las preguntas del nivel actual, avanza al siguiente.
- Con cada nivel, el número de preguntas aumenta en dificultad y cantidad (hasta llegar a 10 preguntas en el nivel 10).

4. **Final del juego:**

- El juego termina si el jugador completa exitosamente todos los niveles.
- También puede terminar si el jugador falla, dependiendo de cómo hayas implementado las reglas (por ejemplo, si se permite un solo intento por pregunta o no).


## Aplicación de temas vistos 

- Struct: se utilizo con la finalidad de almacenar variables de texto y respuesta para las preguntas de cada nivel 
- Struct Nivel: su uso fue clave al realizar y definir la cantidad maxima de preguntas que cada nivel puede contener y los puntos a ganar 
- Funciones: se utilizaron para almacenar y mostrar todas las preguntas del Quizz y ejecutar el juego
- Entrada y salida de consolo cout y cin
- Estructuras condicionales 

## Consideraciones técnicas del desarrollo

- Lenguaje de desarrollo principal: C++ 
- Version de compilador: MSVC 
- Arquitectura del proyecto: 
         - **main.cpp** es quien ejecuta el flujo del juego 
         - **funciones.h** contiene el codigo con las estructuras de las preguntas y niveles 
         - **niveles.cpp** inicializa los niveles  


## Equipo

- **Nombre del equipo:** Codedex ++

### Integrantes del equipo

1. **Nombre completo:** Ortiz Reyes, Guillermo Andrés	
   **Carnet:** 00131725

2. **Nombre completo:** Ramírez Chávez, Daniela Alexandra
   **Carnet:** 00047025

## Instrucciones de Ejecución

1. Clona este repositorio en tu máquina local:
   ```bash
   git clone [URL del repositorio]
