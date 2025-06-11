#include "WaterDragon.h"

//constructores
WaterDragon::WaterDragon() : Dragon(){
     waterAffinity = 15;
}
WaterDragon::WaterDragon(string name,string type, int level, int health, int defense, 
    int hunger, int happiness, int waterAffinity)
    : Dragon(name, "Water", level, health, 
        defense, hunger, happiness), waterAffinity(waterAffinity) {}


//Getters
int WaterDragon::getWaterAffinity(){ 
    return waterAffinity; 
}

//setters
void WaterDragon::setWaterAffinity(int WaterAffinity){ 
    this->waterAffinity = waterAffinity; 
}

//Métodos
void WaterDragon::splash() {
    hunger -= 5;
    if (hunger < 0) hunger = 0;
}

void WaterDragon::battle(Dragon* opponent) {
    int attackPower = level * 10 + happiness + waterAffinity;

    if (attackPower > opponent->getDefense()) {
        level++;
        happiness += 7;
        opponent->setHealth(opponent->getHealth() - 18);
    } else {
        health -= 12;
        happiness -= 4;
    }

    if (health < 0) health = 0;
    if (happiness < 0) happiness = 0;
}