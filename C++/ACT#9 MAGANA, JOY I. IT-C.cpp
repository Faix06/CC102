#include <iostream>
#include <set>
#include <map>

using namespace std;

int main () {
	
	
	set<string> studentsSet;
	map<string, int> studentsMap;
	string name;
	int age;
	
	cout << "Enter details of 10 students (FULL NAME & AGE) " << endl;
		for (int i = 0; i < 3; i++) {
		cout << "Student " << "Name: ";
		getline(cin, name);
	
		cout << "Student " << "Age: ";
		cin >> age;
		cin.ignore();
		studentsSet.insert(name);
		studentsMap.insert({name, age});
	}
	cout << "-------------------------------------------------" << endl;
	
	cout << "Students Aplhabetically List" << endl;
	
	for(string  students: studentsSet) {
		
		cout << students << ": ";
		
		for (auto std: studentsMap) {
			if (students == std.first) {
				cout << std.second << ": " << endl;
			}
		}
	}
	
	
	return 0;
}

