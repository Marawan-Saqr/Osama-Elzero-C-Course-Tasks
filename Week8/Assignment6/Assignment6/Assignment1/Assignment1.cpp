#include <iostream>
using namespace std;

// Write Your Function Here
string swapping(string names) {
	string result = "";
	int namesLength = size(names);
	for (int i = 0; i < namesLength; i++) {
		if (names[i] == 'H') {
			result += toupper(names[i]);
		}

		else if (names[i] == 'h') {
			result += tolower(names[i]);
		}

		else if (isupper(names[i])) {
			result += tolower(names[i]);
		}

		else {
			result += toupper(names[i]);
		}
	
	}
	return result;
}

int main()
{
	cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
	return 0;
}