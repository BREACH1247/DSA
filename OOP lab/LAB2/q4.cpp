#include <stdio.h>
 
void swap_by_value(int x, int y);
void swap_by_reference(int *x, int *y);
void swap_by_address(int *x, int *y);
 
int main () {

 
   int a = 100;
   int b = 200;
   
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
 
   
   swap_by_value(a, b);
   
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );

   swap_by_reference(&a,&b);

   printf("After swap by refrence, value of a : %d\n", a );
   printf("After swap by refrence, value of b : %d\n", b );

   swap_by_address(&a,&b);

   printf("After swap by address, value of a : %d\n", a );
   printf("After swap by address, value of b : %d\n", b );

   return 0;
}
void swap_by_value(int x, int y) {

   int temp;

   temp = x; 
   x = y;    
   y = temp; 
  
   return;
}

void swap_by_reference(int *x, int *y) {

   int temp;

   temp = *x; 
   *x = *y;    
   *y = temp; 
  
   return;
}

void swap_by_address(int *x, int *y) {

   int temp;
   

   temp = *x; 
   *x = *y;    
   *y = temp; 
  
   return;
}



