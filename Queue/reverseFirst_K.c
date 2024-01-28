#include<stdio.h>
int queue[4];
int rear=-1;
int front=-1;
void Enqueue(int data){
    if(rear==(4-1)){
        printf("Overflow");
    }
    else if(rear==-1 && front==-1){
        rear=front=0;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void Dequeue(){
    if(rear==-1 && front==-1){
        printf("Underflow");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}

void display(){
    if(rear==-1 && front==-1){
        printf("Queue is empty");
    }else{
        for(int i=front;i<rear+1;i++){
            printf("%d",queue[i]);
        }
    }
}
int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
  display();
 
    return 0;
}
