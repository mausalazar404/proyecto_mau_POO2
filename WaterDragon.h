#ifndef WATERDRAGON_H
#define WATERDRAGON_H

#include <string>
#include <vector>
#include "Dragon.h"
using namespace std;


class WaterDragon: public Dragon{
    private:
        int waterAffinity;

    public:
    //Constructores
        WaterDragon();
        WaterDragon(string,string,int,int,int,int,int,int);

    //Getters y setters
        int getWaterAffinity();
        void setWaterAffinity(int);

    //Métodos
        void splash();               
        void battle(Dragon* opponent) override;

};



#endif