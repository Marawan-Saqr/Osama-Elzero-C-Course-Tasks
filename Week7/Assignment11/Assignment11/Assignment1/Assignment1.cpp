#include <iostream>
using namespace std;

int main() {

    // Friends Array
    string friends[] = { "Ahmed", "Osama", "Ameer" };
    int friendsLength = sizeof(friends) / sizeof(friends[0]);

    for (int i = 0; i < friendsLength; i++) {
        cout << "=========" << endl;
        cout << "=" << friends[i] << "=" << endl; 
        cout << "=========" << endl;

        for (char ch : friends[i]) {
            cout << ch << ",";
        }

        cout << endl;
    }

    return 0;
}
