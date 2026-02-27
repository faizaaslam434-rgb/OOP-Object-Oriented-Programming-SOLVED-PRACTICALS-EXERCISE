#include<iostream>
using namespace std;

class math{
	int a,b,r;
public:
	int static gcd(int a, int b, int r=0){
		while (b!=0){
			r=a%b;
			a=b;
			b=r;
		}
		return a;
	}
	
};

int main(){
	
	cout<<"The greatest common divisor is "<<math::gcd(48,18)<<endl;
}