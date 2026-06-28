#include "BlackJack.h"
#include <iostream>

void BlackJack::iniciarJuego() {
    std::cout << "=== BLACKJACK ===" << std::endl;
    mazo.barajar();
    crupier.iniciarJuego();
}
void BlackJack::turnoJugador() { std::cout << "Turno del jugador." << std::endl; }
void BlackJack::turnoCrupier() { std::cout << "Turno del crupier." << std::endl; }
void BlackJack::determinarGanador() { std::cout << "Determinando ganador..." << std::endl; }