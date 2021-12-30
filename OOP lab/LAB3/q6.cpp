#include <iostream>
using namespace std;

inline int sqr(int a)
{
	return a*a;
}

int main()
{
int p=4;


	cout << "square of number "<<p<<" is  "<<sqr(p) << endl;
	return 0;
}