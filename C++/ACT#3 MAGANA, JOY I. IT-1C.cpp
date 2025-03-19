#include <iostream>

using namespace std;

int main (){
	
	int num[10];
	
	cout << "Enter the numbers:\n";

	for(int i = 0; i < 10; i++){
		cin >> num[i];
	}
	
	for (int i = 0; i < 10; i++){
		if(num[i] % 2 == 0){
			cout << "EvenNumber: " << num [i] << endl;
		}
	}
	return 0;
}

