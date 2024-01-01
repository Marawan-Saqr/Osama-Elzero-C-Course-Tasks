#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string param_one, string param_two, string param_three) {
	return param_one + "://" + "www" + "." + param_two + "." + param_three;
}

string createurl(string param_one, string param_two, string param_three, bool check) {
	if (check == true) {
		return param_one + "://" + "www" + "." + param_two + "." + param_three;
	}
	else {
		return param_one + "://" + param_two + "." + param_three;
	}
}

int main()
{
	cout << createurl("https", "elzero", "org") << "\n";           // https://www.elzero.org
	cout << createurl("https", "elzero", "org", false) << "\n";    // https://www.elzero.org
	cout << createurl("http", "learn", "net") << "\n";             // http://www.learn.net
	return 0;
}