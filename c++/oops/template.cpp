#include<iostream>
using namespace std;
template<class type>
type Max(type n,type m){
    if(n>m)
    return n;
    else
    return m;
}
int main(){
    int r;
    r=Max(122,34);
    cout<<"MAx of to is:"<<r;
   float r2=Max(23.3,24.34);
      cout<<"MAx of to is:"<<r2;
    return 0;
}
