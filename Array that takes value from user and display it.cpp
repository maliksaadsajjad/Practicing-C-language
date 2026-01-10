#include<iostream>
using namespace std;
int main() {
	int someArray[10];
	for(int i=0; i<10; i++) {
		cout<<"Please enter "<<i+1<<" value"<<endl;
		cin>>someArray[i];
		cout<<"You entered "<<someArray[i]<<" as a value"<<endl;
	}
}

