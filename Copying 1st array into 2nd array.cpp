#include<iostream>
using namespace std;
int main() {
	int firstArray[5], secondArray[5];
	
	for(int j=0; j<5; j++) {
		cout<<"Please enter "<<j+1<<" value"<<endl;
		cin>>firstArray[j];
	}
	
	for(int i=0; i<5; i++) {
		secondArray[i] = firstArray[i];
	}
	
	for(int k=0; k<5; k++) {
		cout<<secondArray[k]<<endl;
	}
}

