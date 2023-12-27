#include <iostream>
using namespace std;

float money(float myMoney, int days) {
    int weeks = days / 7;
    int holidays = weeks * 2;
    int remainingDays = days - holidays;
    float finalresult = myMoney / remainingDays;
    return finalresult;
}

int main() {

    /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  */

    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150

    return 0;
}