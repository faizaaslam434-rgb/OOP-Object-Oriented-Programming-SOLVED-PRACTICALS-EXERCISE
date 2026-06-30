#include <iostream>
using namespace std;

class Attack
{
protected:
    int attackPower;

public:
    void setAttackPower(int a)
    {
        attackPower = a;
    }

    void attack()
    {
        cout << "Attacking with power: " << attackPower << endl;
    }
};

class Defense
{
protected:
    int shieldPower;

public:
    void setShieldPower(int s)
    {
        shieldPower = s;
    }

    void defend()
    {
        cout << "Defending with shield power: " << shieldPower << endl;
    }
};

class Warrior : public Attack, public Defense
{
public:
    void displayBattlePower()
    {
        cout << "\n----- Warrior Battle Info -----" << endl;
        attack();
        defend();
        cout << "Total Battle Power: " << (attackPower + shieldPower) << endl;
    }
};

int main()
{
    Warrior w;

    w.setAttackPower(80);
    w.setShieldPower(60);

    w.displayBattlePower();

    return 0;
}
