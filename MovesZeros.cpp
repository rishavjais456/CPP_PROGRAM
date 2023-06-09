#include<iostream>
using namespace std;
int main()
{
    int a[]={0,2,2,0,4,5,0};
    int n=7;
    int j=0;
    for(int i=0;i<n;i++){
          if(a[i]!=0){
          swap(a[i],a[j]);
          j++;
          }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    
}