#include "Battle.h"

// Constructor
Battle::Battle(Dragon* d1, Dragon* d2) {
    dragon1 = d1;
    dragon2 = d2;
}

// Método 
Dragon* Battle::startBattle() {
    int score1 = dragon1->getLevel() + dragon1->getHealth() + dragon1->getDefense();
    int score2 = dragon2->getLevel() + dragon2->getHealth() + dragon2->getDefense();

    if (score1 >= score2) {
        return dragon1;
    } else {
        return dragon2;
    }
}
