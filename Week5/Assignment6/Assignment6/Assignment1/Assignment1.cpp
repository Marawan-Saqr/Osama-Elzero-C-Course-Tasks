#include <iostream>
using namespace std;

int main() {
    
    int age = 40;
    int points = 100;

    if (sizeof(age) == 4 && age > 18 && points > 50) {
        cout << "Age Data Is 4 Bytes" << endl;
        cout << "Age Is Ok" << endl;
        cout << "Points Is Ok" << endl;
    }    
   
    return 0;
}



