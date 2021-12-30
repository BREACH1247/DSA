#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
   
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
        p = p -> link;
    }
    
}

void count(struct node *start){
    struct node *p;
    int cnt = 0;
    
    p = start;
    while (p != NULL)
    {
        printf("the value of the following link is: %d",p -> info);
        p = p -> link;
        cnt ++;
    }
    printf("the number of elements in the linked list are: %d",cnt);
}

void search(struct node *start,int data){
    struct node *p = start;
    int pos = 1;
    while (p != NULL)
    {
        if (p ->info == data)
        {
            printf("the data is found at pos: %d",pos);
        }
        p = p->link;
        pos ++;
        else{
            printf("the item is not found in the linked list");
        }
    }
}

struct node *addatbeg(struct node *start,int data){
    struct node *tmp;
    tmp ->link = start;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp ->info = data;
    start = tmp;
    return start;
}

struct node *addatend(struct node *start,int data){
    struct node *p,*tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while (p->link != NULL)
    {
        p = p->link;
    }
    p ->link = tmp;
    tmp ->link = NULL;
    return start;
    
}

struct node *addatafter(struct node *start,int data,int item){
    struct node *p,*tmp;
    p = start;
    while (p->link != NULL)
    {
        if (p->info == item)
        {
            tmp = (struct node *)malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link= p->link;
            p->link = tmp;
            return start;


        }
            p = p-> link;
        else{
            printf("%d not in the list",item);
            return start;
        }
    }
    
}


struct node addatbefore(struct node *start,int data,int item){
    struct node *p,*tmp;
    if (start == NULL)
    {
        printf("list is empty.\n");
    }

    if (item == start->info)
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = start;
        start = tmp;
        return start;
    }
    p = start;
    while (p->link != NULL)
    {
        if (p->link->info == item)
     {
         tmp = (struct node *)malloc(sizeof(struct node));
            tmp->info = data;
         tmp->link = p->link;
         p->link = tmp;
         return start;
     }
     p= p->link;
    }
     else{
            printf("%d not in the list",item);
            return start;
        }
    

}

struct node *addatpos(struct node *start,int data,int position){
    struct node *tmp,*p;
    int i;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    if (pos==1)
    {
        tmp->link = start;
        start = tmp;
        return start;
    }
    p = start;
    for ( i = 1; i < pos-1 && pos!=NULL; i++)
    {
        p = p->link;
        if (p==NULL)
        {
            printf("there are less elements than %d elements.\n",pos);

        }else{
            tmp->link=p->link;
            p->link= tmp;
            
        }
        
    }
    return start;
    
}

struct node *create_list(struct node *start){
    int i,n,data;
    printf("enter the number of nodes: ");
    scanf("%d",&n);
    if (n==0)
    {
        return start;
    }
    printf("enter the element to be inserted:");
    scanf("%d",&data);
    start = addatbeg(start,data);
    for ( i = 2; i <=n; i++)
    {
        printf("enter the element to be inserted: ");
        scanf("%d",&data);
        start = addatend(start,data);

    }
    return start;
    

    
}

struct node *del(struct node *start,int data){
    struct node *p,*tmp;
    if (start == NULL)
    {
        printf("the list is empty");
        return start;
    }
    if (start->info = data)
    {
        tmp = start;
        start = start->link;
        free(tmp);
        return start;

    }
    p = start;
    while (p->link != NULL)
    {
        if(p->link->info == data){
            tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return start;
        }
        p = p->link;
    }
    printf("%d element not found",data);
    return start;

    
    
}

struct node *rev(struct node *start){
    struct node *prev,*ptr,*next;
    prev = NULL;
    ptr = start;
    while (ptr != NULL)
    {
        next = ptr->link;
        ptr->link=prev;
        prev = ptr;
        ptr = next;
        
    }
    prev = start;
    return start;
    
}