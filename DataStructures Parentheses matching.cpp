#include <stdio.h>
#include<stdlib.h>
struct paren{
    char data;
    struct paren *next;
    
};
 
typedef struct paren thesis;

int is_balanced(char elem[]);
void push(int data,thesis **head);
int pop(thesis **head);  

void push(int data,thesis **head){
    thesis *new_node=(thesis *)malloc(sizeof(thesis)); 
    new_node->data=data;
    if(new_node==NULL){
        printf("stack overflow");
        exit(0);
    }
    
        new_node->next= *head;
        *head=new_node;
    

}
    

int pop(thesis **head){
    char res;
    if(*head==NULL){
        printf("Stack is empty");
        exit(0);
    }
    else 
    {
        thesis *temp= *head;
        res = temp->data;
        *head=temp->next;
        free(temp);
        return res; 
    }
 
}

int is_matching(char character1,char character2){
    if(character1=='{' && character2=='}')
        return 1;
    
    if(character1=='[' && character2==']')
        return 1;
    
    if(character1=='(' && character2==')')
        return 0;
    else
    return 0;

}


int is_balanced(char elem[]){
    int i=0;
    thesis *top=NULL;
    
    while(elem[i]){
        if(elem[i]=='{' || elem[i]=='(' || elem[i]=='[')
            push( elem[i], &top);
        if( elem[i]=='}' || elem[i]==')' || elem[i]==']')
        {
            if(top==NULL){
                printf("stack is empty hence not balanced\n");
                exit(0);
            }
            else if(!is_matching(pop(&top),elem[i])){
                return 0;
            }
            
        }
        i+=1;
    }
    if(top==NULL){
        return 0;
    }
    else
    return 1;

}


int main()
{
    char elem[]="{}(";
    int res=is_balanced(elem);
    if (res==0)
        printf("balanced");
    
    else
        printf("not balanced");
    return 0;
}
