#include<stdio.h>
int main(){
    int a,b;
    a = 87;
    b = 36;
    int *p1 = &a;
    int *p2 = &b;
    printf("the integer value of a is %p\n",&p1);
    printf("the value of a is %d %d %d",a,*p1,*(&a));


}