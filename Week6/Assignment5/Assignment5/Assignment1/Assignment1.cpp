#include <iostream>
using namespace std;

int main() {
    
    // Example 1
    int vals[] = { 100, 200, 600, 200, 100 };
    if (vals[0] == vals[4] && vals[1] == vals[3]) {
        cout << "Array One Is Palindrome" << endl;
    }
    else {
        cout << "Array One Is Not Palindrome" << endl;
    }
    
    // Example 2
    int vals_two[] = { 100, 200, 200, 100 };
    if (vals_two[0] == vals_two[3] && vals_two[1] == vals_two[2]) {
        cout << "Array Two Is Palindrome" << endl;
    }
    else {
        cout << "Array Two Is Not Palindrome" << endl;
    }

    // Example 3
    int vals_three[] = { 100, 300, 600, 200, 100 };
    if (vals_three[0] == vals_three[4] && vals_three[1] == vals_three[3]) {
        cout << "Array Three Is Palindrome" << endl;
    }
    else {
        cout << "Array Three Is Not Palindrome" << endl;
    }


    return 0;
}



