#include <iostream>
using namespace std;
class class_2;
class class_1
{
int x;
public:
 void input()
 {
 cout<<"Enter value of x : ";
 cin>>x;
 }
friend void swap(class_1,class_2);
};
class class_2
{
int y;
public:
 void input()
 {
 cout<<"Enter value of y : ";
 cin>>y;
 }
friend void swap(class_1,class_2);
};
void swap(class_1 e,class_2 f)
{
int temp;
temp=e.x;
e.x=f.y;
f.y=temp;
cout<<"after swapping value of x in class_1 = "<<e.x<<endl;
cout<<"after swapping value of y in class_2 = "<<f.y<<endl;
}
int main() {
class_1 e;
 e.input();
class_2 f;
 f.input();
swap(e,f);
return 0;
}