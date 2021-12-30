#include<stdio.h>

int main()
{
    int size=0, K=0, c=0, top=0;
    printf("Enter the size of Queue: ");
    scanf("%d", &size);
    int queue[size];
    reRun:
    printf("Enter the number of first K integers you want to be reversed: ");
    scanf("%d", &K);
    if (K>size)
    {
        printf("K cannot be greater than the size of Queue! Please re-enter the value of K.\n\n");
        goto reRun;
    }

    printf("Input elements of queue...\n\n");
    for(int i=size-1; i>=0; i--)
    {
        if(i>=10 && i<20)
        {
            printf("Enter the %dth element of Queue: ", i+1);
        }
        else
        printf("Enter the %d%s element of Queue: ", (i+1), ((i+1)%10==1)?"st":(((i+1)%10==2)? "nd": (((i+1)%10==3)?"rd":"th")));
        scanf("%d", &queue[i]);
        top++;
    }
    printf("\noriginal queue\nFront\n\n");

    for(int i=size-1; i>=0; i--)
        printf("%d\n", queue[i]);
    printf("\nRear\n");
    int stack[K], temp_queue[size-K];
    for(int i=0; i<K; i++)
    {
        stack[i]=queue[size-i-1];      //dequeing elements of the queue, pushing into stack
 //       queue[size-i-1]=queue[size-i-2];
        top--;
    }

    for(int i=0; i<size-1; i++)
    {
        queue[size-i-1]=queue[size-i-2];
    }
    for(int i=0; i<K; i++)
    {
        queue[i]=stack[i];         //enqueing the elements from stack back into the queue
        top++;
    }
    for(int i=size-1; i>=K;i--)
    {
        temp_queue[c]=queue[i]; //  dequeing elements of the queue, enq into a temp queue
        c++;
        top--;
    }
    for(int i=0; i<size-K; i++)
    {
        queue[i]=temp_queue[i];
        top++;
    }
    //printing the queue out
    printf("\nFront\n\n");
    for(int i=size-1; i>=0; i--)
        printf("%d\n", queue[i]);
    printf("\nRear\n");

    
}