#include<iostream>
using namespace std;

int main() {

    // Friends Array
    string friends[] = { "Ahmed", "Mohamed", "Sayed", "Gamal" };
    int friendsLength = sizeof(friends) / sizeof(friends[0]);

    // For Loop
    for (int i = 1; i < friendsLength; i++) {
        if (i == 3) {
            continue;
        }
        else {
            cout << friends[i] << endl;
        }
    }

    cout << "=================================" << endl;

    // While Loop
    int j = 1;
    while (j < friendsLength) {
        if (j == 3) {
            j++;
            continue;
        }
        else {
            cout << friends[j] << endl;
            j++;
        }
    }

    return 0;
}
