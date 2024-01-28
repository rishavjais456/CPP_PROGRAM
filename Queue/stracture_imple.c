#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int queue[3];
    int rear;
    int front;
};
void Enqueue(struct Queue*que,int data){
    if(que->rear==3 ){
        printf("Full");
    }
    else if(que->rear==-1 && que->front==-1){
        que->rear=que->front=0;
        que->queue[que->rear]=data;
    }
    else{
        que->rear++;
        que->queue[que->rear]=data;
    }
         
}
void Dequeue(struct Queue*q){
    if(q->rear==-1 && q->front==-1){
        printf("Empty");
    }
    else if(q->rear==q->front){
        q->front=q->rear=0;
    }
    else{
        q->front++;
    }
}
void display(struct Queue*q){
    if(q->rear==-1 && q->front==-1){
        printf("Empty");
    }
    else{
         for(int i=q->front;i<q->rear+1;i++){
            printf("%d",q->queue[i]);
        }
    }
}
int main(){
    struct Queue q;
    q.rear=-1;
    q.front=-1;
    Enqueue(&q,1);
    Enqueue(&q,2);
    Dequeue(&q);
    display(&q);


}