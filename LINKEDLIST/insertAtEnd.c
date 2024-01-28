#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAtEnd(NODE head,int data){
   NODE newnode=(NODE)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next=NULL;

   if(newnode==NULL){
    printf("memory not allow");
    return;
   }
    if(head==NULL){
    return newnode;
   }
 else{
        NODE temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
     }
   }

void display(NODE head){
        if(head==NULL){
            printf("Empty");
        }
        else if(head->next==NULL){
            printf("%d",head->data);
        }
        else{
            while(head!=NULL){
                printf("%d",head->data);
                head=head->next;
            }
        }
            
    }
   int main(){
    NODE head=(NODE)malloc(sizeof(struct node));
    head=insertAtEnd(head,6);
    head=insertAtEnd(head,9);
  head=insertAtEnd(head,9);
    display(head);
    return 0;
   }

   

