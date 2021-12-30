#include <stdio.h>

void num_of_prime(int x, int y)
{
    int c = 0, p = 0;
    while (x != y)
    {
        int c = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                c++;
            }
        }

        if (c == 2)
        {
            p++;
        }

        x++;
    }
    printf("Total Number of prime number :- %d", p);
}
int main()
{
    int roll_no, a, b;
    printf("Enter your roll num:- ");
    scanf("%d", &roll_no);
    a = roll_no % 10 + 10;
    b = roll_no % 100 + 20;
    num_of_prime(a, b);

    return 0;
}