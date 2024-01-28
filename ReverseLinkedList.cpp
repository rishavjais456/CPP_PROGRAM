#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node*head;
    LinkedList(){
        head=NULL;
    }
    void insertAtTail(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void reverse(Node* &head){
        //reversing linked list
        Node*pre=NULL;
        Node*curr=head;
        Node*forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forward;
        }
        
       Node*temp=pre;
       while(temp!=NULL){
           cout<<temp->val<<" ";
           temp=temp->next;
        
        /*Printing linkedlist in reverse order
        if(head==NULL){
         return;
        }
         reverse(head->next);
         cout<<head->val<<" ";
       */
       }
    }
};
int main(){
 LinkedList ll;
 ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
 ll.display();
 ll.reverse(ll.head);
 

}