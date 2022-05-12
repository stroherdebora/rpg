#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>

using namespace std;

class Character
{
    public:
        Character();
        virtual ~Character();
        void display();
        void getName();
        void getJob();
        void getAttribute(Character c1);

    protected:
        char job[30];
        string name;
        int strength;
        int skill;
        int wisdom;
        int health;
        int defense;
        int coins;

    private:


};
#endif // CHARACTER_H
