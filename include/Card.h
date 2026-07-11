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
Clase CRC: Card

Responsabilidades:
- Almacenar el valor numérico de la carta (1-13)
- Almacenar el palo de la carta (Corazones, Picas, Diamantes, Tréboles)
- Devolver el valor de la carta
- Obtener el palo de la carta
- Mostrar la información de la carta en consola

Colaboraciones:
- Interactúa con la clase Hand para calcular el puntaje y mostrar la mano
- Interactúa con la clase Deck para ser almacenada, barajada y repartida

Atributos:
- int valor — valor numérico de la carta
- string palo — palo de la carta
*/
