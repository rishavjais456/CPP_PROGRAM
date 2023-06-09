#include<iostream>
using namespace std;
int main()
{
    int a[10],n,mid;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter mountain array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    int e=n-1;
      
    while(s<e){
        mid=s+(e-s)/2;
        if(a[mid]<a[mid+1]){
            s=mid+1;
        }
        else{
        e=mid;
        }
        
    }
    cout<<"Peak index of ,ountain array is:"<<s<<endl;
    return 0;
}