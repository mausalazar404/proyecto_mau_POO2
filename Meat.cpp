#include "Meat.h"

// Constructores
Meat::Meat() : Food() {
    proteinContent = 0;
}

Meat::Meat(string name, int nutritionValue, int happinessValue, int proteinContent)
    : Food(name, nutritionValue, happinessValue) {
    this->proteinContent = proteinContent;
}

// Getter
int Meat::getProteinContent() {
    return proteinContent;
}

// Setter
void Meat::setProteinContent(int proteinContent) {
    this->proteinContent = proteinContent;
}
