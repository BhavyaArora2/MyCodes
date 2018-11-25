#include <stdio.h>
#include <stdlib.h>


	struct node{
	  int data;
	  struct node* next;
	};

	struct node* head=NULL;

void insert_Node(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));

    temp->data=data;
    temp->next =head;
    head=temp;
}
void delete(){
    struct node* cur=head;
    head=head->next;
    free(cur);
}

void printList(){
    struct node* cur=head;
    while(cur!=NULL){
        printf("%d ",cur->data);
        cur=cur->next;
    }

}

int main(void) {
	printf("Linked List\n");
	insert_Node(5);
	insert_Node(4);

	printf("the array is:");
	printList();
	delete();
	printList();
	return 0;
}
