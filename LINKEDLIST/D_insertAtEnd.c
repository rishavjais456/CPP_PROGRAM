#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertATend(NODE head,int data){
    NODE new=(NODE)malloc(sizeof(struct node));
    if(new==NULL)
        printf("Memory not allow");
        else if(head->next==NULL){
            head->next=new;
            new->prev=head;
            new->data=data;
            new->next=NULL;
            return head;
        }
        else{
            NODE temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new;
            new->prev=temp;
            new->data=data;
            new->next=NULL;
            return head;
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
        NODE deletethekey(NODE head,int x){
            NODE temp2=head;
           while(temp2!=NULL){
            if(temp2->data==x){
                temp2->prev->next=temp2->next;
                temp2->next->prev=temp2->prev;

            }
            temp2=temp2->next;
           }
           return head;
        }
int main(){
    NODE head=(NODE)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=1;
    head->next=NULL;
    head=insertATend(head,2);
       head=insertATend(head,3);
    head=insertATend(head,3);
    head=insertATend(head,3);
    head=deletethekey(head,2);
  display(head);
  return 0;
}