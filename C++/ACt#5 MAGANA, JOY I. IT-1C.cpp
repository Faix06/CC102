#include <iostream>

using namespace std;

int add(int x, int y) {
	int sum = x + y;
	return sum;
}

int subtract(int x, int y) {
	int diff = x - y;
	return diff;
}

int multiply(int x, int y){
	int product = x * y;
	return product;
}

int division(int x, int y){
	int quotient = x / y;
	return quotient;
}
int remainder(int x, int y){
	int rem = x % y;
	return rem;
}


int main() {

	cout << "ADDITONAL = " << add(26, 7) << endl;
	cout << "SUBTRACT = " << subtract(80, 65) << endl;
	cout << "MULTIPICATION = " << multiply(28, 67) << endl;
	cout << "DIVISION = " << division(45, 5) << endl;
	cout << "REMAINDER =" << remainder(26, 7) << endl;
	
	return 0;
}

