#include <iostream>

using namespace std;

struct Student {
	string name = " ";
	int age = 0;
	string course = " ";
	string block = " ";
	int year = 0;
	string gender = " ";
	//course, year, block, gender
};

void getInput(Student &pupil);
void printStudent(Student &pupil);


int main (){
	
	Student pupil1, pupil2, pupil3, pupil4, pupil5;
	
	//getInput(pupil);
	
	getInput(pupil1);
	getInput(pupil2);
	getInput(pupil3);
	getInput(pupil4);
	getInput(pupil5);
	
	//printStudent(pupil);
	
	printStudent(pupil1);
	printStudent(pupil2);
	printStudent(pupil3);
	printStudent(pupil4);
	printStudent(pupil5);
	
	return 0;
}

void getInput(Student &pupil) {
	
	cout << "Enter Student Name\t\t: ";
	getline(cin, pupil.name);
	
	cout << "Enter Age\t\t\t: ";
	cin >> pupil.age;
	cin.ignore();
	
	cout << "Enter Course\t\t\t: ";
	getline(cin, pupil.course);
	
	cout << "Enter Block\t\t\t: ";
	getline(cin, pupil.block);
	
	cout << "Enter Year\t\t\t: ";
	cin >> pupil.year;
	cin.ignore();
	
	cout << "Enter Gender (M/F)\t\t: ";
	getline(cin, pupil.gender);
	
	cout << "---------------------------------------------" << endl;
	
}

void printStudent(Student &pupil) {
	
	cout << "\nStudent Information:\n";
	
	cout << "Name\t\t\t\t: " << pupil.name << endl;
	cout << "Age\t\t\t\t: " << pupil.age << endl;
	cout << "Course\t\t\t\t: " << pupil.course << endl;
	cout << "Block\t\t\t\t: " << pupil.block << endl;
	cout << "Year\t\t\t\t: " << pupil.year << endl;
	cout << "Gender\t\t\t\t: " << pupil.gender << endl;
	
	
}
