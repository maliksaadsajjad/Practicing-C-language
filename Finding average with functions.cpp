#include<iostream>
using namespace std;
int averageCalculation(int a, int b, int c) {
	int avg = (a+b+c)/3;
	return avg;
}

int main() {
	cout<<averageCalculation(5,7,3)<<endl;
}

