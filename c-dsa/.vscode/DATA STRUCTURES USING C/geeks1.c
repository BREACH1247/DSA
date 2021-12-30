#include<stdio.h>
void recursion(int arr[10]);
int main(){
    int i,arr[10],v;
    printf("enter the no of values to be entered: ");
    scanf("%d",&v);
    
    for ( i = 0; i < v; i++)
    {
        printf("enter the values");
        scanf("%d",&arr[i]);
        recursion(arr[10]);
        
    }

    
}

void recursion(int arr[10]){
    int i = 0,j = 0,arr2[10];
    if (arr[i] %2 == 0)
    {
        arr[i] = arr2[j];
        

    }else{
        i++;
        recursion(arr[i]);
    }
    
}