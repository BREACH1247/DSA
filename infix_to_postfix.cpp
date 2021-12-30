#include<iostream>
#include<cmath>
#include<stack>
#include<cstring>
using namespace std;

bool isoperator(char c){
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return true;
    }else{
        return false;
    }
    
}

bool isoperand(char c){
    if (c >= '0' || c <= '9')
    {
        return true;
    }else{
        return false;
    }
    
}

int precedence(char op){
    if (op == '+' || op == '-')
    {
        return 1;
    }else if(op = '*' || op == '/'){
        return 2;
    }else if(op == '^'){
        return 3;
    }else{
        return 0;
    }
    
}

bool eql(char op1 , char op2){
int p1 = precedence(op1);  
int p2 = precedence(op2);  
if (p1 == p2)  
{  
    if (op1 == '^' )  
return false;  
return true;  
}else{
    return  (p1>p2 ? true : false);
}
}

string convert(string infix){
stack <char>S;  
string  postfix = "";
char ch;


for(int i = 0; i<infix.length(); i++)  
{  
ch = infix[i];  
  
if(ch == ' ')  
continue;  
else if(ch == '(')  
S.push(ch);  
else if(isoperand(ch)){  
    postfix += ch;
}  
else if(isoperator(ch))  
{  
    while(!S.empty() && eql(S.top(), ch))  
{  
    postfix += S.top();  
    S.pop();  
}  
S.push(ch);  
}  
else if(ch == ')')  
{  
    while(!S.empty() && S.top() != '(')  
    {  
        postfix += S.top();  
        S.pop();  
    }  
S.pop();  
}  
return postfix;
}  

return postfix;
}

int main(){
    string infix,postfix;
    cout<<"Enter the infix string: ";
    cin >> infix;
    postfix = convert(infix);
    cout<<"your postfix expression is: "<<postfix;
    return 0;
}