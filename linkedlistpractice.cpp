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
void (insertAtHead(Node* &head,int val)){
    Node*temp=new Node(val);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int val){
    Node*temp=new Node(val);
    tail->next=temp;
    tail=temp;
} 
void display(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
Node*node1=new Node(10);
Node*head=node1;
Node*tail=node1;
display(head);
insertAtHead(head,19);
display(head);
insertAtHead(head,14);
display(head);
insertAtTail(tail,12);
display(tail);
return 0;
}