#include <iostream>
#include <string>
using namespace std;

	const float USD_CURRENCY = 1;
	const float Php_CURRENCY = 54;
int main (){
	string user;
	float userInput;
	float totalCurrency;
	
	cout << "1. USD tp Php\n" << "2. Php to USD\n" << "3. Exit\n";
	cin >> user;
	if (user == "1"){
		cout << "Enter the amount: ";
		cin >> userInput;
		totalCurrency = userInput * Php_CURRENCY;
	}
	else if (user =="2") {
		cout << "Enter the amount: ";
		cin >> userInput;
		totalCurrency = userInput * Php_CURRENCY;
	}
	else {
		cout << "Exit\n";
		return 0;
	}
	
	cout << totalCurrency << endl;
	return 0;
	
}

