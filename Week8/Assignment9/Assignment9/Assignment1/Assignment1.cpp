#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int number_one[], int number_two, int number_three) {
	int result = 0;
	for (int i = 0; i < number_two; i++) {
		if (number_one[i] == number_three) {
			continue;
		}
		else {
			result += number_one[i];
		}
	}
	return result;
}

int main()
{
	int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
	int numssize = size(numbers); // 8
	int noneed = 13;
	cout << sumall(numbers, numssize, noneed) << "\n";
	return 0;
}
