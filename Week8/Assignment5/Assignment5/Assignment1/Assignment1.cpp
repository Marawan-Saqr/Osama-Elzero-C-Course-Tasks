#include <iostream>
#include <cmath>
using namespace std;

// First Method
void thepower(int number, int power) {
	int result = 1;
	for (int i = 0; i < power; i++) {
		result *= number;
	}
	cout << result << endl;
}

// Second Method
void thepower(double number2, int power) {
	cout << pow(number2, power) << endl;
}


int main()
{
	cout << "Result Coming From The First" << endl;
	thepower(2, 5); // 32
	cout << "Result Coming From The Second" << endl;
	thepower(2, 5); // 32

	return 0;
}