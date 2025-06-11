#include "FireDragon.h"

//constructores
FireDragon::FireDragon() : Dragon(){
    firePower = 20;
} 

FireDragon::FireDragon(string name,string type, int level, int health, int defense,
    int hunger, int happiness, int firePower)
    : Dragon(name, "Fire", level, health, defense, hunger, 
        happiness), firePower(firePower) {}


//Getters
int FireDragon::getFirePower(){ 
    return firePower; 
}

//setters
void FireDragon::setFirePower(int firePower){ 
    this->firePower = firePower; 
}

//Métodos
void FireDragon::breathFire() {
    happiness += 5;
    if (happiness > 100) happiness = 100;
}

void FireDragon::battle(Dragon* opponent) {
    int attackPower = level * 10 + happiness + firePower;

    if (attackPower > opponent->getDefense()) {
        level++;
        happiness += 10;
        opponent->setHealth(opponent->getHealth() - 25);
    } else {
        health -= 10;
        happiness -= 5;
    }

    if (health < 0) health = 0;
    if (happiness < 0) happiness = 0;
}