#include <iostream>

using namespace std;

class Student {
	private:
		string name;
		int age;
		string course;
		string block;
		int year;
		string sex;
	
	public:
		
		void setName(string str) {
			name = str;
		}
		void setAge(int str) {
			age = str;
		}
		void setCourse(string str) {
			course = str;
		}
		void setBlock(string str) {
			block = str;
		}
		void setYear(int str) {
			year = str;
		}
		void setSex(string str) {
			sex = str;
		}
		
		string getName() {
			return name;
		}
		int getAge() {
			return age;
		}
		string getCourse() {
			return course;
		}
		string getBlock() {
			return block;
		}
		int getYear() {
			return year;
		}
		string getSex() {
			return sex;
		}
};


int main() {
	
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
 		pupil[i].setName(name);
 		cout << "Age\t\t\t: ";
 		cin >> age;
 		pupil[i].setAge(age);
 		cout << "Course\t\t\t: ";
 		cin >> course;
 		pupil[i].setCourse(course);
 		cout << "Year\t\t\t: ";
 		cin >> year;
 		pupil[i].setYear(year);
 		cout << "Block\t\t\t: ";
 		cin >> block;
 		pupil[i].setBlock(block);
 		cout << "Sex(F/M)\t\t: ";
 		cin >> sex;
 		pupil[i].setSex(sex);
 		cout << "-------------------------------------------------" << endl;
		}
		
		cout << "All Students Details: " << endl;
		
		for(int i = 0; i < 4; i++){
			cout << pupil[i].getName() << " | " << pupil[i].getAge() << " | " << pupil[i].getCourse() << " | " << pupil[i].getYear() << " | " << pupil[i].getBlock() << " - " << pupil[i].getSex() << endl;
			cout << "-------------------------------------------------" << endl;
		}
		
	return 0;
}
