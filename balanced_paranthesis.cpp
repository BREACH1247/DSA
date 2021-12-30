#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

void Paran(char *C,int n){
    stack<char>S;
    for (int i = 0; i < n; i++)
    {
        if (C[i] == '{' || C[i] == '[' || C[i] == '(')
        {
            S.push(C[i]);
        }
        
    }
    
}

int main(){
 char C[51];
 printf("Enter the string: ");
 gets(C);
 Paran(C,strlen(C));
 cout<<"Output: "<<C;

}