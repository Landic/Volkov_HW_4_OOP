#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int value_x, int value_y) {
		x = value_x;
		y = value_y;
	}

	void Print() {
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
	}
};

class Student {
	char* Firstname;
	char* Lastname;
	int age;
public:
	Student() {
		Firstname = nullptr;
		Lastname = nullptr;
		age = 0;
	}

	Student(const char* value_firstname, const char* value_lastname, int value_age) {
		Firstname = new char[strlen(value_firstname) + 1];
		strcpy_s(Firstname, strlen(value_firstname) + 1, value_firstname);

		Lastname = new char[strlen(value_lastname) + 1];
		strcpy_s(Lastname, strlen(value_lastname) + 1, value_lastname);

		age = value_age;
	}

	~Student() {
		delete[] Firstname;
		delete[] Lastname;
	}
};

int main() {
	Point obj1(2, 5);
	obj1.Print();

}