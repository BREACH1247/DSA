#include <stdio.h>
#include <stdlib.h>

typedef struct polynomial
{
  int coef;
  int expo1;
  int expo2;
  struct polynomial *next;
} poly;

poly *create_poly(poly *);
poly *insert_poly_node(poly *, int, int, int);
poly *add_poly(poly *, poly *);
void show_poly(poly *);

int main()
{
  poly *poly1, *poly2, *poly3;

  poly1= NULL;
  poly2= NULL;
  poly3= NULL;

  printf("Create 1st polynomial:\n");
  poly1= create_poly(poly1);
  printf("\nDisplay the 1st polynomial:\n");
  show_poly(poly1);

  printf("\nCreate 2nd polynomial:\n");
  poly2= create_poly(poly2);
  printf("\nDisplay the 2nd polynomial:\n");
  show_poly(poly2);

  poly3= add_poly(poly1, poly2);
  printf("\nAdditon of two polynomial is:\n");
  show_poly(poly3);

  return 0;
}

poly *create_poly(poly *start)
{
  int i, n, co, ex1, ex2;
  printf("Enter number of terms for polynomial: ");
  scanf("%d", &n);
  for (i=1; i<=n; i++)
  {
    printf("\nFor term %d:\n", i);
    printf("Enter coeficient: ");
    scanf("%d", &co);
    printf("Enter exponent of variable x: ");
    scanf("%d", &ex1);
    printf("Enter exponent of variable y: ");
    scanf("%d", &ex2);
    start= insert_poly_node(start, co, ex1, ex2);
  }
  return (start);
}

poly *insert_poly_node(poly *start, int co, int ex1, int ex2)
{
  poly *ptr, *temp;
  temp = (poly *)malloc(sizeof(poly));
  temp->coef= co;
  temp->expo1= ex1;
  temp->expo2= ex2;
  temp->next= NULL;

  if (start == NULL)
  start= temp;
  else
  {
    ptr= start;
    while (ptr->next != NULL)
    ptr= ptr->next;
    ptr->next= temp;
  }
  return (start);
}

poly *add_poly(poly *p1, poly *p2)
{
  poly *p3= NULL;
  if (p1==NULL && p2==NULL)
  return p3;

  poly *t1, *t2, *t3, *t4;
  t1=p1; t2=p2; t3=p1; t4=p2;

  while (p1!=NULL)
  {
    int count=0;
    p2=t2;
    jump1:
    if (p1->expo1==p2->expo1 && p1->expo2==p2->expo2)
    {
      p3= insert_poly_node(p3, p1->coef + p2->coef, p1->expo1, p1->expo2);
      count++;
    }
    p2=  p2->next;
    while (p2!=NULL)
    goto jump1;
    if (count==0)
    p3= insert_poly_node(p3, p1->coef, p1->expo1, p1->expo2);
    p1= p1->next;
  }

  p1=t1; p2=t4;
  while (p2!=NULL)
  {
    int count=0;
    p1=t3;
    jump2:
    if (p1->expo1==p2->expo1 && p1->expo2==p2->expo2)
    {
      //p3= insert_poly_node(p3, p1->coef + p2->coef, p1->expo1, p1->expo2);
      count++;
    }
    p1=  p1->next;
    while (p1!=NULL)
    goto jump2;
    if (count==0)
    p3= insert_poly_node(p3, p2->coef, p2->expo1, p2->expo2);
    p2= p2->next;
  }

  return p3;
}

void show_poly(poly *ptr)
{
  if (ptr == NULL)
  {
    printf("Empty\n");
    return;
  }
  while (ptr->next != NULL)
  {
    printf("%dx^(%d)y^(%d) + ", ptr->coef, ptr->expo1, ptr->expo2);
    ptr = ptr->next;
  }
  printf("%dx^(%d)y^(%d)", ptr->coef, ptr->expo1, ptr->expo2);
  printf("\n");
}
