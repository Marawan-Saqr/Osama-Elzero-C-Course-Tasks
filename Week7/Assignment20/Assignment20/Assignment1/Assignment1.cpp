#include <iostream>
using namespace std;

int main() {

    string names[] = { "Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa" };
    int namesLength = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < namesLength; i++) {
        if (names[i].size() == 5) {
            cout << names[i] << endl;
        }
        else {
            continue;
        }
    }


    return 0;
}
