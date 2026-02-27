#include<iostream>
using namespace std;


int main(){
	
	int size;
	
	cout<<"Enter the size of array : "<<endl;
	cin>>size;
	
	int* array = new int[size]; 
	
	
	for (int i=0;i<size;i++){
		cout<<"Enter the "<<i+1<<" Element"<<endl;
		cin>>array[i];
		
	}
	const int *ptr=array;
	cout<<"[ ";
	for (int i= 0;i<size;i++){
		cout<< *(ptr+i)<<", ";
	}
	cout<<"]";
	
	delete[] array;
	return 0;
}