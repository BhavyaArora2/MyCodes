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
void RemoveDuplicate(node *head){
    // node *ptr1, *ptr2, *dup;
    // ptr1 = start;

    // /* Pick elements one by one */
    // while (ptr1 != NULL && ptr1->next != NULL)
    // {
    //     ptr2 = ptr1;

    //     /* Compare the picked element with rest
    //       of the elements */
    //     while (ptr2->next != NULL)
    //     {
    //         /* If duplicate then delete it */
    //         if (ptr1->data == ptr2->next->data)
    //         {
    //             /* sequence of steps is important here */
    //             dup = ptr2->next;
    //             ptr2->next = ptr2->next->next;
    //             free(dup);
    //         }
    //         else /* This is tricky */
    //             ptr2 = ptr2->next;
    //     }
    //     ptr1 = ptr1->next;

    //mine

    node *ptr1=head;
    while(ptr1!=NULL && ptr1->next != NULL){
    node *ptr2=ptr1;
        while(ptr2->next!=NULL){
            if((ptr1->data) == (ptr2->next->data)){
                node *dup=ptr2->next;
                ptr2->next=ptr2->next->next;
                free(dup);
            }
            else{
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
     }
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
	newNode(2);
	newNode(3);
	newNode(4);
	newNode(6);
	newNode(3);
	newNode(2);
	newNode(4);
	printList(head);
    RemoveDuplicate(head);
    printList(head);

	return 0;
}
