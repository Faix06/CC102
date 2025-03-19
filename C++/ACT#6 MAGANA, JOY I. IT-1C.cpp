#include <iostream>

using namespace std;

void printArray(int numbers[10]) {
	cout << "Array elements: ";
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
}

void printEvenNumbers(int numbers[10]) {
	cout << "Even numbers: ";
	for (int i = 0; i < 10; i++) {
		if (numbers[i] % 2 == 0) {
			cout << numbers[i] << " ";
		}
	}
}


int main() {
	
	int num[10];
	
	cout << "Enter 10 Numbers: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	
	printArray(num);
	
	printEvenNumbers(num);
	
	return 0;
}

