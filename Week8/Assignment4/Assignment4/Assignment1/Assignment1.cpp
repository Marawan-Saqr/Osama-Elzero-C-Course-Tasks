#include <iostream>
using namespace std;

// Main Function
int calculation(int number_one, int number_two, int number_three) {
	return number_one + number_two + number_three;
}

// Function Overloading
int calculation(int number_one, int number_two) {
	int power = 2;
	return (number_one + number_two) * 2;
}

// Function Overloading
int calculation(int number_one) {
	int power = 200;
	return number_one + power;
}

int main()
{
	

	cout << calculation(50, 100, 150) << endl; // 300
	cout << calculation(100, 50) << endl;      // 300
	cout << calculation(100) << endl;          // 300

	return 0;
}