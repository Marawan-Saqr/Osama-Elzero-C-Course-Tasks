#include<iostream>
using namespace std;

int main() {
    
    // Friends Array
    string friends[] = { "Ahmed", "Mohamed", "ameer", "Ashraf", "Amany" };
    int friendsLength = sizeof(friends) / sizeof(friends[0]);

    for (int i = 0; i < friendsLength; i++) {
        if (friends[i][0] == 'A') {
            cout << friends[i] << endl;
        }
        else {
            continue;
        }
    }

    cout << "============================================" << endl;

    int j = 0;
    while (j < friendsLength) {
        if (friends[j][0] == 'A') {
            cout << friends[j] << endl;
            j++;
        }
        else {
            j++;
            continue;
        }
    }

    return 0;
}
