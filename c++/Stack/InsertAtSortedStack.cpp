#include<iostream>
#include<stack>
using namespace std;
void InsertINsort(stack<int>&st,int x){
    if(st.empty() || x>st.top()){
        st.push(x);
        return;
    }
    int temp=st.top();
    st.pop();
   InsertINsort(st,x);
    st.push(temp);
}
int main(){
    stack<int>st;
    st.push(4);
    st.push(5);
    st.push(9);
    InsertINsort(st,2);
    while(!st.empty()){
        cout<<st.top();
        st.pop();

    }
    return 0;
}