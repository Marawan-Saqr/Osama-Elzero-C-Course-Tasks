#include <iostream>
using namespace std;

int main() {
    
    int year;
    cout << "Please Enter Year From Those (1982, 1998, 1995, 2000, 2002)" << endl;
    cin >> year;

    switch (year) {
    case 1982:
        cout << "My Birth Day" << endl;
        break;
    case 1992:
        cout << "My First Work" << endl;
        break;
    case 1995:
        cout << "Windows 95" << endl;
        break;
    case 2000:
        cout << "Windows Millennium" << endl;
        break;
    case 2002:
        cout << "Created My vBulletin Forum" << endl;
        break;
    default:
        cout << "No Events in This Year" << endl;
    }

    return 0;
}



