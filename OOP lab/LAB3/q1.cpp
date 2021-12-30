#include<iostream>
using namespace std;
void FUN_AREA(int length);
void FUN_AREA(int radius);


int main(){
    int a;
    
    cout<<"Enter the length: ";
    cin>>a;
    
   

    FUN_AREA(a);
    
    
}

void FUN_AREA(int length){
    int area = 3.14*length*length;
    cout<<area<<endl;
}
void FUN_AREA(double radius){
    int volume_of_sphere= (4/3)*radius*radius*radius*3.14;
    cout<<volume_of_sphere<<endl;
}

