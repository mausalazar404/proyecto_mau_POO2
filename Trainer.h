#ifndef TRAINER_H
#define TRAINER_H

#include <string>
#include <vector>
#include "Dragon.h"
#include "Food.h"

using namespace std;

class Trainer{

    private:
        string name;
        vector <Dragon*> dragons;

    public:
        //Constructores
        Trainer();
        Trainer(string ,vector<Dragon*> );

        //Getters
        string getName();

        //setters
        void setName(string);
        
        
        //Method
        string adoptDragon(Dragon* d);
        string feedDragon(Dragon* d, Food* f);
        string trainDragon(Dragon* d);

        // Method overload
        string feedDragon(Dragon* d, Food* f, int quantity);        
        
        // Operator overload
        Dragon* operator[](int index);                 


};

#endif