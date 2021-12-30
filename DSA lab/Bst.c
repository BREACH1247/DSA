#include <stdio.h>
#include <stdlib.h>
int heightnode = -1;
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;
struct node *getnewnode(int data)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->right = NULL;
    newnode->left = NULL;
    newnode->data = data;
    return newnode;
}
struct node *insert(struct node *bstroot, int data)
{
    if (bstroot == NULL)
    {
        bstroot = getnewnode(data);
    }
    else if (data <= bstroot->data)
    {
        bstroot->left = insert(bstroot->left, data);
    }
    else
    {
        bstroot->right = insert(bstroot->right, data);
    }
    return bstroot;
}
int max(int l, int r)
{
    if (l > r)
    {
        return l;
    }
    return r;
}
int findheight(struct node *node)
{
    int right, left;
    printf("we are at %d\n", node->data);
    if (node->right == NULL && node->left == NULL)
    {
        return 0;
    }
    if (node->right != NULL)
    {
        right = findheight(node->right);
    }
    else{
        right = -1;
    }
    if (node->left != NULL)
    {
        left = findheight(node->left);
    }
    else{
        left = -1;
    }
    
    return max(left, right) + 1;
}
int searchbst(struct node *node, int data)
{
    if (node->data == data)
    {
        printf("%d is found!\n", node->data);
        heightnode = findheight(node);
        return 1;

    }
    else if (node->right == NULL && node->left == NULL)
    {
        printf("%d was not found!\n", data);
        return -1;
    }
    else if (node->data < data)
    {
        searchbst(node->right, data);
    }
    else
    {
        searchbst(node->left, data);
    }
}


int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int val;
        scanf("%d", &val);
        if (i == 0)
        {
            root = insert(root, val);
        }
        else
        {
            insert(root, val);
        }
    }
    
   
    int rootheight = findheight(root);
    printf("enter the number that you wish to search: ");
    scanf("%d", &num);
    searchbst(root, num);
    printf("depth of node is %d", rootheight-heightnode);
}