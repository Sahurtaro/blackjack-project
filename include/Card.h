#pragma once
#include <string>

class Card {
private:
    int valor;
    std::string palo;

public:
    Card();
    Card(int v, std::string p);
    int obtenerValor() const;
    std::string obtenerPalo() const;
    void mostrarInfo() const;
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
