#include "Seller.h"

Sell::Sell() {
	cout << "Wellcome to hailua.com.vn" << endl;
}
void Sell::print_product(Product p) {
	cout << "We sell this product:" << endl;
	p.Print_all_product();
}

void Sell::intro()
{
	cout << "My product was on website hailua.com.vn" << endl;
	cout << "You can buy it on website or contact with me for more information" << endl;
}

int Sell::sell_compare(Product p, Customer c) {
	string p_product, c_product;
	int p_quantity, c_quantity;
	p_product = p.get_name_product();
	c_product = c.get_customer_product();
	p_quantity = p.get_quantity();
	c_quantity = c.get_p_quantity();
	if (p_product != c_product)
		//cout << "We don't have this product!" << endl;
		return 0;
	else if (c_quantity > p_quantity)
		//cout << "We only have " << p_quantity << " " << "for this " << p_product << endl;
		return 0;
	else
		return 1;
}

void Sell::ship(Customer c) {
	string c_product = c.get_customer_product();
	int c_quantity = c.get_p_quantity();
	cout << "Shipping product " << c_quantity << " " << c_product << "to address: " << c.get_customer_address << endl;
}

void Sell::Total_bill(Customer c) {
	string c_product = c.get_customer_product();
	int c_quantity = c.get_p_quantity();
	cout << "Customer need to pay for" << c_quantity << " " << c_product << endl;
}