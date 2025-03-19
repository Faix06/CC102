#include <iostream>

using namespace std;
 
 class Student {
 	public:
 		string name;
 		int age;
 		string course;
 		int year;
 		string block;
 		string sex;
 		
 		Student() {}
 		
 		Student(string getName, int getAge, string getCourse, int getYear , string getBlock, string getSex){
 			name = getName;
 			age = getAge;
 			course = getCourse;
 			year = getYear;
 			block = getBlock;
 			sex = getSex;
		 }
 };
 
int main () {
	
	string name;
	int age;
	string course;
	int year;
 	string block;
 	string sex;
 	
	Student pupil[4];
 	
 	for (int i = 0;  i < 4; i++) {
 		cout << "Name\t\t\t: ";
 		cin >> name;
 		cout << "Age\t\t\t: ";
 		cin >> age;
 		cout << "Course\t\t\t: ";
 		cin >> course;
 		cout << "Year\t\t\t: ";
 		cin >> year;
 		cout << "Block\t\t\t: ";
 		cin >> block;
 		cout << "Sex(F/M)\t\t: ";
 		cin >> sex;
 		pupil[i] = Student(name, age, course, year, block, sex);
 		cout << "-------------------------------------------------" << endl;
		}
		
		cout << "All Students Details: " << endl;
	
		for (int i = 0; i < 4; i++) {
			cout << pupil[i].name << " | " << pupil[i].age << " | " << pupil[i].course << " | " << pupil[i].year <<  "-" << pupil[i].block << " | " << pupil[i].sex << endl;
			cout << "-------------------------------------------------" << endl;
		}
 	
	return 0;
}
