#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;
    switch (num) {
    case 10:
        cout << "Case 1" << endl;
        break;
    case 20:
        cout << "Case 2" << endl;
        break;
    case 30:
    case 31:
    case 32:
        cout << "Case 3" << endl;
    default:
        cout << "Invalid Number" << endl;
    }

    return 0;
}