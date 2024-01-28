#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE insertAtbegin(NODE tail, int data) {
    NODE new = (NODE)malloc(sizeof(struct node));
    if (new == NULL) {
        printf("Memory not allowed");
        return tail;
    } 
    new->data=data;
    if(tail==NULL){
        new->next=new;
        tail=new;
        return tail;
    }
    else {
       
        new->next = tail->next;
        tail->next = new;
        return tail;
    }
}

NODE insertAtend(NODE tail, int data) {
    NODE new = (NODE)malloc(sizeof(struct node));
    if (new == NULL) {
        printf("Memory not allowed");
        exit(0);
    } 
 new->data=data;
      if(tail==NULL){
       
        new->next=new;
        tail=new;
      }
      else{
        new->next=tail->next;
        tail->next=new;
         tail=new;
      
      }
        return tail;
      }

    

void display(NODE tail) {
    NODE temp = tail->next;
    printf("%d  ",temp->next->next->next->data);
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
}

int main() {
    NODE tail =NULL;
    tail=insertAtbegin(tail, 4);
    tail=insertAtbegin(tail,5);
    tail=insertAtend(tail, 8);
    display(tail);
    return 0;
}
