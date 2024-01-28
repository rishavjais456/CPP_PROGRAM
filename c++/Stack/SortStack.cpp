#include<iostream>
#include<stack>
using namespace std;
void insertAtsorted(stack<int>&st,int x){
    if(st.empty() || x>st.top()){
        st.push(x);
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtsorted(st,x);
    st.push(temp);
}
void sort(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    sort(st);
    insertAtsorted(st,temp);
}
int main(){
    stack<int>st;
    st.push(3);
     st.push(8);
      st.push(2);
       st.push(4);
       sort(st);
  
       while(!st.empty()){
        cout<<st.top();
        st.pop();
       }
       
       return 0;
}