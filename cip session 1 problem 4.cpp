#include<iostream>
using namespace std;

int main()
 {
 	int n, sum=0;
 	cout<<"How many numers? ";
	cin>>n;
 	int *arr=new int[n];
	 cout<<"Enter numers: ";
	 for(int i=0; i<n; i++)
	 {
	 	cin>>arr[i];
	 	sum+=arr[i];
	 }
	 cout<<"\nSum = "<<sum<<endl;
	 delete[]arr;
	 return 0;
	
 }