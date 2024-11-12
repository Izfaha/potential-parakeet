// C++ program to illustrate the use of ternary operator 
#include <iostream> 
using namespace std; 

int main() 
{ 
	double goods, discount;

	cout << "Jumlah barang yang dibeli = "; cin >> goods;

	// Condition
	if (goods <= 2){
	cout << "Anda tidak mendapatkan discount.";
		} else if (goods <= 5) {
			cout << "Anda mendapatkan discount 2%.";
		} else if (goods <= 10) {
			cout << "Anda mendapatkan discount 5%.";
		} else if (goods <= 17) {
			cout << "Anda mendapatkan discount 10%.";
		} else if (goods >= 18) {
			cout << "Anda mendapatkan discount 20%.";
		}
	
	return 0; 
}
