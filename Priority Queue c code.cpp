#include <stdio.h>
#include<stdlib.h>

struct pq{
   struct pq *next;
   int data;
};

typedef struct pq pq;
pq *front=NULL;pq *rear=NULL;

//adding at the beginning
void add(int data){
   pq *temp=(pq*)malloc(sizeof(pq));
   temp->data=data;
   
   if(front==NULL)
      front=temp;
   else
      temp->next=front;
      front =temp;
}

void display(){
   pq *temp=front;
   while(temp!=NULL){
      printf("%d\t",temp->data);
      temp=temp->next;
   }
}

int findMax(){
   int max;
   pq *temp=front;
   max=temp->data;
   while(temp->next!=NULL){
      if(max<temp->data)
         max=temp->data;
      temp=temp->next;
      
   }
   return max;
}

void del(int max){
   pq *prev,*temp;
   temp=front;
   while(temp!=NULL)
   {
      if(front->data==max)
      {
         if(temp->next==NULL)
            rear=NULL;
         front=front->next;
         free(temp);
         return;
      }
      else{
         prev=temp;
         temp=temp->next;//starting serach from 2nd element
         if(temp->data==max){
            if(temp->next==NULL)
               rear=prev;//assigning rear to the second last element
            prev->next=temp->next;
            free(temp);
            return;
         }
      }
   }
   
}

int main()
{
    add(22);
    add(34);
    add(90);add(21);add(23);
    display();printf("\n");
    printf("\n%d",findMax());
    int e=findMax();
    del(e);
    printf("\n");
    display();
    return 0;
}
