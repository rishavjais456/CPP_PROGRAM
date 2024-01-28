#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* NODE;
NODE insertAtbegin(NODE head,int data){
    NODE newnode=(NODE)malloc(sizeof(struct node));
    newnode->data=data;
    if(newnode==NULL){
    printf("Memory not Allow");
    exit(0);
    }
    else if(head==NULL){
        newnode->next=NULL;
        return newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
        return head;
        
    }

    }
    void display(NODE head){
        if(head==NULL){
            printf("Empty");
        }
        else if(head->next==NULL){
            printf("%d",head->data);
        }
        else{
            while(head->next!=NULL){
                printf("%d",head->data);
                head=head->next;
            }
        }
            
    }
    NODE deleteAtbegin(NODE head){
        if(head==NULL){
            printf("Empty list");
        }
        else{
            NODE temp=head;
            head=head->next;
            free(temp);
            return head;
        }
        }
        NODE deleteatend(NODE head){
            if(head==NULL){
                printf("Empty list");
            }
            else if(head->next==NULL){
               free(head);
               return NULL;
            }
            else{
                NODE temp=head;
                NODE pre=NULL;
                while(temp->next!=NULL){
                    pre=temp;
                    temp=temp->next;
                   
                }
                 free(temp);
                pre->next=NULL;
               
                return head;

            }
        }
        // int lenght(NODE head){
        //     int count=0;
        //     while(head->)
        // }
        NODE deleteAtpos(NODE head,int pos){
            if(head->next==NULL){
                head=deleteAtbegin(head);
                return head;
            }
            else{
                ;
                NODE curr=head;
                NODE pre=NULL;
               while(pos!=1){
                pre=curr;
                curr=curr->next;
                pos--;
           }
           pre->next=curr->next;
           free(curr);
           return head;
        }
        }
        NODE deleteAtvalue(NODE head,int val){
             NODE pre=NULL;
             NODE curr=head;
             NODE temp=head;
             if(temp->data==val){
                head=head->next;
               free(temp);
               curr=curr->next;
               }
             while(curr!=NULL){
                if(curr->data==val){
                    if(!pre) head=curr->next;
                    else pre->next=curr->next;
              }else
                pre=curr;
                curr=curr->next;
             }
             return head;
             
        }
      int main(){
        NODE head=(NODE)malloc(sizeof(struct node));
        insertAtbegin(head,5);
       head= insertAtbegin(head,2);
       head= insertAtbegin(head,3);
       head= insertAtbegin(head,1);
       head= insertAtbegin(head,2);
       head= insertAtbegin(head,2);
    //    head= deleteAtbegin(head);
    //    head=deleteatend(head);
    //   head=deleteAtpos( head,2);
    head=deleteAtvalue(head,2);
       display(head);
        return 0;
        
      }
    

