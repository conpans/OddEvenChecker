#include "std_lib_facilities.h"
int main()
{
	int value;

	cout << "Please enter an integer value: ";
	cin >> value;

	if (value % 2 == 0) { // % is the modulus operator; it gives the remainder of the division
		cout << "The value " << value << " is an even number." << "\n";
	}
	else {
		cout << "The value " << value << " is an odd number." << "\n";
	}
}