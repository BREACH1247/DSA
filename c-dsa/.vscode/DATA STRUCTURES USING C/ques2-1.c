#include<stdio.h>
 int main(){
     int dis[5];
     int i;
     for ( i = 0; i < 5; i++)
     {
        printf("enter the elements of the array \n");
        scanf("%d",&dis[i]);
     }
     printf("the elements are: \n");
     for ( i = 0; i < 5; i++)
     {
        printf(" %d",dis[i]);
     }
     
     
   return 0;
 }