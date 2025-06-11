#ifndef MEAT_H
#define MEAT_H

#include "Food.h"
#include <string>
using namespace std;

class Meat : public Food {
private:
    int proteinContent;

public:
    // Constructores
    Meat();
    Meat(string, int, int, int);

    // Getter
    int getProteinContent();
    //Setter
    void setProteinContent(int);
};

#endif
