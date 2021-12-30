#include<iostream>
using namespace std;
class triangle
{
	int base,height;
	public:
	void getdata()
	{
	
	cout<<"enter base of triangle: ";
	cin>>base;
	cout<<"enter height of triangle: ";
	cin>>height;
	}
	void areatrin()
	{
	float area=0.5*base*height;
	cout<<"area of triangle is: "<<area;
	}
	};
int main()
{
triangle t1;
t1.getdata();
t1.areatrin();
return 0;
}