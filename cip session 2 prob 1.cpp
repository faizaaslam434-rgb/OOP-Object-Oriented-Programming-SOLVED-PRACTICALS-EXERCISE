#include<iostream>
using namespace std;
class Temperature
{
	private:
		float tempInC;
		float tempInF;
		float tempInK;
	public:
		bool setTemp(float t)
		{
			if(t>=-273.15)
			{
				tempInC = t;
				tempInF = (tempInC*(9.0/5.0))+32;
				tempInK = tempInC + 273.15;
				return true;
			}
			tempInC = 0.0;
			tempInF = 32.0;
			tempInK = 273.15;
			return false;
		}
		void displayData()
		{
			cout<<"Tempeerature in Celsius: "<<tempInC<<" C"<<endl;
			cout<<"Tempeerature in Fahrenheit: "<<tempInF<<" F"<<endl;
			cout<<"Tempeerature in Kelvin: "<<tempInK<<" K"<<endl;
		}
	};
		int main()
		{
			Temperature t1;
			if(t1.setTemp(25.0))
			{
				t1.displayData();
			}
			else
			{
				cout<<"Invalid Temperature:" <<endl;
			}
			return 0;
		}
	