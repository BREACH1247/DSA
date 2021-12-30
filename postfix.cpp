#include<iostream>
#include<stack>
#include<cstring>
#include<cmath>
using namespace std;
int string_to_int(char ch){
    int value ; 
    value = ch;
    return int(value - '0');
}

int isoperator(char ch){
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
    {
        return 1;
    }else{
        return -1;
    }
    
}

int isoperand(char ch){
    if (ch >= '0' && ch <= '9')
    {
        return 1;
    }else{
        return -1;
    }
}
int operation(int a,int b,char op){
    if (op == '+')
    {
        return a+b;
    }
    else if (op == '-')
    {
        return a-b;
    }
    else if (op == '*')
    {
        return a*b;
    }
    else if (op == '/')
    {
        return a/b;
    }
    else if (op == '^')
    {
        return pow(a,b);
    }else{
        return 1;
    }
    
    
}

char postfix_eval(char *C,int n){
    int a , b;
    stack<char>S;
    for (int i = 0; i < n-1; i++)
    {
        if (isoperator(C[i]) != -1)
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(operation(a,b,C[i]));
        }else if (isoperand(C[i] > 0)){}
        {
            S.push(string_to_int(C[i]));
        }
        return S.top();
        
        
    }
    cout << "The result is: "<<S.top() << endl;
    
}
    

int main(){
    char C[51];
    cout<<"Enter the string: ";
    gets(C);
    
    postfix_eval(C,strlen(C));
   



}