#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAthead(NODE head,int data){
    NODE new=(NODE)malloc(sizeof(struct node));
    new->data=data;
    if(new==NULL)
    printf("Memory not allowed");
    else if(head==NULL){
        new->next=NULL;
        new->prev=NULL;
        return new;
    }
    else{
        new->prev=NULL;
         new->next=head;
         head->prev=new;
         head=new;
         return head;
    }
}
void display(NODE head){
    if(head==NULL){
        printf("Empty");
    }
    else{
        while(head!=NULL){
          printf("%d",head->data);
          head=head->next;
        }
         }
}
int main(){
    NODE head=NULL;
    head=insertAthead(head,2);
     head=insertAthead(head,1);
    display(head);
    return 0;
}
    