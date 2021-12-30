#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define max 10

typedef struct polynomial
{
    int coeff[max];
    int expo;
} poly;

void insert(poly *p)
{
    int i;
    printf("Enter the maximum degree : ");
    scanf("%d", &p->expo);
    if (p->expo > max)
    {
        printf("Error! Degree out of range . . . .");
        return;
    }
    printf("\nEnter the coefficient of respective exponent : \n");
    for (i = 0; i <= p->expo; i++)
    {
        printf("%d exponent : ", i);
        scanf("%d", &p->coeff[i]);
    }
    printf("\nResultant polynomial : \n");
    printf("\nCoefficient\tExponent");
    for (i = 0; i <= p->expo; i++)
    {
        printf("\n%d\t\t%d", p->coeff[i], i);
    }
}

void display(poly *p)
{
    printf("\nCoefficient\tExponent");
    int i;
    for (i = 0; i <= p->expo; i++)
    {
        printf("\n%d\t%d", p->coeff[i], i);
    }
}

int max_num(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void addition(poly *p1, poly *p2)
{
    poly *p3;
    p3 = (poly *)malloc(sizeof(poly));
    int i;
    p3->expo = max_num(p1->expo, p2->expo);
    for (i = p3->expo; i >= 0; i--)
    {
        p3->coeff[i] = p1->coeff[i] + p2->coeff[i];
    }
    display(p3);
}

int main()
{
    int ch;

    poly *ptr;
    ptr = (poly *)malloc(sizeof(poly));

    printf("\nChoice : \n");
    printf("Enter:\n1 for insertion\n2 for deletion\n3 for addition\n4 for exit\n");
    printf("\nChoice : ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        insert(ptr);
    }
    else if (ch == 2)
    {
        display(ptr);
    }
    else if (ch == 3)
    {
        poly *ptr1;
        poly *ptr2;
        ptr1 = (poly *)malloc(sizeof(poly));
        ptr2 = (poly *)malloc(sizeof(poly));
        printf("Enter the 1st polynomial : \n");
        insert(ptr1);
        printf("\nEnter the 2nd polynomial : \n");
        insert(ptr2);

        addition(ptr1, ptr2);
    }
    else if (ch == 4)
    {
        exit(0);
    }
    else
        printf("Wrong choice");
    return 0;
}