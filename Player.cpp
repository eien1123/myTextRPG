#include "Monster.h"
#include "Player.h"
#include "Character.h"

// --------------------------------- CLASS
// --------------------------------- PLAYER

// ��� �Լ�
void Player::PrintInfo()
{
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "   Name: " << this->GetName() << std::endl;
    std::cout << "   HP: " << this->GetHp() << std::endl;
    std::cout << "   MP: " << this->GetMp() << std::endl;
    std::cout << "   DMG: " << this->GetDmg() << std::endl;
    std::cout << "   �̵��ӵ�: " << this->GetMoveSpeed() << std::endl;
    if (this->GetAlive() == true)
        std::cout << "   ����: ����" << std::endl;
    else if (this->GetAlive() == false)
        std::cout << "   ����: ���" << std::endl;
    std::cout << "   exp: " << this->exp << std::endl;
    std::cout << "   userAge: " << this->userInfo.userAge << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    return;
}

// Get Info
UserInfo Player::GetUserInfo() { return this->userInfo; }
int Player::GetDmg() { return this->dmg; }
int Player::GetExp() { return this->exp; }

// Set Info
void Player::SetUserInfo(std::string _name, int _age)
{
    this->userInfo.userName = _name;
    this->userInfo.userAge = _age;
}
void Player::SetDmg(int _dmg)
{
    this->dmg = _dmg;
    return;
}
void Player::SetExp(int _exp)
{
    this->exp = _exp;
    return;
}