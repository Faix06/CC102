#include <iostream>

using namespace std;

int main()
{
	double temperature;
	
	cout << "How cold is it in your area?: ";
	cin >> temperature;
	
	if (temperature < 32){
		cout << "You should bring a heavy jacket." << endl;
	}
	else if (temperature >= 32 && temperature <=50){
		cout << "you should bring a light jacket." << endl;
	}
	else {
		cout << "No need to bring a jacket." << endl;
	}
	return 0;
}
