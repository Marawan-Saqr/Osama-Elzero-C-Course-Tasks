#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 102; i++) {
        if (i < 10) {
            cout << 0 << 0 << i << endl;
        }
        else if (i <= 20) {
            cout << 0 << i << endl;
        }
        else {
            i += 79;
            cout << i << endl;
            cout << i + 1 << endl;
            cout << i + 2 << endl;
            break;
        }
    }

    return 0;
}