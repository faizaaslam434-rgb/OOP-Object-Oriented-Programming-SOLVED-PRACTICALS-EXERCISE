//1.EXPLANATON
/*Text t2 = t1; uses the default copy constructor, which makes a shallow copy
 (copies only the pointer).So both objects point to the same memory, and when
  destructors run, delete[] is called twice on the same buffer, causing crash/undefined behavior*/
//2.FIXED CODE
#include<iostream>
#include<cstring>
using namespace std;

class Text {
    char* buffer;

public:
    Text(const char* s)
    {
        buffer = new char[strlen(s) + 1];
        strcpy(buffer, s);
    }

    // Copy Constructor (Deep Copy)
    Text(const Text& other)
    {
        buffer = new char[strlen(other.buffer) + 1];
        strcpy(buffer, other.buffer);
    }

    void print()
    {
        cout << buffer << endl;
    }

    ~Text()
    {
        delete[] buffer;
    }
};

int main() {
    Text t1("Hello");
    Text t2 = t1;   // now safe deep copy

    t1.print();
    t2.print();

    return 0;
}
  