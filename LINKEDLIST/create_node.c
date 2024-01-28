#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
   typedef struct node* NODE;
   void traverse(NODE head){
    if(head==NULL){
        printf("empty");
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
      NODE second=(NODE)malloc(sizeof(struct node));
      NODE third=(NODE)malloc(sizeof(struct node));
      head->data=5;
      head->next=second;
      second->next=third;
      second->data=8;
      third->data=9;
      third->next=NULL;
      traverse(head);
      return 0;
      

   }
