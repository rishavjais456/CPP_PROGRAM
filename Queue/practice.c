#include<stdio.h>
#define max 10
int arr[max];
int rear=-1;
int front=-1;
void Enqueue(int x){
    if(rear==max-1){
        printf("Overflow");
    }
    else if(rear==-1 && front==-1){
        rear=front=0;
        arr[rear]=x;
    }
    else{
        rear++;
        arr[rear]=x;
    }
}
void Dequeue(){
    if(front==-1 && rear==-1){
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
    if(front==-1 && rear==-1){
        printf("queue is empty");
    }
    for(int i=front;i<=rear;i++){
        printf("%d",arr[i]);
    }
}
int main(){
Enqueue(1);
Enqueue(2);
Enqueue(3);
Dequeue();
display();
return 0;
}