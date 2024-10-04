#include <iostream>

using namespace std;

int main()
{
	string nickname, courseYear, school;
	
	cout << "Enter your nickname\t\t\t:";
	cin >> nickname;
	cout << "Enter your courseYear level\t\t:";
	cin >> courseYear;
	cout << "Enter your school\t\t\t:";
	cin >> school;
	cout << "Wow Congrats " << nickname << "!" << courseYear << " is a nice course. "; 
	cout << " And you are studying in " << school << " which is one of the Center of Excellence in Tertiary Education.";
	return 0;
}