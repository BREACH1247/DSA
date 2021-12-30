#include<iostream>
using namespace std;
void FUN_AREA(int length);
void FUN_AREA(int length,int breadth);
void FUN_AREA(int length,int breadth,int height);
void FUN_AREA();

int main(){
    int a,b,c;
    cout<<"Enter the length: ";
    cin>>a;
    cout<<"Enter the breadth: ";
    cin>>b;
    cout<<"Enter the height: ";
    cin>>c;

    FUN_AREA(a);
    FUN_AREA(a,b);
    FUN_AREA(a,b,c);
}

void FUN_AREA(int length){
    int area = 3.14*length*length;
    cout<<area<<endl;
}
void FUN_AREA(int length,int breadth){
    int area_of_rectangle= length*breadth;
    cout<<area_of_rectangle<<endl;
}
void FUN_AREA(int length,int breadth,int height){
    int volume_of_rectangle= length*breadth*height;
    cout<<volume_of_rectangle<<endl;
}
void FUN_AREA(){
    cout<<"No values entered"<<endl;
}