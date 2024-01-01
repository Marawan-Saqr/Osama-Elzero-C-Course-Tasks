#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int number_one[], int number_two) {
	int even = 0;
	int odd = 1;
	int total = 0;
	for (int i = 0; i < number_two; i++) {
		if (number_one[i] % 2 == 0) {
			even += number_one[i];
		}
		else {
			odd *= number_one[i];
		}
	}
	return total = even + odd;
}

int main()
{
	int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
	int numssize = size(numbers);
	cout << plusandmultiply(numbers, numssize) << "\n";
	return 0;
}
