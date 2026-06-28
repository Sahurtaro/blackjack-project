#pragma once
#include <string>

class Card{
    public: Card();
    public: Card(int v, std::string p);
    private: int valor;
    private: std::string palo;
    public: int obtenerValor();
    public: std::string obtenerPalo();
    public: void mostrarInfo();
};

/*
Clase: Card

Responsabilidades:
- Almacenar el valor de la carta
- Almacenar la pinta o el palo de la carta
- Devuelve el valor de la carta
- Obtener el palo de la carta
- Mostrar la información de la carta

Colaboraciones:
- Interactúa con la clase Hand para que esta pueda conocer el valor y palo de la carta al mostrarla o calcular el puntaje
- Interactúa con la clase Deck para que esta pueda barajar y repartir las cartas

*/

