#include<iostream>
#include<string>
using namespace std;
class Car
{
	private:
		string brand;
		int current_speed;
		int max_speed;
	public:
		Car(string brand, int max_speed)
		{
			this->brand = brand;
			this->max_speed = max_speed;
			current_speed = 0;
		}
			/*void setinitialSpeed(int initial_Speed)
			{
				if(initial_Speed>=0)
				{
					current_speed = initial_Speed;
				}
			}*/
			void acc(int delta)
			{
				current_speed+=delta;
				if(current_speed > max_speed)
				{
					current_speed = max_speed;
				}
			}
			void brake(int delta)
			{
				current_speed-=delta;
				if(current_speed < 0)
				{
					current_speed = 0;
				}
			}
			void displayData()
			{
				cout<<"Brand: "<<brand<<endl;
				cout<<"Current Speed: "<<current_speed<<"km/h"<<endl;
				cout<<"Maximum Speed: "<<max_speed<<"km/h"<<endl;
			}
};
int main()
{
	Car c1("HILUX",180);
	c1.acc(50);
	c1.acc(100);
	c1.acc(60);
	c1.brake(200);
	c1.displayData();
	
	return 0;
}