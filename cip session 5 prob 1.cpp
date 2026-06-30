#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;

public:
    void setRoll(int r)
    {
        rollNumber = r;
    }

    void displayStudent()
    {
        displayName();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student s;
    string n;
    int r;

    cout << "Enter Name: ";
    getline(cin, n);

    cout << "Enter Roll Number: ";
    cin >> r;

    s.setName(n);
    s.setRoll(r);

    cout << "\nStudent Details:\n";
    s.displayStudent();

    return 0;
}
