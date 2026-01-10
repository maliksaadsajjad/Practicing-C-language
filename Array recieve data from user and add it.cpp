#include<iostream>
using namespace std;
int main() {
	int sum, someArray[2];
	
	cout<<"Enter 1st number: "<<endl;
	cin>>someArray[0];
	cout<<"Enter 2nd number: "<<endl;
	cin>>someArray[1];
	
	sum = someArray[0] + someArray[1];
	cout<<"The some of both numbers is: "<<sum<<endl;
}

