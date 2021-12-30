
#include<stdio.h>
int main()
{
    struct data{
        int roll_no, age;
        float cgpa;
        char first_name[256], last_name[256];
    }students[5];

    for(int i=0; i<3; i++)
    {
        printf("Enter Details of Student %d\n", i+1);
        printf("Enter Name -> ");
        scanf("%s%s", students[i].first_name, students[i].last_name);
        printf("Enter Age-> ");
        scanf("%d", &students[i].age);
        printf("Enter Roll Number-> ");
        scanf("%d", &students[i].roll_no);
        printf("Enter CGPA-> ");
        scanf("%f", &students[i].cgpa);
    }

    for(int i=0; i<3
    ; i++)
    {
        printf("\tDetails->\nStudent %d\n\n", i+1);
        printf("Name: %s %s\n", students[i].first_name, students[i].last_name);
        printf("Age: %d\n", students[i].age);
        printf("Roll Number; %d\n", students[i].roll_no);
        printf("CGPA %0.2f\n", students[i].cgpa);
    }
    return 0;
}