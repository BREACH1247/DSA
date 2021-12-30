
#include<stdio.h>
 
int top, n;

int pop(int stack[n])
{                            
    if(top !=-1)             
    {
        stack[top]='\0';
        top--;
    }
    else{
        printf("\nStack is empty, ERROR!");
    }

}

int main()
{
    int ticker=0;
    scanf("%d", &n); 
    int stack[n];
    top = -1;
    
    for (int i = n-1; i >=0 ; i--)
    {
        scanf("%d", &stack[i]); 
        top++;
    }
    int x;
    scanf("%d", &x); 
    for (int i = 0 ; i<n ; i++)
    {
        if(stack[i] != x)
        {
            pop(stack);
            ticker++;  
        }
        else
            break;
    }
    
    if(n >ticker)
        printf("%d", ticker);
        
    else
        printf("number not found");

}