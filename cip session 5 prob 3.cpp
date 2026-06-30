#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
    string name;
    float price;

public:
    void setProduct(string n, float p)
    {
        name = n;
        price = p;
    }

    void displayProduct()
    {
        cout << "Product Name: " << name << endl;
        cout << "Base Price: " << price << endl;
    }
};

class Electronics : public Product
{
private:
    int warrantyYears;

public:
    void setElectronics(string n, float p, int w)
    {
        setProduct(n, p);
        warrantyYears = w;
    }

    float finalPrice()
    {
        return price + (warrantyYears * 500);   // warranty charges
    }

    void display()
    {
        displayProduct();
        cout << "Warranty Years: " << warrantyYears << endl;
        cout << "Final Price: " << finalPrice() << endl;
    }
};

class Clothing : public Product
{
private:
    string size;

public:
    void setClothing(string n, float p, string s)
    {
        setProduct(n, p);
        size = s;
    }

    float finalPrice()
    {
        return price + 200;   // fixed clothing charges
    }

    void display()
    {
        displayProduct();
        cout << "Size: " << size << endl;
        cout << "Final Price: " << finalPrice() << endl;
    }
};

int main()
{
    Electronics e;
    Clothing c;

    e.setElectronics("Laptop", 80000, 2);
    cout << "\n--- Electronics Product ---\n";
    e.display();

    c.setClothing("Shirt", 2500, "Large");
    cout << "\n--- Clothing Product ---\n";
    c.display();

    return 0;
}
