#include "Product.h"

using namespace std;

Product::Product() {
	item = "";
	origin = "";
	MFG = "";
	EXP = "";
	quantity = 0;
	price = 0;
}
//Product::Product(string name_tmp) {
//	item = name_tmp;
//}
Product::Product(string name_tmp, int price_tmp, int quantity_tmp, string origin_tmp, string MFG_tmp, string EXP_tmp) {
	item = name_tmp;
	price = price_tmp;
	quantity = quantity_tmp;
	origin = origin_tmp;
	MFG = MFG_tmp;
	EXP = EXP_tmp;
}
void Product::Print_all_product() {
	cout << "Product: " << item << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity:" << quantity << endl;
	cout << "Origin: " << origin << endl;
	cout << "MFG: " << MFG << endl;
	cout << "EXP: " << EXP << endl;
}
string Product::get_name_product() {
	return item;
}
int Product::get_price() {
	return price;
}
int Product::get_quantity() {
	return quantity;
}




