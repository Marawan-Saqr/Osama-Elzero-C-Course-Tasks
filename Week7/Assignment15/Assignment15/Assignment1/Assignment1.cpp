#include <iostream>
using namespace std;

int main() {

    int help_num = 4;
    int nums[] = { 2, 4, 5, 6, 10 };
    int numsLength = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < numsLength; i++) {
        if (i == 0) {
            cout << nums[i] + nums[numsLength - 1] << endl;
        }
        else if (i == 1) {
            cout << nums[i] + nums[numsLength - 2] << endl;
        }
        else if (i == 2) {
            cout << nums[i] + nums[i] << endl;
        }
        else if (i == 3) {
            cout << nums[i] + help_num << endl;
        }
        else {
            cout << (nums[i] - (help_num + help_num)) + nums[i] << endl;
        }
    }

    cout << "===========================================" << endl;

    // Another Solution
    for (int i = 0; i < numsLength; i++) {
        int oppositeIndex = numsLength - 1 - i;
        cout << nums[i] << " + " << nums[oppositeIndex] << " = " << nums[i] + nums[oppositeIndex] << endl;
    }


    return 0;
}