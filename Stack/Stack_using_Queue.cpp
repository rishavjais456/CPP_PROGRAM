#include<iostream>
using namespace std;
#include<stack>
#include<queue>
queue<int>q1,q2;
void push(int x){
   q2.push(x);
   while(!q1.empty()){
    q2.push(q1.front());
    q1.pop();
   }
   while(!q2.empty()){
    q1.push(q2.front());
    q2.pop();
   }
}
void pop(){
   q1.pop();
}
void display(){
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
}
int main(){
push(1);
push(2);
push(3);
pop();
pop();
display();
return 0;
}