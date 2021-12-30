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

class Cylinder: public Circle
{
    public:
    int h;
    Cylinder()
    {

    }
    Cylinder(int x)
    {
        cout<<"Enter the height of the cylinder : ";
        cin>>h;
        rad = x;
    }
    void volumeCylinder()
    {
        cout<<"Volume of the cylinder = "<<3.14*rad*rad*h<<endl;
    }
};

int main()
{
    Rectangle r(30);
    r.AreaCircle();
    r.areaRectangle();

    Cylinder c(5);
    c.volumeCylinder();
    c.AreaCircle();

    return 0;
}