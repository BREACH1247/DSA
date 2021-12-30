#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <ctype.h>
typedef struct Linked
{
    int info;
    struct Linked *next;
} link;
void crlink(link *ptr)
{
    int i = 1, ch;
    ptr->next = NULL;
    printf("Enter the value of the %d node", i);
    scanf("%d", &ptr->info);
    ++i;
    printf("Enter 1 if you want to continue inputting");
    scanf("%d", &ch);
    while (ch == 1)
    {
        ptr->next = (link *)malloc(sizeof(link));
        if (ptr->next == NULL)
        {
            printf("Out of memory Space");
            exit(0);
        }
        ptr = ptr->next;
        printf("Enter the value of %d node", i);
        scanf("%d", &ptr->info);
        ptr->next = NULL;
        ++i;
        printf("Enter 1 if you want to continue inputting");
        scanf("%d", &ch);
    }
}
void displaylink(link *ptr)
{
    int i = 1;
    link *curr;
    curr = ptr;
    while (curr != NULL)
    {
        printf("The information in the node %d : %d \n", i, curr->info);
        curr = curr->next;
        ++i;
    }
}
void linkinsertion(link *ptr)
{
    link *head;
    head = (link *)malloc(sizeof(link));
    if (head == NULL)
    {
        printf("Out of memory space");
        exit(0);
    }
    head->next = ptr;
    printf("Enter the value of node which is to be inserted");
    scanf("%d", &head->info);
    ptr = head;
}
void deletelist(link *ptr)
{
    int i, loc = 1;
    link *curr, *prev;
    curr = (link *)malloc(sizeof(link));
    printf("Enter the location you want the deletion");
    scanf("%d", &i);
    if (curr == NULL)
    {
        printf("Out Of Memory Space");
        exit(0);
    }
    curr = ptr;
    if (i == 0)
    {
        ptr = ptr->next;
        free(curr);
        exit(0);
    }
    while (curr != NULL && loc < i)
    {
        prev = curr;
        curr = curr->next;
        ++loc;
    }
    if (curr == NULL)
    {
        printf("Location Not found");
        exit(0);
    }
    prev->next = curr->next;
    free(curr);
}
int main()
{
    int k, flag = 0;
    int ch;
    link *snode;
    crlink(snode);
    while (flag != 1)
    {
        printf("Press 1 for Insertion at First Place \n Press 2 for Full Traversal \n Press 3 for Deletion at Choice Location \n Press any other number to Exit the Process \n ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            linkinsertion(snode);
            displaylink(snode);
            break;
        }
        case 2:
        {
            displaylink(snode);
            break;
        }
        case 3:
        {
            deletelist(snode);
            displaylink(snode);
            break;
        }
        default:
        {
            printf("Quitting");
            flag = 1;
            break;
        }
        }
    }
    return (0);
}