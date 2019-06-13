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
	Product(string n, int p, int q, string MFG_tmp, string EXP_tmp);
	void Print_all_product();
	void Total_bill();
};