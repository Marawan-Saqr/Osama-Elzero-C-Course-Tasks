#include <iostream>
using namespace std;

// Write Your Function Here
int books(int smallTwo, int mediumFour, int largeSix, int areaTwenty) {
	int booksSizes = (smallTwo * 2) + (mediumFour * 4) + (largeSix * 6);
	int areaSizes = areaTwenty * 20;
	int remain = areaSizes - booksSizes;
	if (booksSizes < areaSizes) {
		return remain;
	}
	else {
		return 0;
	}
}

int main()
{
	cout << books(10, 4, 3, 4) << "\n"; // 26
	cout << books(10, 4, 3, 2) << "\n"; // 0
	return 0;
}