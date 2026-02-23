#include<iostream>
using namespace std;
class Clock
{
	private:
		int hours;
		int min;
	public:
		Clock(int h, int m)
		{
			if(h>=0 && h<=23 && m>=0 && m<=59)
			{
				hours = h;
				min = m;
			}
			else
			{
				hours = 0;
				min = 0;
			}
		}
		void setTime(int h, int m)
		{
			if(h>=0 && h<=23 && m>=0 && m<=59)
			{
				hours = h;
				min = m;
			}
			else
			{
				cout<<"Invalid time/ reset time: "<<endl;
				hours = 0;
				min = 0;
			}
		}
		void tick()
		{
			min++;
			if(min==60)
			{
				min = 0;
				hours++;
			}
			if(hours==24)
			{
				hours = 0;
			}
		}
		void displayData()
		{
  	  		if (hours < 10)
        		cout << "0";
    		cout << hours << ":";

   			 if (min < 10)
       			cout << "0";
    		cout << min << endl;
		}
};
int main()
{
	Clock c1(23,58);
	c1.displayData();
	c1.tick();
	c1.displayData();
	
	c1.tick();
	c1.displayData();
	
	c1.tick();
	c1.displayData();
	
	c1.tick();
	c1.displayData();
	
	c1.tick();
	c1.displayData();
		
	return 0;
}
		
		
		