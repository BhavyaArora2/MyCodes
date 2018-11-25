#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

node *head=NULL;

void newNode(int data){
    node *temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->data=data;
    if (head==NULL){
        head=temp;
    }
    else{
        temp->next=head;

        head=temp;

    }
}


    //  node *p,*q;

    //  if (p->next==NULL){
    //      return;
    //  }
    //  p=head;
    //  q=p->next;


    //  if(q->next==NULL){
    //      return;
    //  }
    //  q=reverse(q);
    //  p->next->next=p;
    //  p->next=NULL;
    // //  return q;
    // node *cur=q;
    // while(cur!=NULL){
    //     printf("%d ",cur->data);
    //     cur=cur->next;
    // }
    void reverse(node **head){
    node *cur=head;
    node *temp=NULL;
    node* prev=NULL;

    while(cur!=NULL){
      temp=cur->next;
      cur->next=prev;
      prev=cur;
      cur=temp;
    //   printf("%d %d ",cur->data,prev->data);
    }
    head=prev;

   }

  void printList(int *start){
    node *cur=start;
    while(cur!=NULL){
        printf("%d ",cur->data);
        cur=cur->next;
    }
}

int main(void) {
	// your code goes here
	//reverse the linked
	newNode(3);
	newNode(2);
	newNode(1);
	reverse(&head);
    printList(head);
	return 0;
}
