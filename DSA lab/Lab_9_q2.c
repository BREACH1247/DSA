#include<stdio.h>
#include<stdlib.h>
struct binary_s_tree
{
    int data;
    struct binary_s_tree *left;
    struct binary_s_tree *right;
};
struct binary_s_tree *root=NULL;

// function for create createnode

struct binary_s_tree *createnode()
{
    struct binary_s_tree *n;
    n=(struct binary_s_tree*)malloc(sizeof(struct binary_s_tree));
    return n;
}

// function insert element into tree

void insert()
{
    struct binary_s_tree *temp,*n;
    n=createnode();
    printf("Enter value\n");
    scanf("%d",&n->data);
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
     root=n;
    else
    {
        temp=root;
        while(temp!=NULL)
        {
            if(temp->data>n->data)
            {
                if(temp->left==NULL)
                {
                  temp->left=n;
                  temp=temp->left;
                }
                temp=temp->left;
            }
            else
            {
                if(temp->right==NULL)
                {
                  temp->right=n;
                  temp=temp->right;
                }
                temp=temp->right;
            }
        }
    
    }
}

// function for preorder traversal

void preorder_traversal(struct binary_s_tree *temp)
{
    if(temp)
    {
        printf("%d ",temp->data);
        preorder_traversal(temp->left);
        preorder_traversal(temp->right);
    }
    
}

// function for post order traversal

void postorder_traversal(struct binary_s_tree *temp)
{
    if(temp)
    {
        
        postorder_traversal(temp->left);
        postorder_traversal(temp->right);
        printf("%d ",temp->data);
    }
    
}

// function for inorder traversal

void inorder_traversal(struct binary_s_tree *temp)
{
    if(temp)
    {
        
        inorder_traversal(temp->left);
         printf("%d ",temp->data);
        inorder_traversal(temp->right);
       
    }
 
}
int main()
{
    int ch;
    printf("1. insert element into tree\n");
    printf("2. preorder traversal\n");
    printf("3. postorder traversal\n");
    printf("4. inorder traversal\n");
    printf("5. exit\n");
    while(1)
    {
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: preorder_traversal(root);
                    break;
            case 3: postorder_traversal(root);
                    break;
            case 4: inorder_traversal(root);
                     break;
            case 5: exit(0);
            default:  printf("Wrong key\n");
        }
    }
    return 0;
}