#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*pre;
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAtfront(NODE head,int data){
    NODE newnode=malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory not allow");
        return head;
    }
    newnode->data=data;
    if(head==NULL){
        newnode->next=NULL;
        newnode->pre=NULL;
        head=newnode;
        return head;
    }
    else{
        newnode->pre=NULL;
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
        return head;
    }
}
NODE display(NODE head){
    if(head==NULL){
        printf("Emoty");
    }
    else{
        NODE temp=head;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
NODE insertAtleft(NODE head,int key,int data){
    NODE temp=head;
    while(temp->data!=key){
        temp=temp->next;
        
    }
    if(temp==head){
     head=insertAtfront(head,5);
     return head;
    }
    
    if(temp==NULL){
        printf("Key not found");
        return head;
    }
    NODE newnode=malloc(sizeof(struct node));
   
    newnode->data=data;
    newnode->pre=temp->pre;
    temp->pre->next=newnode;
    newnode->next=temp;
    temp->pre=newnode;
    return head;

}
NODE delete_dataNOde(NODE head,int data){
    NODE temp=head;
    if(temp->data==data){
        head=head->next;
        head->pre=NULL;
        return head;
    }
    while(temp->data!=data){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("data not found");
        return head;
    }
    else{
        temp->pre->next=temp->next;
        temp->next->pre=temp->pre;
        return head;
    }
}
int main(){
    NODE head=NULL;
   head= insertAtfront(head,1);
   head=insertAtfront(head,2);
   head=insertAtfront(head,3);
   head= insertAtfront(head,4);
   display(head);
//    head=insertAtleft(head,4,5);
//    printf("\n");
//    display(head);
   printf("\n");
   head=delete_dataNOde(head,3);
    head=delete_dataNOde(head,5);
    //  head=delete_dataNOde(head,1);
   display(head);

    return 0;
}