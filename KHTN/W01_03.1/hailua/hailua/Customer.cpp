#include "Customer.h"

Customer::Customer(string address_tmp, string product_tmp, int quantity_tmp) {
	address = address_tmp;
	product = product_tmp;
	c_quantity = quantity_tmp;
}
void Customer::Customer_info() {
	cout << "Customer need to buy: " << c_quantity << " " << product << " to address: " << address << endl;
}
string Customer::get_customer_address() {
	return address;
}
string Customer::get_customer_product() {
	return product;
}
int Customer::get_p_quantity() {
	return c_quantity;
}