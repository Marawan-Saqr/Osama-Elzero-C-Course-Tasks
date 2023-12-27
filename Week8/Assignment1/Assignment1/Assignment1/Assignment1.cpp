#include <iostream>
using namespace std;

void calcspecial(int a, int b) {
    if (a == b) {
        cout << a + b << endl;
    }
    else if (a > b) {
        cout << a - b << endl;
    }
    else if (a < b) {
        cout << b - a << endl;
    }
}

int main() {

    calcspecial(40, 40);   // First = Second -> 40 + 40 = 80
    calcspecial(200, 50);  // First > Second -> 200 - 50 = 150
    calcspecial(100, 300); // First < Second -> 300 - 100 = 200

    return 0;
}