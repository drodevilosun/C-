#pragma once
#include "Product.h"
#include "Customer.h"
using namespace std;
class Sell {

public:
	Sell();
	void print_product(Product p);
	void intro();
	int sell_compare(Product p, Customer c);
	void ship(Customer c);
	void Total_bill(Customer c);
};