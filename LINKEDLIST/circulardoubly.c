#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*pre;
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE inseratHead(NODE tail,int data){
   NODE newnode=malloc(sizeof(struct node));
   if(newnode==NULL){
   printf("Memory not present");
   return tail;
   }
   newnode->data=data;
   if(tail==NULL){
    newnode->next=newnode;
    newnode->pre=newnode;
    tail=newnode;
  return tail;
   }
   NODE temp=tail->next;
   newnode->next=temp;
   newnode->pre=tail;
   tail->next=newnode;
   temp->pre=newnode;


}
void display(NODE tail){
   NODE temp=tail->next;
    do{
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp!=tail->next);
}
NODE insertAtend(NODE tail,int data){
    NODE newnode=malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory not allowed");
        return tail;
    }
    newnode->data=data;
    NODE temp=tail->next;
    newnode->next=temp;
    newnode->pre=tail;
    tail->next=newnode;
    temp->pre=newnode;
    tail=newnode;
    return newnode;
}
int main(){
    NODE tail=NULL;
    tail=inseratHead(tail,2);
     tail=inseratHead(tail,1);
    tail=inseratHead(tail,3);
     tail=insertAtend(tail,4);
    display(tail);
}