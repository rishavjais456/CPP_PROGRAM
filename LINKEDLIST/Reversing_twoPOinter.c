#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE reverse(NODE head){
    NODE pre=NULL;
    NODE curr=head;
    NODE next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    head=pre;
    return head;
}
NODE insertAtbegin(NODE head,int data){
    NODE new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("memory not allowed");
        exit(0);
    }
    if(head==NULL){
        new->data=data;
        new->next=NULL;
        return new;
    }
    else{
        new->data=data;
        new->next=head;
        head=new;
        return head;
    }
}
void display(NODE head) {
    if (head == NULL) {
        printf("Empty");
    } else {
        while (head!= NULL) {
            printf("%d ", head->data);
            head = head->next;
        }
    }
    printf("\n");
}

int main(){
    NODE head=NULL;
   
    head=insertAtbegin(head,1);
    head=insertAtbegin(head,2);
    head=insertAtbegin(head,3);
    display(head);
    printf("\n");
    head=reverse(head);
    display(head);
    return 0;
   }