#include<iostream>
using namespace std;
class calculator{
	float a,b,s,d,m,div;
	public:
		void input()
		{
			cout<<"Enter two numbers: ";
			cin>>a>>b;
		}
		void calculate()
		{
			s=a+b;
			m=a*b;
			d=a-b;
			div=a/b;
			try{
				if(b==0)
				throw b;
			}
			catch(float x)
			{
				div=0;
			}
		}
		void out()
		{
			cout<<"sum: "<<s;
			cout<<"\ndivision: "<<div<<"\nMultiplication: "<<m<<"\ndifference: "<<d;
		}
};
int main()
{
	calculator c;
	c.input();
	c.calculate();
	c.out();
}