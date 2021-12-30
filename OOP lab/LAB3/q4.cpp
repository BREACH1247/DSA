#include<bits/stdc++.h>
using namespace std;


int add(int a,int b)
{
	 int p =a+b;
	return p;
}


int add(int a,int b,int c)
{
	int q =a+b+c;
	return q;
}
int add(int a,int b,int c,int d)
{
	int r =a+b+c+d;
	return r;
}

int main()
{
	

	int add1= add(4,8);
	int add2= add(4,8,5);
    int add3= add(4,8,6,7);
   

	
	cout << "Area of two numbers :" << add1 << endl;
	cout << "area of three numbers :" << add2 << endl;
    cout <<  "area of four numbers :"<<add3<<endl;
	return 0;
}