#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class Animal {
public:
	Animal() {
		cout << "Animal world!" << endl;
	}
	virtual int talk() {
		cout << "This is base of animal" << endl;
		return 1;
	}
};

class Cat : public Animal {
public:
	int talk() {
		cout << "Cat say: meo meo!" << endl;
		return 0;
	}
};

void main() {
	int re;
	Cat mimi;
	re = mimi.talk();
	cout << "Result is: " << re << endl;
	_getch();
}