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
Product::Product(string name_tmp, int price_tmp, int quantity_tmp, string MFG_tmp, string EXP_tmp) {
	item = name_tmp;
	price = price_tmp;
	quantity = quantity_tmp;
	MFG = MFG_tmp;
	EXP = EXP_tmp;
}
void Product::Print_all_product() {
	cout << "Product: " << item << endl;
	cout << "Price: " << price << endl;
}

