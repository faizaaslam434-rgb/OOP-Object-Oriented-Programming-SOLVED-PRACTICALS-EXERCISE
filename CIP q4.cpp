#include<iostream>
using namespace std;

class rectangle{
	
	float height;
	float width;
public:	
	rectangle (float h, float w){
		height=h;
		width=w;
	}
	
	float getArea() const {
		return height*width;
	}
};

int main(){
	 rectangle const r1(2,3.4);
	 	
		 cout<<"Area = "<<r1.getArea()<<" m^2"<<endl;
}