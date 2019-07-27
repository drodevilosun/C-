#include <iostream>
#include <string>
#include "Seller.h"
#include "Product.h"
#include "Customer.h"
#include <conio.h>

int main()
{
	Product p_coconut("Coconut", 5, 10, "Ben Tre", "2019", "2020");
	Product p_banana("Banana", 2, 30, "Ben Tre", "2019", "2020");
	Sell S;
	S.print_product(p_coconut);
	S.print_product(p_banana);
	string customer_product;
	int customer_quantity;
	int cus_count = 2;
	int pro_count = 2;
	int re;
	
	cout << "What you want to buy?" << endl;
	cin >> customer_product;
	cout << "How many " << customer_product << " do you wana buy?" << endl;
	cin >> customer_quantity;
	Customer cus1("01 West Washington", customer_product, customer_quantity);
	Customer cus2("127 West New York", "Banana", 10);
	cus1.Customer_info();
	cus2.Customer_info();

<<<<<<< HEAD
	re = S.sell_compare(p_coconut, cus1);
	if (re == 1){
		cout << "OK we will ship to your address" << endl;
		S.ship(cus1);
	}
	
	re = S.sell_compare(p_banana, cus2);
	if (re == 1) {
		cout << "OK we will ship to your address" << endl;
		S.ship(cus2);
	}
	
=======
	/*for (int i = 0; i < cus_count; i++) {
		for (int j = 0; j < pro_count; j++) {
			S.sell_compare(p_coconut, );
		}
	}*/

>>>>>>> f3727100214000dd0dcce667022d3333a62cd893
	_getch();
	return 0;
}