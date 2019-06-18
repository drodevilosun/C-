#pragma once
#include <iostream>
#include <string>

using namespace std;
class Product {
private:
	string item;
	string origin;
	string MFG;
	string EXP;
	int quantity;
	int price;
public:
	Product();
	//Product(string n);
	//Product(string n, int p);
	//Product(string n, int p, int q);
	Product(string n, int p, int q, string origin_tmp, string MFG_tmp, string EXP_tmp);
	void Print_all_product();
	string get_name_product();
	int get_price();
	int get_quantity();
	
};