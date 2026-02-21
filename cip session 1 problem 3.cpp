#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a, b;
	cout<<"Enter two numbers:  ";
	cin>>a;
	cin>>b;
	swap(a,b);
	cout<<"After swap: "<<a<<" " <<b<<endl;
	return 0;
	
}