#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*front=0;
struct node*rear=0;
void Enqueue(int x){
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(rear==0){
        front=rear=newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void Dequeue(){
    struct node*temp=front;
    if(rear==0 && front==0){
        printf("Queue is empty");
    }
    else if(rear==front){
        front=rear=0;
        
    }
    else{
        front=front->next;
        rear->next=front;
     
    }
}
void display(){
    struct node*temp=front;
    if(front==0 && rear==0){
        printf("Empty");
    }
    while(temp->next!=front){
        printf("%d",temp->data);
    temp=temp->next;
    }
    printf("%d ",temp->data);
}
int main(){
    Enqueue(12);
    Enqueue(13);
    Enqueue(14);
    Enqueue(15);
    display();
    return 0;
}