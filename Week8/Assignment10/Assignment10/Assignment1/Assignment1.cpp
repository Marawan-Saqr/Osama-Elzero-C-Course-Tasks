#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int numbersArray[], int counter) {
    int smallestNumber = INT_MAX;

    for (int i = 0; i < counter; i++) {
        if (numbersArray[i] > 0 && numbersArray[i] < smallestNumber) {
            smallestNumber = numbersArray[i];
        }
    }
    return smallestNumber;
}

int main() {
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
    int numssize = size(numbers);

    int result = minpositive(numbers, numssize);

    if (result == INT_MAX) {
        cout << "No positive numbers found in the array.\n";
    }
    else {
        cout << "Smallest positive number: " << result << "\n";
    }

    return 0;
}

