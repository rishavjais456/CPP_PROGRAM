#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&st,int &x){

if(st.empty()){
    st.push(x);
    return;
}
int temp=st.top();
st.pop();
insertatbottom(st,x);
st.push(temp);
}
int main(){
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int x=100;
    insertatbottom(st,x);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


}