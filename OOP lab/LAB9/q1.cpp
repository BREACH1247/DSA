#include <iostream>
#include <vector>

int main() {
	std::vector<int> vec = { 3, 1, 4, 1, 5 };
	
	vec[0] = 4; // arr is now: { 4, 1, 4, 1, 5 }
	
	//vec[5] = 9; // Undefined behavior: index ouf of bounds
	             // (No bounds checking was done here)
	try
	{
		vec.at(5) = 9; // use at() function to access elemebnt
	}
	catch (...)
	{
		std::cout << "Out-of-bounds exception captured!\n";
	}
	
	
	return 0;
}