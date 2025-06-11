#ifndef DRAGON_H
#define DRAGON_H
#include "Food.h"

using namespace std;


class Dragon{
    protected:
        string name;
        string type;
        int level;
        int health;
        int defense;
        int hunger;
        int happiness;
    
    public:
        Dragon ();
        Dragon(string, string, int, int, int, int, int);

        //getters
        string getName();
        string getType();
        int getLevel();
        int getHealth();
        int getDefense();
        int getHunger();
        int getHappiness();
        
        //setters 
        void setName(string);
        void setType(string);
        void setLevel(int);
        void setHealth(int);
        void setDefense(int);
        void setHunger(int);
        void setHappiness(int);
        
        //Métodos
        string feed(Food* f);
        void train();
        virtual void battle(Dragon* op);

        // Método overload
        string feed(Food* f, int quantity);      
        
        // Operator overload
        bool operator>(const Dragon& other) const;     
        friend ostream& operator<<(ostream& os, const Dragon& dragon); 
};



#endif
