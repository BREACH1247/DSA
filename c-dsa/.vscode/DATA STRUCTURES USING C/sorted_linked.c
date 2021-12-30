#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};
struct node *insert_s(struct node *start, int data);
void selection(struct node *start);
void bubble(struct node *start);

int main(){
    int choice,data;
    struct node *start = NULL;
    while (1)
    {
        printf("1.Insert\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element you want to insert");
                scanf("%d",&data);
                start = insert_s(start,data);
                break;
            case 2:
                exit(1);
        }
    }
    
}

struct node *insert_s(struct node *start,int data){
    struct node *p,*tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    if (start == NULL || data<start->info)
    {
        tmp->link = start;
        start = tmp;
        return start;
    }
    else{
        p = start;
        while (p->link != NULL && p->link->info < data){
            p  = p->link;
            tmp->link = p->link;
            p->link = tmp;
            
        }
    }
return start;

}

void selection(struct node *start){
    struct node *p,*q;
    int tmp;
    for (p = start; p != NULL; p = p->link)
    {
        for (q = p->link; q != NULL; q = q->link){
            if (p->info > q->info){
                tmp  = p->info;
                p->info = q->info;
                q->info = tmp;
            }
        }
    }
    
}

void bubble(struct node *start){
    struct node *q,*p,*end;
    int  tmp;
    for(end = NULL;end != start->link;end=q){
        for(p= start;p->link != end;p=p->link){
            q = p->link;
            if (p->info > q->info)
            {
                tmp = p->info;
                p->info = q->info;
                q->info = tmp;
            }
            

        }
    }
}