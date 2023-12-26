#include <iostream>
using namespace std;

int main() {

    for (int i = 30; i >= 3; i -= 3) {
        cout << i << endl;
    }

    cout << "========================" << endl;

    for (int j = 30; j >= 3; j -= 3) {
        if (j % 2 != 0) {
            cout << j << endl;
        }
        else {
            continue;
        }
    }


    return 0;
}
