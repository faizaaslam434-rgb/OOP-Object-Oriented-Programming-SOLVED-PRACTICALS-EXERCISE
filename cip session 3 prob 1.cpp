#include<iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;

public:
    // Default constructor
    DynamicArray()
    {
        data = NULL;
        size = 0;
    }

    // Parameterized constructor
    DynamicArray(int n)
    {
        size = n;
        data = new int[size];

        for(int i = 0; i < size; i++)
        {
            data[i] = 0;
        }
    }

    // Copy constructor (Deep Copy)
    DynamicArray(const DynamicArray& other)
    {
        size = other.size;
        data = new int[size];

        for(int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }

    // Destructor
    ~DynamicArray()
    {
        delete[] data;
    }

    // operator []
    int& operator[](int index)
    {
        return data[index];
    }

    int getSize() const
    {
        return size;
    }
};

int main()
{
    DynamicArray a(3);
    a[0] = 10;
    a[1] = 15;
    a[2] = 30;

    DynamicArray b = a;   // deep copy
    b[0] = 20;

    cout << "a[0] = " << a[0] << endl;  // prints 10
    cout << "b[0] = " << b[0] << endl;  // prints 20

    return 0;
}
