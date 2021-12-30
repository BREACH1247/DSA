#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
   
};
struct node *create_list(struct node *start){}
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addatafter(struct node *start,int data,int item);
struct node *addatbefore(struct node *start,int data,int item);
struct node *addatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);


int main(){
    struct node *start = NULL;
    int choice,data,item,pos;
    while (1)
    {
        printf("1.Create list\n");
        printf("2.Display\n");
        printf("3.Count\n");
        printf("4.Search\n");
        printf("5.Add to empty list/ Add to beginning\n");
        printf("6.Add at end\n");
        printf("7.add after node\n");
        printf("8.Add before node\n");
        printf("9.Add at position\n");
        printf("10.Delete\n");
        printf("11.Reverse\n");
        printf("12.Quit\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            start = create_list(start);
            break;
        case 2:
            display(start);
            break;
        case 3:
            count(start);
            break;
        case 4:
            printf("Enter the element to be searched");
            scanf("%d",&data);
            search(start,data);
            break;
        case 5:
            printf("Enter the element to be inserted");
            scanf("%d",&data);
            start = addatbeg(start,data);
            break;
        case 6:
            printf("Enter the element to be inserted");
            scanf("%d",&data);
            start = addatend(start,data);
            break;
        case 7:
            printf("Enter the element to be inserted: ");
            scanf("%d",&data);
            printf("Enter the element after which to  insert");
            scanf("%d",&item);
            start = addatafter(start,data,item);
            break;
        case 8:
            printf("Enter the element to be inserted: ");
            scanf("%d",&data);
            printf("Enter the element before which to  insert");
            scanf("%d",&item);
            start = addatbefore(start,data,item);
            break;
        case 9:
            printf("Enter the element to be inserted: ");
            scanf("%d",&data);
            printf("Enter the position to insert");
            scanf("%d",&pos);
            start = addatbefore(start,data,pos);
            break;
        case 10:
            printf("Enter the element to be deleted: ");
            scanf("%d",&data);
            start = del(start,data);
            break;
        case 11:
            start = reverse(start);
            break;
        case 12:
            return 0;
        
            
        
        
        default:
            printf("wrong Choice\n");
        }
    }
    

}

void display(struct node *start){
    struct node *p;
    if (start == NULL)
    {
        printf("The list is empty");
    }
    
    p = start;
    while (p != NULL)
    {
        printf("the value of the following link is: %d",p -> info);
        p = next->link;
    }
    
}

struct node *addatbeg(struct node *start,int data){
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->prev=NULL;
    tmp->next=start;
    start->tmp=tmp;
    start=tmp;
    return start;

}

struct node *addatempty(struct node *start,int data){
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->prev=NULL;
    tmp->next=NULL;
    start=tmp;
    return start;

}

struct node *addatend(struct node *start,int data){
    struct node *tmp,*p;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    p=start;
    while(p->next != NULL){
        p = p->next;
        tmp->prev=p;
        p->next=tmp;
        tmp->next=NULL;
        return start;
    }

}

struct node *addatafter(struct node *start,int data,int item){
    struct node *p,*q,*tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while(p!= NULL){
        if (p->info == item)
        {
            tmp->prev = p;
            tmp->next = p->next;
            if (p->next!= NULL)
            {
                p->next->prev=tmp;
                p->next =tmp;
                return start;
            }
            p = p->next;
            

        }
        
    }
    return start;
}

struct node *addbefore(struct node *start,int data,int item){
    struct node *q,*tmp;
    if (start == NULL)
    {
        printf("list is empty")
    }

    if (start->info == item)
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->info =data;
        tmp->prev = NULL;
        tmp->next=start;
        start->prev=tmp;
        start=tmp;
        return start;
    }

    q = start;
    while(q != NULL){
        if (q->info == item)
        {
            tmp = (struct node *)malloc(sizeof(struct node));
            tmp->info =data;
            tmp->prev = q->prev;
            tmp->next=q;
            q->prev->next=tmp;
            q->prev=tmp;
            return start;
        }
        q = q->next;
    }
    
return start;
    
    
}