#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*prev;
    Node*next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinkedList{
    public:
    Node*head;
    Node*tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertAtStart(int val){
        Node*newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->next=head;
        head->prev=head;
      head=newnode;
        return;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
       }
       void insertAtTail(int val){
        Node*newnode=new Node(val);
        if(tail==NULL){
            tail=newnode;
            head=newnode;
            return;
        }
      tail->next=newnode;
      newnode->prev=tail;
      tail=newnode;
 }
     void insertAtPosition(int val,int k){
        if(k==1){
            return insertAtStart(val);
        }
        Node*temp=head;
        int count=1;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }
        Node*newnode=new Node(val);
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        temp->next->prev=newnode;
        return;
     }
     void deleteAtStart(){
        if(head==NULL){
            return;
        }
        Node*temp=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }
        else{
            head->prev=NULL;
        }
        free(temp);
        return;
     }
     void deleteAtend(){
        if(head==NULL){
            return;
        }
        Node*temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        free(temp);
        return;
        }
     void deleteAtPosition(int k){
     Node*temp=head;
     int count=1;
     while(count<k){
        temp=temp->next;
        count++;
     }
     temp->prev->next=temp->next;
     temp->next->prev=temp->prev;
     free(temp);
     return;
     }
    
     
};
int main(){
   
    DoublyLinkedList ll;
ll.insertAtStart(1);
ll.insertAtStart(2);
ll.insertAtStart(3);
ll.insertAtStart(4);
ll.display();
// ll.insertAtTail(5);
// ll.display();
ll.insertAtPosition(6,3);
ll.display();
ll.deleteAtStart();
ll.display();
// ll.deleteAtend();
// ll.display();
// ll.deleteAtPosition(2);
// ll.display();
    


}