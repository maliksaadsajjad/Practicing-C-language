#include<iostream>
using namespace std;
int main() {
	int input, factorial = 1;
	cout<<"Enter the factorial number: "<<endl;
	cin>>input;
	for( ; input > 1; input--) {
		factorial *= input;
	}
	cout<<"Factorial of the entered number is: "<<factorial<<endl;
}

