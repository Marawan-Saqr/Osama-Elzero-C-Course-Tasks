#include <iostream>
using namespace std;

int main() {


    // For Loop
    for (int i = 10; i <= 100000000; i *= 10) {
        if (i == 1000 || i == 100000 || i == 1000000 || i == 10000000) {
            continue;
        }
        cout << i << endl;
    }

    cout << "==========================" << endl;

    // While Loop
    int j = 10;
    while (j <= 100000000) {
        if (j == 1000 || j == 100000 || j == 1000000 || j == 10000000) {
            j *= 10;
            continue;
        }
        cout << j << endl;
        j *= 10;
    }

    return 0;
}