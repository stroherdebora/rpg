#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <time.h>
#include <stdlib.h>
#include "Character.h"
#include "Knight.h"
#include "Druid.h"
#include "Thief.h"

using namespace std;

Character::Character()
{
    //ctor
}

Character::~Character()
{
    //dtor
}

void Character::getName()
{
    cout << " " << endl;
    cout << " " << endl;
    cout << "Please enter the name of your character: " << endl;
    getline(cin, name);
    cout << "=====================================" << endl;
}


void Character::getJob()
{
    int n;

    cout << " " << endl;
    cout << "Please choose the profession of your character: " << endl;
    cout << "1. Knight" << endl;
    cout << "2. Druid" << endl;
    cout << "3. Thief" << endl;
    cout << "Choice: ";
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            strcpy(job, "Knight");
            Knight();
            break;

        case 2:
            strcpy(job, "Druid");
            Druid();
            break;

        case 3:
            strcpy(job, "Thief");
            Thief();
            break;
    }

}

void Character::getAttribute(Character c1)
{
    int t=1;

    // Knight attribute
    if(strcmp(c1.job,"Knight")==0)
	{
        while(t)
		{
            srand((unsigned)time(NULL));
            strength=rand()%5+38;//The strength value is in 38~42
			wisdom=rand()%5+3;//The wisdom value is in 18~22
			skill=rand()%5+28;//The skill value is in 28~32
			defense=rand()%5+18;//The defense value is in 3~7
			if(wisdom+strength+skill+defense==100) t=0;

		}

	}

    // Druid attribute
    if(strcmp(c1.job,"Druid")==0)
	{
        while(t)
		{
            srand((unsigned)time(NULL));
			defense=rand()%5+18;
			wisdom=rand()%5+38;
			skill=rand()%5+28;
			strength=rand()%5+3;
			if(wisdom+strength+skill+defense==100) t=0;

		}
	}

    // Thief attribute
    if(strcmp(c1.job,"Thief")==0)
	{
        while(t)
		{
            srand((unsigned)time(NULL));
            wisdom=rand()%5+28;
			strength=rand()%5+18;
			skill=rand()%5+38;
			defense=rand()%5+3;
			if(wisdom+strength+skill+defense==100) t=0;

		}
	}
}

void Character::display()
{
    cout << "===============================\n" << endl;
	cout << "1. Name: " << name << endl;
	cout << "2. Profession: " << job << endl;
	cout << "6. Strength: " << strength << endl;
	cout << "3. Skill: " << skill << endl;
	cout << "4. Wisdom: " << wisdom << endl;
	cout << "6. Defense: " << defense << endl;
	cout << "6. Coins: " << coins << endl;
	cout << "5. HealthPoints: " << health << endl;
	cout << "=====================================\n";

}

