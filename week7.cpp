#include <iostream>
#include <string>
using namespace std;

string Converter(double amount) {
	string moneyAmount = to_string(amount);

	size_t Decimal = moneyAmount.find('.');

	string Shortinteger = moneyAmount.substr(0, Decimal);



	for (int i = Shortinteger.size() - 3; i > 0; i -= 3) {
	
	
		Shortinteger.insert(i,",");
	
	}

	if (amount >= 0){
	Shortinteger = "$" + Shortinteger;
	
	
	}
	else {
		Shortinteger = Shortinteger.substr(0, 1) +  "$"  + Shortinteger.substr(2);
	
	
	}


	Shortinteger += moneyAmount.substr(Decimal);
		
	return Shortinteger;
}




int main() {

	cout << "Student Name: Jacob Kyeyune \n";
	cout << "Student ID: 900875857 \n \n";
	double number;

	cout << "Please enter a  12-digit (maximum) double precision number: ";
	cin >> number;

	string numberString = to_string(number);
	size_t Decimal = numberString.find('.');
	size_t Digits = Decimal;
	if (number < 0) {
	
		Digits--;
	}
	else if (Digits > 12) {
		cout << "\n Error: The number you have inputted exceeds 12 digits. \n";
	
		cin.get();
		cin.ignore();
		return 1;
	}

	string FormattedNumber = Converter(number);
	cout << "\nThe formatted number is " << FormattedNumber << ".";
	cin.get();
	cin.ignore();
		return 0;




}