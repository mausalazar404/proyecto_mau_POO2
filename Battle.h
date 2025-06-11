#ifndef BATTLE_H
#define BATTLE_H

#include <string>
#include <vector>
#include "Dragon.h"
using namespace std;


class Battle{
    private:
        Dragon* dragon1;
        Dragon* dragon2;
    
    public:
        // Constructor
        Battle(Dragon* d1, Dragon* d2);

        // Método 
        Dragon* startBattle();
};



#endif