#include <bits/stdc++.h>
using namespace std;


#define ll long long

class Circle
{
    public:
    int rad;

    Circle(int x)
    {
        rad = x;
    }
    Circle()
    {
        
    }
    void AreaCircle()
    {
        cout<<"Area of the circle = "<<(3.14*rad*rad)<<endl;
    }
};

class Rectangle : public Circle
{
    public:
    int len;
    Rectangle(int x)
    {
        rad = x; 
        len = rad;   
    }
    
    void areaRectangle()
    {
        cout<<"Area of the rectangle = "<<len*len<<endl;
    }
};

int main()
{
    
    Rectangle r(3);
    r.AreaCircle();
    r.areaRectangle();

    return 0;
}