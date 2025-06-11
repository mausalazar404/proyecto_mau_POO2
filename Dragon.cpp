#include "Dragon.h"
#include <string>
#include <sstream>

using namespace std;

//Constructores
Dragon::Dragon(){
    name = "";
    type = "";
    level = 1;
    health = 100;
    defense = 10;
    hunger = 50;
    happiness = 50;
}

Dragon::Dragon(string name, string type, int level, int health, int defense, 
int hunger, int happiness){
    this->name = name;
    this->type = type;
    this->level = level;
    this->health = health;
    this->defense = defense;
    this->hunger = hunger;
    this->happiness = happiness;
}

// Getters
string Dragon::getName() { 
    return name; 
}
string Dragon::getType() { 
    return type; 
}
int Dragon::getLevel() { 
    return level; 
}
int Dragon::getHealth() {
    return health; 
}
int Dragon::getDefense() { 
    return defense; 
}
int Dragon::getHunger() { 
    return hunger; 
}
int Dragon::getHappiness() { 
    return happiness; 
}

//setters
void Dragon::setName(string name) { 
    this->name = name;
}
void Dragon::setType(string type) { 
    this->type = type; 
}
void Dragon::setLevel(int level) { 
    this->level = level;
}
void Dragon::setHealth(int health) { 
    this->health = health; 
}
void Dragon::setDefense(int defense) { 
    this->defense = defense; 
}
void Dragon::setHunger(int hunger) {
    this->hunger = hunger; 
}
void Dragon::setHappiness(int happiness) { 
    this->happiness = happiness; 
}

//Métodos

string Dragon::feed(Food* f){ 
    hunger -= f-> getNutritionalVal();
    happiness += f->getHappinessVal();

    if(hunger<0){
        hunger = 0;
    }

    if (hunger>100){
        hunger = 100;
    }
}

void Dragon::train(){
    level ++;
    happiness += 3;
    hunger += 10;

    if (happiness > 100){
        happiness = 100;
    }

    if (hunger > 100){
        hunger = 100;
    }
}

void Dragon::battle(Dragon* opponent){
    int attackPower = level * 10 + happiness;
    int opponentDefense = opponent->getDefense();

    if (attackPower > opponentDefense) {
        level++;
        happiness += 5;
        opponent->setHealth(opponent->getHealth() - 20);
    } else {
        health -= 15;
        happiness -= 5;
    }

    if (health < 0) health = 0;
    if (happiness < 0) happiness = 0;
}

string Dragon::feed(Food* f, int quantity){
    stringstream ss;
    hunger -= (f->getNutritionalVal() * quantity);
    happiness += (f->getHappinessVal() * quantity);
    
    if(hunger < 0){
        hunger = 0;
    }
    if(happiness > 100){
        happiness = 100;
    }
    
    ss<<name<<" was feed "<<quantity<<" times with "<<f->getName()<<"!"<<endl;
    return ss.str();
}


bool Dragon::operator>(const Dragon& other) const {

    int myPower = level + health + defense + happiness;
    int otherPower = other.level + other.health + other.defense + other.happiness;
    return myPower > otherPower;
}

ostream& operator<<(ostream& os, const Dragon& dragon) {
    os<<"=== "<<dragon.name<<" ("<<dragon.type<<") ==="<<endl;
    os<<"Level: "<<dragon.level<<" | Health: "<<dragon.health<<endl;
    os<<"Defense: "<<dragon.defense<<" | Hunger: "<<dragon.hunger<<endl;
    os<<"Happiness: "<<dragon.happiness<<endl;
    return os;
}