#include<iostream>
using namespace std;
int main()
{                                                                  
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j=i,count=2*n+1,gaps=(n-i),k=i;
    while(k<gaps){
        cout<<" ";
        k=k+1;
    }
    int m=1,ch=i;
    while(m<=ch){
        cout<<"*";
        m=m+1;
    }
    k=1;
    while(k<gaps){
        cout<<"  ";
        k=k+1;
    }
    cout<<"\n";
  
    i=i+1;
   }
    
    return 0;
}