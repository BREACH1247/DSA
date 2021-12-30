#include<iostream>
using namespace std;
class octal{
    public:
    int integer,decimal;
    octal(int a,int b){
        integer=a;
        decimal=b;
    }
    void add(octal a,octal b,octal c);
    void display(){
        cout<<"\ninteger = "<<integer<<endl;
        cout<<"Decimal = "<<decimal<<endl;
    }
};
void add(octal a,octal b,octal c){
    cout<<"Integer addition = "<<a.integer+b.integer+c.integer<<endl;
    cout<<"decimal addition = "<<a.decimal+b.decimal+c.decimal<<endl;
}

int main(){
    octal a(5,10),b(4,10),c(7,13);
    cout<<"elements are : ";
    a.display();
    b.display();
    c.display();
    cout<<"\nAfter addition :";
     add(a,b,c);
}