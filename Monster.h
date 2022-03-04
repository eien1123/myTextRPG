#pragma once
#include <iostream>
#include "Character.h"

class Character;

// --------------------------------- CLASS
// --------------------------------- MONSTER
class Monster : public Character
{
private:
    std::string element;
    int dmg;

public:
    // 생성자
    Monster()
    {
        this->element = "NONE";
        this->dmg = 1;
    }
    Monster(std::string _name)
    {
        this->Character::SetName(_name);
        this->element = "NONE";
        this->dmg = 1;
    }

    // 기능 함수
    void PrintInfo();

    // Get Info
    std::string GetElement();
    int GetDmg();

    // Set Info
    void SetElement(std::string _element);
    void SetDmg(int _dmg);
};