#include <iostream>
using namespace std;

double avg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return double(sum) / size;
}

int main() {
    int money[] = { 10, 20, 15, 25, 30, 35 };
    int monsize = sizeof(money) / sizeof(money[0]);
    cout << avg(money, monsize) << "\n"; // 22.5
    return 0;
}
