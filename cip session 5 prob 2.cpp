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
};

class Student : public Person
{
protected:
    int rollNo;

public:
    void setRoll(int r)
    {
        rollNo = r;
    }
};

class Result : public Student
{
private:
    float marks;

public:
    void setMarks(float m)
    {
        marks = m;
    }

    void display()
    {
        cout << "\n----- Result Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;
    string n;
    int roll;
    float m;

    cout << "Enter Name: ";
    getline(cin, n);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks: ";
    cin >> m;

    r.setName(n);
    r.setRoll(roll);
    r.setMarks(m);

    r.display();

    return 0;
}
