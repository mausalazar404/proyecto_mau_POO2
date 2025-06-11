#ifndef FIREDRAGON_H
#define FIREDRAGON_H

#include <string>
#include <vector>
#include "Dragon.h"
using namespace std;


class FireDragon: public Dragon{
    private:
        int firePower;

    public:
    //Constructores
        FireDragon();
        FireDragon(string,string,int,int,int,int,int,int);

    //Getters y setters
        int getFirePower();
        void setFirePower(int);

    //Métodos
        void breathFire();   
        void battle(Dragon* opponent) override;


};



#endif