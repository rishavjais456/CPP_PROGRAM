#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE Concatenate(NODE head1,NODE head2){
    if(head1==NULL)
    return head2;
    else if(head2==NULL)
    return head1;
    else{
        NODE temp=head1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head2;
        
        return head1;
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
int main(){
    NODE head1=(NODE)malloc(sizeof(struct node));
    head1->data=1;
    head1->next=NULL;
    NODE head2=(NODE)malloc(sizeof(struct node));
    head2->data=2;
    head2->next=NULL;
    NODE head=(NODE)malloc(sizeof(struct node));
    head=Concatenate(head1,head2);
    display(head);
    }
