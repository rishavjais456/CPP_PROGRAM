#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i=i+2){
        if(i+1 < n){
          int swap=a[i];
          a[i]=a[i+1];   
          a[i+1]=swap;
        }
    }
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    return 0;
}