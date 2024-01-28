#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAtpos(NODE head,int data,int pos){
    NODE newnode=(NODE)malloc(sizeof(struct node));
    NODE p=head;
    NODE q;
    newnode->data=data;
    
    if(pos==1){
    newnode->next=head;
    head=newnode;
    return head;
    }
    else{
        int k=1;
        while((k<pos) && (p!=NULL)){
            q=p;
            k++;
            p=p->next;
        }
        q->next=newnode;
        newnode->next=p;
        return head;
        }
}
void display(NODE head){
    if(head==NULL)
    printf("empty");
    else{
        while(head!=NULL){
            printf("%d",head->data);
            head=head->next;
        }
    }
}
int main(){
    NODE head=NULL;
    head=insertAtpos(head,6,1);
    head=insertAtpos(head,6,2);
     head=insertAtpos(head,6,4);
   
    display(head);
    return 0;
}
