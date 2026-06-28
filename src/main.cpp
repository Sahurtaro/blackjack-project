#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "Crupier.h"
#include "BlackJack.h"

int main() {
    // Probar Carta
    Card c(10, "Corazones");
    c.mostrarInfo();
    std::cout << "Valor: " << c.obtenerValor() << std::endl;
    std::cout << "Palo: " << c.obtenerPalo() << std::endl;

    // Probar Mazo
    Deck mazo;
    mazo.barajar();
    mazo.mostrar();
    std::cout << "Tamanio: " << mazo.obtenerTamaño() << std::endl;

    // Probar Mano
    Hand mano;
    mano.agregarCarta(mazo.repartirCarta());
    mano.agregarCarta(mazo.repartirCarta());
    mano.mostrar();
    std::cout << "Puntaje: " << mano.calcularPuntaje() << std::endl;

    // Probar Player
    Player jugador("Juan");
    jugador.pedirCarta(mazo);
    jugador.plantarse();

    // Probar Crupier
    Crupier crupier;
    crupier.iniciarJuego();
    crupier.pedirCarta(mazo);
    mazo.mostrar();

    // Probar BlackJack
    BlackJack juego;
    juego.iniciarJuego();
    juego.turnoJugador();
    juego.turnoCrupier();
    juego.determinarGanador();

    return 0;
}