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

    Rectangle()
    {

    }
    
    void areaRectangle()
    {
        cout<<"Area of the rectangle = "<<len*len<<endl;
    }
};

class Box: public Rectangle
{
    public:
    Box(int x)
    {
        len = x;
        rad = x;
    }
    Box()
    {

    }
    void vol()
    {
        cout<<"Volume of the box = "<<len*len*len<<endl;
    }
};

int main()
{
    
    Box b(3);
    b.AreaCircle();
    b.areaRectangle();
    b.vol();

    return 0;
}