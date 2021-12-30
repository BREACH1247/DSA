#include <stdio.h>

struct employee
{
    int empid;
    char ename[50];
    int age;
    float salary;
};

int main()
{
    struct employee e1;
    char temp;
    printf("Enter the id : ");
    scanf("%d", &e1.empid);

    printf("Enter the name : ");
    scanf("%c", &temp);
    scanf("%[^\n]", &e1.ename);

    printf("\nEnter the age : ");
    scanf("%d", &e1.age);

    printf("Enter the salary : ");
    scanf("%f", &e1.salary);

    printf("Details of the Employee : \n");
    printf("ID : %d", e1.empid);
    printf("\nName : %s", e1.ename);
    printf("\nAge : %d", e1.age);
    printf("\nSalary : %.4f", e1.salary);
    return 0;
}