#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAtbegin(NODE head,int data){
    NODE new=(NODE)malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    if(new==NULL){
    printf("memory not allow");
    return head;
    }
    else if(head==NULL){
    return new;
    }
    else{
        new->next=head;
        head=new;
        return head;
    }
}
void display(NODE head){
    if(head==NULL)
    printf("empty");
    else{
        while(head!=NULL){
            printf("%d",head->data);
            head=head->next;
        }
    }
    printf("\n");
}
NODE reversing(NODE head){
    NODE reverselist=NULL;
    NODE curr=head;
    while(curr!=NULL){
       
        reverselist=insertAtbegin(reverselist,curr->data);
        curr=curr->next;
        
    }
    return reverselist;
    
}
int main(){
    NODE head=NULL;
    head=(NODE)malloc(sizeof(struct node));
    head=insertAtbegin(head,3);
    head=insertAtbegin(head,2);
    head=insertAtbegin(head,1);
     head=insertAtbegin(head,4);
    head=insertAtbegin(head,9);
    NODE reverse=reversing(head);
    display(reverse);
    return 0;
}