#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
void Reverse(char *C,int n){
    stack<char>S;
    //for push
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }
    //for pull
    for(int i=0;i<n;i++){
        C[i] = S.top();
        S.pop();
    }

}

int main(){
    char C[51];
    cout<<"Enter the String ";
    gets(C);
    Reverse(C,strlen(C));
    cout<<"Output: "<<C;
}