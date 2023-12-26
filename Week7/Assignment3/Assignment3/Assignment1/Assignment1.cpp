#include <iostream>
using namespace std;
int main()
{

	int number_one;
	int number_two;

	cout << "Please Enter Number One" << endl;
	cin >> number_one;
	cout << "Please Enter Number Two" << endl;
	cin >> number_two;

	if (number_one - number_two == 1 || number_one - number_two == -1) {
		cout << "Empty" << endl;
	}

	 else if (number_one < number_two) {
		for (int i = number_one; i < number_two; i++) {
			if (i == number_one || i == number_two) {
				continue;
			}

			if (i % 2 == 0) {
				continue;
			}

			cout << "Your Result is : " << i << endl;
		}
	}

	

	else if (number_one > number_two) {

		for (int i = number_one; i > number_two; i--) {
			if (i == number_one || i == number_two) {
				continue;
			}

			if (i % 2 == 0) {
				continue;
			}

			cout << "Your Result is : " << i << endl;
		}
	}

	else if (number_one == number_two) {
		cout << "Error You Cant Enter Two Numbers Are The Same Value" << endl;
	}	

	return 0;
}