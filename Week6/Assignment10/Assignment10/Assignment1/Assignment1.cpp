#include <array>
#include <iostream>
using namespace std;

int main()
{
	array <int, 6> nums = { 10, 20, 30, 40, 20, 50 };

	// Method 1
	cout << "Method One" << endl;
	cout << nums[0] << endl;               // 10
	cout << nums[nums.size() - 1] << endl; // 50 => Dynamic


	// Method 2
	cout << "Method Two" << endl;
	cout << nums[2] - nums[1] << endl;        // 10
	cout << nums.at(nums.size() - 1) << endl; // 50 => Dynamic

	// Method Three
	cout << "Method Three" << endl;
	cout << nums.front() << endl;             // 10
	cout << nums.back() << endl;              // 50 => Dynamic

	return 0;
}



