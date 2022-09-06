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

int main() {
	Point obj1(2, 5);
	obj1.Print();

}