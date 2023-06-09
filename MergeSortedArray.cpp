#include<iostream>
using namespace std;
int main(){
    int a[]={2,1,2,1},n=4;
    int b[]={6,3,7},m=3;
    int c[7];
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
      if(a[i]<b[j]){
        c[k++]=a[i++];
      }
      else
      c[k++]=b[j++];
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}