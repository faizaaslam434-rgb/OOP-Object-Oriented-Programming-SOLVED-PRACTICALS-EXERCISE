#include <iostream>
#include <string>
using namespace std;

class Ticket
{
protected:
    string source, destination;
    float price;

public:
    void setTicket(string s, string d, float p)
    {
        source = s;
        destination = d;
        price = p;
    }

    void displayTicket()
    {
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Base Price: " << price << endl;
    }
};

class BusTicket : public Ticket
{
public:
    float totalFare()
    {
        return price;   // no extra charges
    }

    void display()
    {
        cout << "\n----- Bus Ticket -----" << endl;
        displayTicket();
        cout << "Total Fare: " << totalFare() << endl;
    }
};

class FlightTicket : public Ticket
{
private:
    float luggageCharges;

public:
    void setLuggageCharges(float l)
    {
        luggageCharges = l;
    }

    float totalFare()
    {
        return price + luggageCharges;
    }

    void display()
    {
        cout << "\n----- Flight Ticket -----" << endl;
        displayTicket();
        cout << "Extra Luggage Charges: " << luggageCharges << endl;
        cout << "Total Fare: " << totalFare() << endl;
    }
};

int main()
{
    BusTicket b;
    FlightTicket f;

    b.setTicket("Lahore", "Islamabad", 1500);
    b.display();

    f.setTicket("Karachi", "Dubai", 50000);
    f.setLuggageCharges(8000);
    f.display();

    return 0;
}
