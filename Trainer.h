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
        Trainer();
        Trainer(string ,vector<Dragon*> );

        void adoptDragon(Dragon* d);
        void feedDragon(Dragon* d, Food* f);
        void trainDragon(Dragon* d);

};

#endif