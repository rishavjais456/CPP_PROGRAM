#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAthead(NODE head,int data){
    NODE newnode=(NODE)malloc(sizeof(struct node));
    newnode->data=data;
    if(newnode==NULL){
        printf("Memory not allocate");
        exit(0);
    }
    if(head==NULL){
        newnode->next=NULL;
        return newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
        return head;
    }
}
NODE insertAtEnd(NODE head,int data){
    NODE newnode=(NODE)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
     if(newnode==NULL){
        printf("Memory not allocate");
        exit(0);
    }
    if(head->next==NULL){
        head->next=newnode;
        return head;
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
int length(NODE head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
NODE insertAtpos(NODE head,int data,int pos){
    NODE newnode=(NODE)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    int size=length(head);
     if(newnode==NULL){
        printf("Memory not allocate");
        exit(0);
    }
    if(pos==1){
        newnode=insertAthead(head, data);
        return newnode;
    }
    else if(pos==size){
        newnode=insertAtEnd(head,data);
        return newnode;
    }
    else{
        NODE p=head;
        NODE q;
        int k=1;
        while((p!=NULL) && (pos>k)){
            k++;
            q=p;
            p=p->next;
        }
      q->next=newnode;
      newnode->next=p;
      return head;
    }
}
void display(NODE head){
    if(head==NULL){
        printf("EMpty");
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
    head=insertAthead(head,1);
    head=insertAthead(head,2);
    head=insertAthead(head,3);
    head=insertAtEnd(head,1);
    head=insertAtEnd(head,2);
    head=insertAtEnd(head,3);
    head=insertAtpos(head,5,2);
    head=insertAtpos(head,5,7);
    display(head);
    return 0;
}