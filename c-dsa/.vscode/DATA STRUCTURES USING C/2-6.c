#include<stdio.h>

int main(){
    int mat[4][5],i,j;
    printf("enter the elements of the matrix(%d*%d) row-wise :\n",4,5);
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&mat[i][j]);
        }


    printf("the matric you have entrered is: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%3d",mat[i][j]);
            printf("\n");
        }
        
        
    }
    printf("\n");
        
        

    
    
}