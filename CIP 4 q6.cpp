#include<iostream>
using namespace std;

class student{
	
	int rollno;
public:	
	student(int r){
		rollno=r;
		
	}
	
	int getrollno() const{
		return rollno;
	}
	
	
};

int main(){
	
	student const s1(77);
	
	cout<<"Roll No: "<<s1.getrollno()<<endl;
	return 0;
}