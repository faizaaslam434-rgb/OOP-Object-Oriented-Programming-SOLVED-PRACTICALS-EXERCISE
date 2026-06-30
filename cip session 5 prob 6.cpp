#include <iostream>
using namespace std;

class Account
{
protected:
    float balance;

public:
    void setBalance(float b)
    {
        balance = b;
    }

    void showBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

class SavingAccount : public Account
{
public:
    void addInterest(float rate)
    {
        balance = balance + (balance * rate / 100);
        cout << "After Interest Balance: " << balance << endl;
    }
};

class FixedAccount : public Account
{
public:
    void withdraw(float amount)
    {
        cout << "Withdrawal is locked in Fixed Account!" << endl;
        cout << "You cannot withdraw " << amount << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    SavingAccount s;
    FixedAccount f;

    s.setBalance(10000);
    cout << "\n--- Saving Account ---" << endl;
    s.showBalance();
    s.addInterest(5);

    f.setBalance(20000);
    cout << "\n--- Fixed Account ---" << endl;
    f.showBalance();
    f.withdraw(5000);

    return 0;
}
