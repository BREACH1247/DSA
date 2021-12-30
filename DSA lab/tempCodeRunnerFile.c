#include <stdio.h>
#include <malloc.h>
typedef struct node
{
int priority;
int data;
struct node *next;
} NODE;
NODE *front = NULL, *rear = NULL;
void insert(int data, int pri)
{
NODE *temp, *q;
temp = (NODE *)malloc(sizeof(NODE));
temp->data = data;
temp->priority = pri;
if (front == NULL || pri < front->priority)
{
temp->next = front;
front = temp;
}
else
{
q = front;
while (q->next != NULL && q->next->priority <= pri)
q = q->next;
temp->next = q->next;
q->next = temp;
}
}
void del()
{
NODE *temp;
if (front == NULL)
printf("Queue Underflow\n");
else
{
temp = front;
printf("Deleted item is %d\n", temp->data);
front = front->next;
free(temp);
}
}
void display()
{
NODE *ptr;
ptr = front;
if (front == NULL)
printf("Queue is empty\n");
else
{
printf("Queue is :\n");
printf("Priority Item\n\n");
while (ptr != NULL)
{
printf("%5d %5d\n", ptr->priority, ptr->data);
ptr = ptr->next;
}
}
printf("\n");
}
int main(){
int choice, data, priority;
do
{
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Quit\n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter the data: : ");
scanf("%d", &data);
printf("Enter its priority : ");
scanf("%d", &priority);
insert(data, priority);
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("Wrong choice\n");
}
} while (choice != 4);
return 0;
}