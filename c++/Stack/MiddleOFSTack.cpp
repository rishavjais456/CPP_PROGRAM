#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&st,int &pos,int &ans){
    if(pos==1){
        ans=st.top();
        return;
    }
    pos--;
    int temp=st.top();
    st.pop();
    solve(st,pos,ans);
    st.push(temp);
}

int getMIddle(stack<int>&st){
    int size=st.size();
    if(st.empty())
    return -1;
  int pos=0;
  if(size & 1){
    pos=(size/2)+1;
  }
  else{
    pos=size/2;
  }
  int ans=-1;
  solve(st,pos,ans);
  return ans;
}

int main(){
    stack<int>st;
    st.push(1);
     st.push(2);
      st.push(3);
      st.push(4);
      st.push(5);
      int mid=getMIddle(st);
      cout<<mid;
      return 0;

}