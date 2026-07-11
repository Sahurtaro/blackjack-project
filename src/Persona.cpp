#include "Persona.h"

void Persona::pedirCarta(Deck& mazo) {
    mano.agregarCarta(mazo.repartirCarta());
}
