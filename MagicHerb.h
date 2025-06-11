#ifndef MAGICHERB_H
#define MAGICHERB_H

#include "Food.h"
#include <string>
#include <vector>
using namespace std;


class MagicHerb: public Food{
    private:
        string effect;

    public:
    //Constructores
        MagicHerb();
        MagicHerb(string, int, int, string);

    //Getters
        string getEffect();

    //Setters
        void setEffect(string);

};



#endif