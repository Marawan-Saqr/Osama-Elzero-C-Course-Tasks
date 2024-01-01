#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name_one, string name_two = "") {
	if (name_two == "Male") {
		return "Hello Mr " + name_one;
	}
	else if (name_two == "Female") {
		return "Hello Miss " + name_one;
	}
	else if (name_two == "") {
		return "Hello " + name_one;
	}
}

int main()
{
	cout << greeting("Osama", "Male") << "\n";   // Hello Mr Osama
	cout << greeting("Eman", "Female") << "\n";  // Hello Miss Eman
	cout << greeting("Sameh") << "\n";           // Hello Sameh
	
	return 0;
}