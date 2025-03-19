#include <iostream>

	// funtion overloading

using namespace std;

int add(int x, int y);
double add(double x, double y);

int subtract(int x, int y);
double subtract(double x, double y);

int Multiplication(int x, int y);
double Multiplication(double x, double y);

int Division(int x, int y);
double Division(double x, double y);

int Remainder(int x, int y);

int main (){

	cout << "Add Integer \t\t\t : ";
	cout << add(2, 3) << endl;
	cout << "Add Double \t\t\t : ";
	cout << add(2.3, 3.5) << endl;

	cout << "-------------------------------------------" << endl;

	cout << "subtract Integer \t\t : ";
	cout << add(12, 98) << endl;
	cout << "subtract Double \t\t : ";
	cout << add(78.3, 345.5) << endl;
	
	cout << "-------------------------------------------" << endl;
	
	cout << "Multiplication Integer \t\t : ";
	cout << add(257, 375) << endl;
	cout << "Multiplication Double \t\t : ";
	cout << add(872.93, 37.5) << endl;
	
	cout << "-------------------------------------------" << endl;
	
	cout << "Division Integer \t\t : ";
	cout << add(100, 5) << endl;
	cout << "Division Double \t\t : ";
	cout << add(160.3, 34.5) << endl;
	
	cout << "-------------------------------------------" << endl;
	
	cout << "Remainder Integer \t\t : ";
	cout << add(2768, 367) << endl;
	
	cout << "-------------------------------------------" << endl;
	
	return 0;
}

int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

double subtract(double x, double y) {
	return x - y;
}

int Multiplication(int x, int y) {
	return x * y;
}

double Multiplication(double x, double y) {
	return x * y;
}

int Division(int x, int y) {
	return x / y;
}

double Division(double x, double y) {
	return x / y;
}

int Remainder(int x, int y) {
	int rem = x % y;
	return rem;
}

