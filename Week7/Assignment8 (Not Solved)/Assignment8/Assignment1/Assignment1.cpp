#include<iostream>
using namespace std;

int main() {

    int result = 2;
    for (int i = 0; i < 6; ++i) {  
        cout << result << endl;              
        result = result * 2 + 2;   
    }

    return 0;
}
