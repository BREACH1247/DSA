#include <iostream>
using namespace std;

inline int max(int a, int b)
{
	return (a > b ? a : b);
}

int main()
{
int p=4,q=8;


	cout << "maximum between "<<p<<" and "<<q<<"is " <<max(p,q) << endl;
	return 0;
}