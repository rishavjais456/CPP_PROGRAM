
#include<iostream>
using namespace std;
bool ispossible(int Booksize[],int n,int m,int mid){
  int student=1;
  int bookpage=0;
  for(int i=0;i<n;i++){
    if(Booksize[i]+bookpage<=mid){
        bookpage=bookpage+Booksize[i];
    }
    else{
    student++;
    if(student>m|| Booksize[i]>mid){
        return false;
    }
    bookpage=Booksize[i];
  }    
  }
  return true;
}
int main()
{
    int Booksize[10]={10,21,20,30};
    int n=4,m=2,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+Booksize[i];
    }
    int s=0,e=sum,mid,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(ispossible(Booksize,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else
        s=mid+1;
    }
    cout<<"Minimum of maximum pages allot is:"<<ans;
    return 0;

}