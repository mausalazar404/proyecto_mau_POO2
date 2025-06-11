#include "Food.h"

Food::Food() {
    name = "";
    nutritionVal = 0;
    happinessVal = 0;
}

Food::Food(string name, int nutritionVal, int happinessVal) {
    this->name = name;
    this->nutritionVal = nutritionVal;
    this->happinessVal = happinessVal;
}

// Getters
string Food::getName() {
    return name;
}

int Food::getNutritionalVal() {
    return nutritionVal;
}

int Food::getHappinessVal() {
    return happinessVal;
}

// Setters
void Food::setName(string name) {
    this->name = name;
}

void Food::setNutritionalVal(int nutritionVal) {
    this->nutritionVal = nutritionVal;
}

void Food::setHappinessval(int happinessVal) {
    this->happinessVal = happinessVal;
}
