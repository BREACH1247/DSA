#include<iostream>
#include<queue>
using namespace std;

struct BstNode{
    int data;
    BstNode *left;
    BstNode *right;
};
BstNode* GetNewNode(int data){
    BstNode* newNode = (BstNode*)malloc(sizeof(BstNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
};
BstNode* Insert(BstNode *root,int data){
    if(root == NULL){
        root = GetNewNode(data);
        
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
        
    }else{
        root->right = Insert(root->right,data);
       
    }
    return root;
}

bool Search(BstNode *root,int data){
   
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == data){
       
        return true;
    }else if(data > root->data){
        return Search(root->right,data);
        
    }else{
        return Search(root->left,data);
    }
    
}

int min(BstNode *root){
    if(root == NULL){
        cout<<"Error tree is empty\n";
        return -1;
    }
    BstNode* current = root;
    while(current->left != NULL){
        current = current->left;
    }
    return current->data;
}

int max(BstNode *root){
    if(root == NULL){
        cout<<"Error tree is empty\n";
        return -1;
    }
    BstNode* current = root;
    while(current->right != NULL){
        current = current->right;
    }
    return current->data;
}


int height(BstNode *root){
    if(root == NULL)
        return -1;
    int jod = max(height(root->left),height(root->right)) +1;
    cout<<"height: "<<jod<<endl;
    return max(height(root->left),height(root->right)) +1;
}

void LevelOrder(BstNode *root){
    if(root == NULL) return;
    queue<BstNode*> Q;
    Q.push(root);
    while (!Q.empty())
    {
        BstNode* current = Q.front();
        cout << current->data<<" ";
        if (current->left != NULL)
        {
            Q.push(current->left);
        }
        if (current->right != NULL)
        {
            Q.push(current->right);
        }
        Q.pop();
        
    }
    
}

void Preorder(BstNode *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" "<<endl;
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(BstNode *root){
    if(root == NULL){
        return;
    }
    Preorder(root->left);
    cout<<root->data<<" "<<endl;
    Preorder(root->right);
}

void Postorder(BstNode *root){
    if(root == NULL){
        return;
    }
    Preorder(root->left);
    Preorder(root->right);
    cout<<root->data<<" "<<endl;
}
bool isSubTreeLesser(Node* root,int value){
     if(root == NULL){
        return true;
    }
    if(root->data <= value && isSubTreeLesser(root->left,value)&& isSubTreeLesser(root->right,value)){
        return true;
    }else{
        return false;
    }
}
bool isSubTreeGreater(Node* root,int value){
    if(root == NULL){
        return true;
    }
    if(root->data > value && isSubTreeGreater(root->left,value)&& isSubTreeGreater(root->right,value)){
        return true;
    }else{
        return false;
    }
}
bool IsBST(BstNode *root){
    if(root == NULL){
        return;
    }
    if(isSubTreeLesser(root->left,root->data)&&isSubTreeGreater(root->left,root->data)&&IsBST(root->left)&&IsBST(root->right)){
        return true;
    }else{
        return false;
    }

}
int main(){
    BstNode *root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    root = Insert(root,11);
    Preorder(root);
    Inorder(root);
    Postorder(root);
}