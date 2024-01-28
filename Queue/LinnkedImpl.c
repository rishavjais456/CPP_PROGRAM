#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*rear=0;
struct node*front=0;

void Enqueue(int data){
struct node*newnode=malloc(sizeof(struct node));
 newnode->data=data;
    newnode->next=NULL;
if(newnode==NULL){
    printf("Memory not alloed");
    return;
}
 if(front==0 && rear==0){
 front=rear=newnode;
}
else{
  rear->next=newnode;
  rear=newnode;
    }

}
void display()
{
    struct node*temp=front;
    if(front==0 && rear==0){
        printf("Empty");
    }
    else{
        while(temp!=0){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void Dequeue(){
    if(front==0 && rear==0){
        printf("empty");
    }
    else{
        struct node *temp=front;
        front=front->next;
       free(temp);
    }
}
 int main(){
   
   Enqueue(2);
   Enqueue(1);
   Dequeue();
     Enqueue(2);
   display();


    return 0;
}