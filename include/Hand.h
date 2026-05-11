#include<vector>
#include "Card.h"

class Hand{
    private: std::vector<Card> cards;
    public: void AddCard();
    public: void CalculateScore();
};

/*
Clase: Hand

Responsabilidades:
- Almacena un vector de cartas
- Agrega cartas a la mano
- Calcula el marcador 

Colaboraciones:
- Interactua con la clase Card para agregar carta a la mano

*/