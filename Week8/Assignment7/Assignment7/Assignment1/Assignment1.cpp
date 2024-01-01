#include <iostream>
using namespace std;

int beforeresult(int mainNumber, int count) {
    int result = mainNumber;  
    for (int i = 1; i <= count; i++) {
        result += mainNumber - i;       
    }
    return result;
}

int main() {
    cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
    cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
    return 0;
}
