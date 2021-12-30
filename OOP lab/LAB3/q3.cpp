#include<iostream>
using namespace std;
void absolute(int a);
void absolute(double a);
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    
    absolute(a);
    
}

void absolute(int a){
    if (a > 0)
    {
        cout<<"The absolute value is "<<a<<endl;
    }else if(a < 0){
        a = a*(-1);
        cout<<"The absolute value is "<<a;
    }
    
}
void absolute(double a){
    if (a > 0)
    {
        cout<<"The absolute value is "<<a<<endl;
    }else if(a < 0){
        a = a*(-1);
        cout<<"The absolute value is "<<a;
    }
    
}