#include <iostream>

using namespace std;

int main () {
	
	int numbers[10];
	cin >> numbers[0];
	cin >> numbers[1];
	cin >> numbers[2];
	cin >> numbers[3];
	cin >> numbers[4];
	cin >> numbers[5];
	cin >> numbers[6];
	cin >> numbers[7];
	cin >> numbers[8];
	cin >> numbers[9];
	
		for (int i = 9; i >= 0; i--){
		cout << numbers [i] << " ";
	}
	return 0;
}

