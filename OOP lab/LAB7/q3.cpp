#include<iostream>
using namespace std;
class Complex
{
int num1, num2;
 public:
 void accept()
{
cout<<"Enter Two Complex Numbers :\n";
cin>>num1>>num2;
}
friend Complex operator+(Complex c1, Complex c2); 
friend Complex operator*(Complex c1, Complex c2); 
void display()
{
  cout<<num1<<"+"<<num2<<"i"<<"\n";
 }
};
Complex operator+(Complex c1, Complex c2)
{
        Complex c;
        c.num1=c1.num1+c2.num1;
        c.num2=c1.num2+c2.num2;
        return(c);
}
Complex operator*(Complex c1, Complex c2)
{
        Complex c;
        c.num1=c1.num1*c2.num1-c1.num2*c2.num2;
        c.num2=c1.num1*c2.num2+c1.num2*c2.num1;
        return(c);
}

int main()
{
        Complex c1,c2, sum,prod;      
        c1.accept();     
        c2.accept();
        sum = c1+c2;
        prod = c1*c2;
        cout<<"Displaying first complex nos:\n";          
        c1.display();  
        cout<<"Displaying second complex nos:\n";    
        c2.display();
        cout<<"Displaying addition of two complex nos:\n"; 
        sum.display(); 
        cout<<"Displaying multiplication of two complex nos:\n"; 
        prod.display();
      return 0;
}