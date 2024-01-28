#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
void insertAtbegin(NODE* head,int data){
    NODE newnode=(NODE)malloc(sizeof(struct node));
    newnode->data=data;
    if(newnode==NULL){
    printf("Memory not Allow");
    exit(0);
    }
    else if(head==NULL){
        newnode->next=NULL;
        return newnode;
    }
    else{
        newnode->next=*head;
        *head=newnode;
        
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
            while(head->next!=NULL){
                printf("%d",head->data);
                head=head->next;
            }
        }
            
    }
      int main(){
        NODE head=(NODE)malloc(sizeof(struct node));
        insertAtbegin(&head,5);
        insertAtbegin(&head,8);
        insertAtbegin(&head,9);
        display(head);
        return 0;
        
      }
    

