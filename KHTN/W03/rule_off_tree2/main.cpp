#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class Animal {
private:
	int price;
public:
	int price2;
	Animal() {
		cout << "This is default Animal" << endl;
	}
	Animal(int tmp) {
		price = tmp;
		cout << "Base class is called with pv value:" << price << endl;
	}
	void func_f() {
		cout << "Base class call function f" << endl;
	}
};
class Teo :public Animal {
public:
	Teo(int tmp2) :Animal(tmp2) {
		Animal::func_f();
		cout << "Derive class is called with value:" << tmp2 << endl;
	}
	Teo() :Animal() {
		cout << "hehe" << endl;
	}
	void func_f() {
		cout << "Derive class call function f" << endl;
	}
};

void Function_X(Animal *tt) {
	tt->func_f();
}

int main() {
	Teo *Long = new Teo(10);
	Function_X(Long);


	/* Test pointer */
	//int a[10] = { 0 , 1, 2 ,3, 4, 5, 6, 7, 8 , 9 };
	char a[10] = { 200 , 1000, '0' ,'0', '4', '5', '6', '7', '8' , '9' };
	int i;
	for (i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}

	/*int *s;
	s = (int *)a;*/
	short *s;
	s = (short *)a;


	//s = (int*) (a + 2);
	cout << a[1] << endl;
	cout << sizeof(s) << endl;
	cout << *s << endl;

	_getch();
	return 0;

}
