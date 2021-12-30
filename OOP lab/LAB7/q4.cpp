#include<iostream>
using namespace std;
class num{
	int a,b,c ;
	public:
	num(){   // default constructor
	a=0;b=0;c=0;
	}
	num(int j, int k, int m)  // parameterized constructor
	{
	a=j ; b=k; c=m;
	}
void show(){
cout << "A="<<a<<"\t"<<"B="<<b<<"\t"<<"C="<<c<<"\n";
}
friend num operator ++(num x)
{
	x.a=++x.a;
	x.b=++x.b;
	x.c=++x.c;
	return x;
}
friend num operator --(num x)
{
	x.a=--x.a;
	x.b=--x.b;
	x.c=--x.c;
	return x;
}
};

int main()
{
	num obj1(2,3,4),obj2;
	cout<<"The Output Before Operator Overloading:\n";
	obj1.show();
	obj2=++obj1;
	cout<<"The Output After Operator(++) Overloading:\n";
	 obj2.show();
	 obj2=--obj1;
	cout<<"The Output After Operator(--) Overloading:\n";
	 obj2.show();
	return 0;
}
