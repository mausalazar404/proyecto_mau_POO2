#include "Trainer.h"

#include <string>
using namespace std;

//constructores
Trainer::Trainer(){
    name = "";
    dragons = {};
}

Trainer::Trainer(string name, vector<Dragon*> ){
    this->name = name; 
    this->dragons = dragons;
}

//Getters
string Trainer::getName(){
    return name;
}

//Setters
void Trainer::setName(string name){
    this->name = name;
}

//Métodos
string Trainer::adoptDragon(Dragon* d){
    dragons.push_back(d);
    return name + d->getName() + "Adopted!"; 

}

string Trainer::feedDragon(Dragon* d, Food* f){
    d->feed(f);     
    return name + " fed " + d->getName() + ".";
}
    string Trainer::trainDragon(Dragon* d){
    d->train();
     return name + " trained " + d->getName() + ".";
}

string Trainer::feedDragon(Dragon* d, Food* f, int quantity){
    d->feed(f, quantity);  
    return name+" fed "+d->getName()+" "+to_string(quantity)+" times with "+f->getName() + ".";
}

Dragon* Trainer::operator[](int index){
    if(index >= 0 && index < dragons.size()){
        return dragons[index];
    }
    return nullptr;
}