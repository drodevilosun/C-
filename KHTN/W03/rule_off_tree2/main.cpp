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
	void func_n() {
		cout << "Base class call function f" << endl;
	}
};
class Teo :public Animal {
public:
	Teo(int tmp2):Animal(tmp2){
		Animal::func_n();
		cout << "Derive class is called with value:" << tmp2 << endl;
	}
	Teo() :Animal() {
		cout << "hehe" << endl;
	}
	void func_f(){
		cout << "Derive class call function f" << endl;
	}
};

//void Function_X(Animal tt) {
//	tt.func_f();
//}

int main() {
	Teo Long(10);
	//Function_X(Long);

	_getch();
	return 0;

}