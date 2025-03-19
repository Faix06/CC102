#include <iostream>

using namespace std;

	
struct student {
	string name = "";
	string courseYear = "";
	string birthday = "";
	string sex = "";
	int age = 0;
};
	
int main() {
		
	student student1, student2, student3, student4, student5;
	cout << "Student 1 Information"  << endl;
	
	cout << "Name: ";
	cin >> student1.name;
	cout << "CourseYear: ";
	cin >> student1.courseYear;
	cout << "Birtday: ";
	cin >> student1.birthday;
	cout << "Sex: " ;
	cin >> student1.sex;
	cout << "Age: ";
	cin >> student1.age;
	cout << "-------------------------------------------------" << endl;
	cout <<   student1.name << " " << student1.courseYear << " " << student1.birthday << " " << student1.sex << " " << student1.age << " " << endl;
	cout << "-------------------------------------------------" << endl;
	
	cout << "Student 2 Information"  << endl;
	cout << "Name: ";
	cin >> student2.name;
	cout << "CourseYear: ";
	cin >> student2.courseYear;
	cout << "Birtday: ";
	cin >> student2.birthday;
	cout << "Sex: " ;
	cin >> student2.sex;
	cout << "Age: ";
	cin >> student2.age;
	cout << "-------------------------------------------------" << endl;
	cout << student2.name << " " << student2.courseYear << " " << student2.birthday << " " << student2.sex << " " << student2.age << " " << endl;
	cout << "-------------------------------------------------" << endl;
	
	cout << "Student 3 Information"  << endl;
	
	cout << "Name: ";
	cin >> student3.name;
	cout << "CourseYear: ";
	cin >> student3.courseYear;
	cout << "Birtday: ";
	cin >> student3.birthday;
	cout << "Sex: " ;
	cin >> student3.sex;
	cout << "Age: ";
	cin >> student3.age;
	cout << "-------------------------------------------------" << endl;
	cout << student3.name << " " << student3.courseYear << " " << student3.birthday << " " << student3.sex << " " << student3.age << " " << endl;
	cout << "-------------------------------------------------" << endl;
	
	cout << "Student 4 Information"  << endl;

	cout << "Name: ";
	cin >> student4.name;
	cout << "CourseYear: ";
	cin >> student4.courseYear;
	cout << "Birtday: ";
	cin >> student4.birthday;
	cout << "Sex: " ;
	cin >> student4.sex;
	cout << "Age: ";
	cin >> student4.age;
	cout << "-------------------------------------------------" << endl;
	cout << student4.name << " " << student4.courseYear << " " << student4.birthday << " " << student4.sex << " " << student4.age << " " << endl;
	cout << "-------------------------------------------------" << endl;
	
	cout << "Student 5 Information"  << endl;
	
	cout << "Name: ";
	cin >> student5.name;
	cout << "CourseYear: ";
	cin >> student5.courseYear;
	cout << "Birtday: ";
	cin >> student5.birthday;
	cout << "Sex: " ;
	cin >> student5.sex;
	cout << "Age: ";
	cin >> student5.age;
	cout << "-------------------------------------------------" << endl;
	cout << student5.name << " " << student5.courseYear << " " << student5.birthday << " " << student5.sex << " " << student5.age << " " << endl;
	
	
	cout << "All information of Students";
	
	cout << student1.name << " " << student1.courseYear << " " << student1.birthday << " " << student1.sex << " " << student1.age << " " << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	cout << student2.name << " " << student2.courseYear << " " << student2.birthday << " " << student2.sex << " " << student2.age << " " << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	cout << student3.name << " " << student3.courseYear << " " << student3.birthday << " " << student3.sex << " " << student3.age << " " << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	cout << student4.name << " " << student4.courseYear << " " << student4.birthday << " " << student4.sex << " " << student4.age << " " << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	cout << student5.name << " " << student5.courseYear << " " << student5.birthday << " " << student5.sex << " " << student5.age << " " << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	return 0;
}

