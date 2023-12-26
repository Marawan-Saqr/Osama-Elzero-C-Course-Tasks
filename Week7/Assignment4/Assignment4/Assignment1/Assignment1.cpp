#include <iostream>
using namespace std;
int main()
{

	// For Loop
	for (int i = 0; i <= 18; i+= 2) {
		if (i == 10 || i == 12) {
			continue;
		}
		else {
			cout << i << endl;
		}
	}

	cout << "==================================" << endl;

	// While Loop
	int j = 0;
	while (j <= 18) {
		if (j == 10 || j == 12) {
			j += 2;
			continue;
		}
		cout << j << endl;
		j += 2;
	}

	return 0;
}