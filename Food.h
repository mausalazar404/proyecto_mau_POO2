#ifndef FOOD_H
#define FOOD_H

#include <string>
#include <vector>
using namespace std;


class Food{
    protected:
        string name;
        int nutritionVal;
        int happinessVal;

    public:
        /// Constuctores
        Food();
        Food(string,int,int);

        //Setters
        void setName(string);
        void setNutritionalVal(int);
        void setHappinessval(int);

        //Getters
        string getName();
        int getNutritionalVal();
        int getHappinessVal();

        void feed();

    

    
};



#endif