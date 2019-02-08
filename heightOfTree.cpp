#include<iostream>
using namespace std;

struct trees{
    int data;
    struct trees *left;
    struct trees *right;
};

typedef struct trees tree;

tree *root=NULL;

int inorder(tree *root){
    if(root==NULL)
        return 0;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
    return 0;
}
int heightOfTree(tree *root){
    if(root!=NULL)
      {
    int left=heightOfTree(root->left);
    int right=heightOfTree(root->right);
    return(max(left,right)+1);
      }
      return 0;
}


tree *create_node(int data){
    tree *newNode=(tree *)malloc(sizeof(tree ));
    newNode->left=newNode->right=NULL;
    newNode->data=data;
    return newNode;
}

tree *insert(tree *root,int data)
{
    if(root==NULL)
        return create_node(data);
    if(root->data>data)
        root->left=insert(root->left,data);
    else if(root->data<data)
        root->right=insert(root->right,data);
    return root;
}

int main()
{
    int res;
   root=insert(root,5);
   insert(root,4);
   insert(root,6);
   insert(root,8);
   insert(root,9);
   insert(root,1);
   insert(root,5);
   inorder(root);
   res=heightOfTree(root);
   cout<< res<<endl;
   return 0;
}


