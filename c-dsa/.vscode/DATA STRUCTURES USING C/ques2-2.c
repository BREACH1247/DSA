#include<stdio.h>

int main(){
    int i, arr[10]={2,1,3,4,8,7,4,6,8,2};
    int small,large;
    
    small = large = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (small>arr[i])
        {
            small=arr[i];
        }
        if (large<arr[i])
        {
            large=arr[i];
        }
        printf("smallest on: %d and largest no is: %d",small,large);
    }
    

}