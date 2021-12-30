#include<stdio.h>

void valve(int val[]);
int main(){
    int i,arr[10]={1,2,3,4,5,6,7,8,9,10};
    valve(arr);
    printf("enter the elements of the array: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
        
    }
}    
void valve(int val[]){
    int sum=0,i;
    for ( i = 0; i < 10; i++)
    {
        val[i]=val[i]*val[i];
         sum += val[i];
    }
    printf("the sum of squares of array is: %d",sum);
        
 }
    
    

