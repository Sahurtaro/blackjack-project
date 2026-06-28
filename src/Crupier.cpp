#include "Crupier.h"
#include <iostream>

void Crupier::pedirCarta(Deck& mazo) { 
    mano.agregarCarta(mazo.repartirCarta());
    std::cout << "Crupier pide carta." << std::endl;
}
void Crupier::iniciarJuego() { std::cout << "Crupier inicia el juego." << std::endl; }