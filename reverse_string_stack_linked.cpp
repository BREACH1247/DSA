#include<iostream>
#include<stack>
using namespace std;
struct node{
    int info;
    struct node *link;
}*top = NULL;
void push(int item);
int pop();
void Reverse(char *C,int n);


int main(){
    int choice,item;
     char C[51];
     cout<<"Enter a string: ";
     gets(C);
     Reverse(C,strlen(C));
    while(1){
        cout <<"1.Push";
        cout << "2.Pop";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout<<"Enter the item to be pushed: ";
                cin>>item;
                push(item);
                break;
            case 2:
                item = pop();
                cout<<"Popped item is : "<<item;
                break;
            case 3:
                exit(1);
            default:
                cout<<"Wrong choice\n";

        }
    }
}

void push(int item) {
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL)
    {
        printf("Stack Overflow");
        return;
    }
    tmp->info = item;
    tmp->link = top;
    top = tmp;
    
}

int pop() {
    struct node *tmp;
    int item;
    tmp = top;
    item = tmp->info;
    top = top->link;
    free(tmp);
    return item;

}

void Reverse(char *C,int n){
    stack<char> S;
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }

    for(int i=0;i<n;i++){
        C[i] = S.top();
        S.pop();
    }
}