#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAtpos(NODE head,int data,int pos){
 NODE new=(NODE)malloc(sizeof(struct node));
 new->data=data;
 new->prev=NULL;
 new->next=NULL;
   if(new==NULL){
    printf("Memory not allow");
   }
   else{
    if(pos==1){
        new->next=head;
        head->prev=new;
        head=new;
        return head;
    }
    else{
        NODE temp1=head;
        int k=1;
        NODE temp2;
        while(pos>k && temp1!=NULL){
            temp2=temp1;
            k++;
          temp1=temp1->next;
         }
         new->next=temp1;
         temp1->prev=new;
         temp2->next=new;
         new->prev=temp1;
         return head;
         }
 }
}
void display(NODE head){
    if(head==NULL)
    printf("Empty");
    else{
        while(head!=NULL){
            printf("%d",head->data);
            head=head->next;
        }
    }
}
int main(){
    NODE head=(NODE)malloc(sizeof(struct node));
    head->data=1;
    head->next=NULL;
    head->prev=NULL;
    NODE head2=(NODE)malloc(sizeof(struct node));
    head2->data=2;
    head2->prev=NULL;
    head2->next=head;
    head->prev=head2;
    NODE head3=(NODE)malloc(sizeof(struct node));
    head3->prev=NULL;
    head3->data=3;
    head3->next=head2;
    head2->prev=head3;
    head3=insertAtpos(head3,8,6);
    display(head3);
}