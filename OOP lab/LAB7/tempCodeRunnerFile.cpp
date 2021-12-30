#include <bits/stdc++.h>
using namespace std;

#define ll long long

class demo
{
public:
    int a, a1;
    demo()
    {
    }
    demo(int x, int y)
    {
        a = x, a1 = y;
    }

    void operator+(int x)
    {
        a += x;
        a1 += x;
    }

    void display()
    {
        cout << "a = " << a << "\na1 = " << a1 << endl;
    }
};

int main()
{
    demo d(4, 5);
    int a = d.a;
    int a1 = d.a1;
    cout << "Before increment :\n";
    d.display();

    d + 10;

    cout << "After increment :\n";
    d.display();
    return 0;
}