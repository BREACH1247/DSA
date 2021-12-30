#include <iostream>
using namespace std;
class RectArea;
class Rectangle
{
int length,breadth;
public:
 void input()
 {
 cout<<"Enter length and breadth of rectangle : ";
 cin>>length>>breadth;
 }
friend RectArea;
};
class RectArea
{
int area;
public:
 void cal(Rectangle r1)
 {
area=r1.length*r1.breadth;
 cout<<"The area of rectangle : "<<area<<endl;
 }
};
int main() {
Rectangle r1;
 r1.input();
RectArea a;
 a.cal(r1);
return 0;
}