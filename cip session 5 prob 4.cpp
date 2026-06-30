#include <iostream>
#include <string>
using namespace std;

class Device
{
protected:
    string brand;

public:
    void setBrand(string b)
    {
        brand = b;
    }
};

class Laptop : public Device
{
protected:
    int ram;

public:
    void setRam(int r)
    {
        ram = r;
    }
};

class GamingLaptop : public Laptop
{
private:
    string gpu;

public:
    void setGPU(string g)
    {
        gpu = g;
    }

    void display()
    {
        cout << "\n----- Gaming Laptop Details -----" << endl;
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }
};

int main()
{
    GamingLaptop g;
    string b, gpuName;
    int r;

    cout << "Enter Brand: ";
    getline(cin, b);

    cout << "Enter RAM (GB): ";
    cin >> r;
    cin.ignore();

    cout << "Enter GPU: ";
    getline(cin, gpuName);

    g.setBrand(b);
    g.setRam(r);
    g.setGPU(gpuName);

    g.display();

    return 0;
}
