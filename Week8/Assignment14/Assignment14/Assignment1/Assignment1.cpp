#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int number_one, int number_two, string operatorMark = "") {
	if (operatorMark == "a") {
		return number_one + number_two;
	}
	else if (operatorMark == "s" || operatorMark == "substract") {
		return number_one - number_two;
	}
	else if (operatorMark == "m" || operatorMark == "multiply") {
		return number_one * number_two;
	}
	else if (operatorMark == "Invalid") {
		return 0;
	}
	else if (operatorMark == "") {
		return number_one + number_two;
	}
	
}

int main()
{
	cout << calculate(10, 20) << "\n";              // "" => 30
	cout << calculate(10, 20, "a") << "\n";         // add => 30
	cout << calculate(10, 20, "s") << "\n";         // substract => -10
	cout << calculate(10, 20, "substract") << "\n"; // substract => -10
	cout << calculate(10, 20, "multiply") << "\n";  // multiply => 200
	cout << calculate(10, 20, "m") << "\n";         // multiply => 200
	cout << calculate(10, 20, "Invalid") << "\n";   // 0
	return 0;
}