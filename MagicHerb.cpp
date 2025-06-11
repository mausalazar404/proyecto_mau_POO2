#include "MagicHerb.h"

// Constructores
MagicHerb::MagicHerb() : Food() {
    effect = "";
}

MagicHerb::MagicHerb(string name, int nutritionValue, int happinessValue, string effect)
    : Food(name, nutritionValue, happinessValue) {
    this->effect = effect;
}

// Getter
string MagicHerb::getEffect() {
    return effect;
}

// Setter
void MagicHerb::setEffect(string effect) {
    this->effect = effect;
}
