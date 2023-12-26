#include <iostream>
using namespace std;

int main() {
    
    // For Loop
    for (int i = 0; i < 11; i++) {
        cout << "For Loop " << i << endl;
    }

    cout << "==========================" << endl;

    // While Loop
    int j = 0;
    while (j < 11) {
        cout << "While Loop " << j << endl;
        j++;
    }

    cout << "==========================" << endl;

    // Do - While Loop
    int k = 0;
    do {
        cout << "Do - While Loop " << k << endl;
        k++;
    } while (k < 11);

    return 0;
}



