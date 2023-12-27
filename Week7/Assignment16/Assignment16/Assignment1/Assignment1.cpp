#include <iostream>
using namespace std;

int main() {

    int index = 10;
    int jump = 2;

    for (;;)
    {
        if (index >= jump + jump) {
            cout << index << endl;
            index -= jump;
        }
        else {
            break;
        }
    }

    return 0;
}