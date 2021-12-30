#include <iostream>
using namespace std;
inline int even_odd(int n)
{
  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";
   return 0;
}
int main()
{
    int a;

    cout << "Enter an integer: ";
    cin >> a;
    even_odd(a);

    return 0;
}