#include<stdio.h>

int main(){
  int i,j,arr1[2][3]={{3,4,5},{8,9,7}};
  int arr2[2][3]={{4,4,4},{5,5,5}};
  int arr3[2][3];
  for ( i = 0; i < 2; i++)
  {
      for ( j = 0; j < 3; j++)
      {
         arr3[i][j] = arr1[i][j]+arr2[i][j];
          printf("the sum of the arrays are: \n");
         for ( i = 0; i < 2; i++)
         {
             for ( j = 0; j < 3; j++)
             {
                printf("%d",arr3[i][j]);
                printf("\n");
             }
             
         }
         
        
      }
      
      
  }
  return 0;
  

}