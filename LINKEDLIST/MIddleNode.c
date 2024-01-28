#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAtbegin(NODE head,int data){
    NODE newnode=malloc(sizeof(struct node));
    newnode->data=data;
    if(newnode==NULL){
        printf("memory not allowed");
    }
    else{
        newnode->next=head;
            head=newnode;
            return head;
        }
    }
void display(NODE head){
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
NODE middle(NODE head){
    NODE slow=head;
    NODE fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
         fast=fast->next;
         slow=slow->next;
        }
    }
    return slow;
}
NODE check_palindrome(NODE mid,NODE head){
    while(mid!=NULL){
        mid=mid->next;
        if(head->data!=mid->data){

        }
    }
}
int main()
{
    NODE head=NULL;
    head=insertAtbegin(head,1);
    head=insertAtbegin(head,2);
    head=insertAtbegin(head,3);

    head=insertAtbegin(head,2);
    head=insertAtbegin(head,1);
    NODE mid=middle(head);
    check_palindrome(mid,head);
    display(head);

    // printf("\n%d",mid->data);
    return 0;
}