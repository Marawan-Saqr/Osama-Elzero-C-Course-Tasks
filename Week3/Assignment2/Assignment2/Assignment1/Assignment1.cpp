#include <iostream>
using namespace std;

int main() {
    double salary = 5000.98;

    // Calculate the size in bytes
    int bytes = sizeof(salary);
    cout << bytes << " Bytes" << endl;

    // Calculate the size in bits
    int bits = bytes * 8;
    cout << bits << " Bits" << endl;

    return 0;
}



