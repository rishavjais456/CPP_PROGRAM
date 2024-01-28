#include<stdio.h>
int queue[5];
int rear=-1;
int front=-1;
void Enqueue(int x){
   if(front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=x;
   }
   else if((rear+1)%5==front){
     printf("Queue is full");
     return;
   }
   else{
    rear=(rear+1)%5;
    queue[rear]=x;
   }
}
void Dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty");
    }
    else if(front==rear){
        front=rear=-1;
 }
 else{
    front=(front+1)%5;
 }
}
void display(){
    int i=front;
    if(rear==-1 && front==-1){
        printf("queue is empty");
    }
    else{
        while(i!=rear){
            printf("%d ",queue[i]);
            i=(i+1)%5;
        }
        printf("%d",queue[rear]);
    }
}
int main(){
    Enqueue(2);
    Enqueue(23);
    Enqueue(22);
    Enqueue(22);
     Enqueue(23);
        Dequeue();
         Dequeue();
       Enqueue(223);
    
    display();
    return 0;

}