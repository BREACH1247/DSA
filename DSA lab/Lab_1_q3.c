#include <stdio.h>
#include <string.h>
int price()
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   price;
};
 
int main( ) {

   struct Books Book1;        
   struct Books Book2;
   struct Books Book3;
   struct Books Book4;
   struct Books Book5;        
 
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.price = 60;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.price = 70;
 
   /* book 3 specification */
   strcpy( Book3.title, "C Programming");
   strcpy( Book3.author, "Nuha Ali"); 
   strcpy( Book3.subject, "C Programming Tutorial");
   Book3.price = 80;

   /* book 4 specification */
   strcpy( Book4.title, "C Programming");
   strcpy( Book4.author, "Nuha Ali"); 
   strcpy( Book4.subject, "C Programming Tutorial");
   Book4.price = 90;

   /* book 5 specification */
   strcpy( Book5.title, "C Programming");
   strcpy( Book5.author, "Nuha Ali"); 
   strcpy( Book5.subject, "C Programming Tutorial");
   Book5.price = 100;
   

   return 0;
}