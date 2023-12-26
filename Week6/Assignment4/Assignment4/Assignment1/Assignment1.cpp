#include <iostream>
using namespace std;

int main() {
    
    
    
    int vals[]{ 100, 200, 250, 400, 200 };

    if (vals[0] + vals[4] > vals[2]) {
        cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
    }
    else if (vals[1] + vals[3] > vals[2]) {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
    }
    else {
        cout << "Middle Number Is The Largest" << endl;
    }




    return 0;
}



