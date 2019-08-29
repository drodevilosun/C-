#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
class Animal {
private:
	int price;
	int *data;
	int *data1;
public:
	int price2;
	Animal() {
		cout << "This is default Animal" << endl;
	}
	Animal(int tmp) {
		price = tmp;
		data = new int(tmp);
		data1 = new int[10]();
		cout << "Base class is called with pv value:" << price << endl;
	}
	Animal(const Animal & An) {
		data = new int;
		*data = An.data[0];
		price = An.price;
	}
	void func_f() {
		cout << "Base class call function f" << endl;
	}
	void set_data(int num) {
		*data = num;
	}
	void print_data() {
		cout << "data is: " << *data << endl;
	}
	~Animal() {
		delete data;
		delete []data1;
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
	
	cout << endl << endl;
	Animal x(3);
	Animal y(x);
	y.set_data(4);
	x.print_data();
	y.print_data();

	cout << endl << endl;

	/* Test pointer */
	//int a[10] = { 0 , 1, 2 ,3, 4, 5, 6, 7, 8 , 9 };
	char a[10] = { '0' , '1', '2' ,'3', '4', '5', '6', '7', '8' , '9' };
	int *t = new int[10]();
	int i;
	for (i = 0; i < 10; i++) {
		cout << t[i] << " ";
	}
	for (i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}

	int *s;
	s = (int *)(a + 3);
	/*short *s;
	s = (short *)a;*/


	//s = (int*) (a + 2);
	cout << a[1] << endl;
	cout << sizeof(s) << endl;
	cout << *s << endl;

	_getch();
	return 0;

}
