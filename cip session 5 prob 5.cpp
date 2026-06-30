#include <iostream>
using namespace std;

class Reader
{
public:
    void read()
    {
        cout << "Reading data from file..." << endl;
    }
};

class Writer
{
public:
    void write()
    {
        cout << "Writing data to file..." << endl;
    }
};

class File : public Reader, public Writer
{
public:
    void display()
    {
        read();
        write();
    }
};

int main()
{
    File f;

    cout << "----- File Operations -----" << endl;
    f.display();

    return 0;
}
