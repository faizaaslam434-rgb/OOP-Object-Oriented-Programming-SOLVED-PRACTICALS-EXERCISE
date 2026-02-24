#include<iostream>
#include<cstring>
using namespace std;

// -------------------- UniqueString (Deep Copy) --------------------
class UniqueString {
private:
    char* data;

public:
    UniqueString(const char* s)
    {
        data = new char[strlen(s) + 1];
        strcpy(data, s);
    }

    // Copy Constructor (Deep Copy)
    UniqueString(const UniqueString& other)
    {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Assignment Operator (Deep Copy)
    UniqueString& operator=(const UniqueString& other)
    {
        if(this != &other)
        {
            delete[] data;

            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    // Set method (to test modification)
    void set(const char* s)
    {
        delete[] data;
        data = new char[strlen(s) + 1];
        strcpy(data, s);
    }

    void print() const
    {
        cout << data << endl;
    }

    ~UniqueString()
    {
        delete[] data;
    }
};

// -------------------- SharedString (Shallow Copy) --------------------
class SharedString {
private:
    const char* data;   // read-only pointer

public:
    SharedString(const char* s)
    {
        data = s;  // shallow copy (no new memory)
    }

    // Copy Constructor (Shallow Copy)
    SharedString(const SharedString& other)
    {
        data = other.data;
    }

    void print() const
    {
        cout << data << endl;
    }

    // No destructor needed because we do not own memory
};

// -------------------- TEST --------------------
int main()
{
    cout << "---- UniqueString Test (Deep Copy) ----" << endl;
    UniqueString u1("test");
    UniqueString u2 = u1;

    u2.set("new");  // modify copy

    cout << "u1: ";
    u1.print();     // test
    cout << "u2: ";
    u2.print();     // new

    cout << "\n---- SharedString Test (Shallow Copy) ----" << endl;
    SharedString s1("hello");
    SharedString s2 = s1;

    cout << "s1: ";
    s1.print();
    cout << "s2: ";
    s2.print();

    // If modification was allowed, it would affect both (shared pointer)
    // But we do NOT allow modification for safety.

    return 0;
}
