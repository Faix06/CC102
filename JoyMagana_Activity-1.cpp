#include <iostream>

using namespace std;

int main() {
	
	string names[3];
	
	cout << "Enter your First Name: ";
	cin >> names[0];
	cout << "Enter your Middle Name: ";
	cin >> names[1];
	cout << "Enter your Last Names: ";
	cin >> names[2];
	
	cout << names[0] << " " << names[1] << " " << names[2];
	return 0;
}

