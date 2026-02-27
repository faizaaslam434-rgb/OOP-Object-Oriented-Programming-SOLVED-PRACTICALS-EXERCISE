#include<iostream>
using namespace std;

class employee{
	string name;
	static int Id;
	int emp_id;
	static int E_count;
	
public:
	employee(string n){
		name = n;
		emp_id=Id++;
		E_count++;
	}
	
	void display(){
		cout<<"Name : "<<name<<endl<<"ID : "<<emp_id<<endl;
	}
	
	void emp_count(){
		cout<<"Total employee : "<<E_count<<endl;
	}
	
};

int employee::Id=1;
int employee::E_count=0;

int main(){
	
	employee e1("Saad"),e2("Meesam"),e3("Zahid");
	e1.display();
	e2.display();
	e3.display();
	
	e3.emp_count();
	return 0;
}