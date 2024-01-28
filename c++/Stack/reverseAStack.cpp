#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int>&st,int &element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtbottom(st,element);
    st.push(temp);
}
void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp2=st.top();
    st.pop();
    reverse(st);
    insertAtbottom(st,temp2);
}
int main(){
    stack<int>st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    
    reverse(st);
     cout<<"After reversing"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
             
}
