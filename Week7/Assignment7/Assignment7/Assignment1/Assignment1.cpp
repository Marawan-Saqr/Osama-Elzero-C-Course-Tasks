#include <iostream>
using namespace std;

int main() {


    // For Loop
    for (int i = 2; i <= 128; i *= 2) {
        cout << i << endl;
    }

    cout << "================================" << endl;

    //While Loop
    int j = 2;
    while (j <= 128) {
        cout << j << endl;
        j *= 2;
    }

    return 0;
}