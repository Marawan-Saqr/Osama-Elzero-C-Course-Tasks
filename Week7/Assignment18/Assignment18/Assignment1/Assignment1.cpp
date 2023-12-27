#include <iostream>
using namespace std;

int main() {

    // Do Not Edit This Line
    for (int i = 0; i <= 1000; i += 100) 
    {
        // Edit What You Need And Add Your Code
        if (i == 0 || i == 500 || i == 1000) {
            continue;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}