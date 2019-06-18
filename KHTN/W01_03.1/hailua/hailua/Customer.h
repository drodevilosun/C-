#pragma once
#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
	string address;
	string product;
	int c_quantity;
public:
	Customer(string address_tmp, string product_tmp, int quantity_tmp);
	void Customer_info();
	string get_customer_address();
	string get_customer_product();
	int get_p_quantity();


};