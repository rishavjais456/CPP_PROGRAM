#include<iostream>
using namespace std;
int main()
{
    int a[50],n,key,mid;
    cout<<"Enter number of elements of array:"<<endl;
    cin>>n;
    cout<<"Enter array elements in sorted order:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the key elements to search:"<<endl;
    cin>>key;
    int low=0,high=(n-1);
    while(high>=low){
        mid=low+(high-low)/2;
        if(key==a[mid]){
            cout<<"Elements present at index:"<<mid<<endl;
            exit(0);
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else
        low=mid+1;
    }
    cout<<"elements not present";
    return 0;
}