#include <stdio.h>
#include <stdlib.h>

struct bst{
    int data;
    struct bst *left;
    struct bst *right;
};

typedef struct bst bst;
bst *root=NULL;

bst *newNode(int data){
    bst *Node=(bst *)malloc(sizeof(bst));
    Node->data=data;
    return Node;
}

bst *insert(int data,bst *root){
    if(root==NULL)
        return newNode(data);
    else if(root!=NULL){
        if(data<root->data)
            root->left=insert(data,root->left);
        else
            root->right=insert(data,root->right);
        }
    
    return root;
}

bst *inorder(bst *root){
    if(root==NULL)
        return 0;
    root->left=inorder(root->left);
    printf("%d\t",root->data);
    root->right=inorder(root->right);
    return 0;    
}

int main()
{   
    
    root=insert(5,root);
    insert(3,root);
    insert(7,root);
    insert(2,root);
    insert(4,root);
    insert(6,root);
    insert(8,root);
    inorder(root);
    
    return 0;
}
