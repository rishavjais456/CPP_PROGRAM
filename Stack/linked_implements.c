#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
} *top=NULL;
typedef struct node* NODE;
void push(int data){
NODE new=malloc(sizeof(struct node));
if(new==NULL){
    printf("memory not allow");
}
else{
    new->data=data;
    new->next=NULL;
    new->next=top;
    top=new;
}
}
void print(){
    NODE temp;
    temp=top;
    while(temp){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void pop(){
    NODE temp;
    temp=top;
    top=top->next;
    free(temp);
}
int main(){
   push(3);
   push(2);
   push(8);
//    pop();
   print();
   
   return 0;
}