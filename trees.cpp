#include<stdio.h>
#include<stdlib.h>

struct treeNode{
	int data;
	struct treeNode *left;
	struct treeNode *right;
};

typedef struct treeNode tree;

tree *root= NULL;


void newNode(int data){
	tree *temp=(tree*)malloc(sizeof(tree)); 
	tree *cur=NULL;
	tree *parent=NULL;
	
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL){
		root=temp;
	}
	
	
	else{
		cur=root;
	    
		while(1){
			parent=cur;
			if(parent->data>data){
				cur=cur->left;
				if(cur==NULL){
					parent->left=temp;
					return;
				}
			}
			else{
				cur=cur->right;
				if(cur==NULL){
					parent->right=temp;
					return;
				}
			}
		}
		
	}
	
}


tree* search(int data){
	tree *current=root;
	  while(current->data != data){
	
      if(current != NULL) {
         printf("%d ",current->data);
			
         //go to left tree
         if(current->data > data){
            current = current->left;
         }  //else go to right tree
         else {                
            current = current->right;
         }
			
         //not found
         if(current == NULL){
            return NULL;
         }
      }			
   }

   return current;
}
//	tree* parent=NULL;
//	tree *cur=root;
//	if(root==NULL){
//		printf("Nothing to display,sad part");
//	}
//	else{
//		while(cur!=NULL){
//			parent=cur;
//			if( (cur->data) > data){
//				cur=cur->left;	
//				if(cur->data==data){
//					printf("search found");
//					return;
//				}
//			}
//			else{
//				cur=cur->right;
//				if(cur->data==data){
//					printf("search found");
//					return;
//				}
//			}	
//		}
//		if(cur==NULL){
//			printf("search failed,sad part");
//		}
//		
//	}

void Inorder(tree* node)
{
	
	tree* cur=node;
	if(node==NULL){
		return;
	}
	
	
	Inorder(cur->left);
	printf("%d",cur->data);
	Inorder(cur->right);


}

int main(){
	newNode(2);
	newNode(3);
	newNode(1);
	newNode(4);
	
	
	printf("root is: %d",root->data);
	printf("root-left is: %d",root->left->data);
	printf("root-right is: %d",root->right->data);
	printf("--------------");
	search(9);
	printf("\ninoder");
	Inorder(root);

}
