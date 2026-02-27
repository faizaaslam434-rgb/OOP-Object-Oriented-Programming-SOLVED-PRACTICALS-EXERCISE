#include<iostream>
using namespace std;

class counter{
	int T_call;
	
public:
		
	int callcounter(){
	int static call=0;
	T_call=++call;
	return T_call;
	}
	
	void display(){
			cout<<"Function is called "<<T_call<<" Times"<<endl;
	}
};



int main(){
	
	counter c1;
	c1.callcounter();
	c1.callcounter();
	c1.callcounter();
	c1.display();
	

	
}