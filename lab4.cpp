#include<iostream>

int main()
{
    int a[5],i, big=0, small=0,temp=0,pos1=0,pos2=0;

    

    printf("\nEnter the 5 elements of the array: \n");
    for(i = 0; i < 5; i++)
    scanf("%d", &a[i]);

    big = a[0];
    
    for(i = 1; i < 5; i++)
    {
        if(big < a[i])   
        {
            big = a[i]; 
            pos1 = i;
        }
    }
    

    small = a[0];  
    for(i = 1; i < 5; i++)
    {
        if(small>a[i])   
        {
            small = a[i]; 
            pos2 = i;  
        }
    }

    temp = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = temp;
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    };
    
    
    return 0;
}