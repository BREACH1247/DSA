#include <stdio.h>

int distance(int c, int n[], int *a, int *b)
{
    int pos_a = 0, pos_b = 0, check_a = 0, check_b = 0;
    int stop_a = 0, stop_b = 0;
    for (int i = 0; i < c; i++)
    {
        if (n[i] == *a && stop_a == 0)
        {
            pos_a = i;
            stop_a = 1;
        }
        if (n[i] == *b && stop_b == 0)
        {
            pos_b = i;
            stop_b = 1;
        }
        if (n[i] != *a)
        {
            check_a++;
        }
        if (n[i] != *b)
        {
            check_b++;
        }
    }
    int ans = 0;
    if (check_a == c || check_b == c)
    {
        ans = -1;
    }
    else
    {
        if (pos_a > pos_b)
        {
            ans = pos_a - pos_b;
        }
        if (pos_b > pos_a)
        {
            ans = pos_b - pos_a;
        }
    }

    return ans;
}

int main()
{
    int a, b, c;
    printf("Enter the limit : ");
    scanf("%d", &c);
    int n[c];
    printf("Enter the list of numbers : ");
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("\nEnter the two digits : ");
    scanf("%d %d", &a, &b);

    int ans = distance(c, n, &a, &b);
    if (ans != -1)
    {
        printf("Answer : %d", ans);
    }

    else
    {
        printf("Error");
    }
    return 0;
}
