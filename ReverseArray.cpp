#include<iostream>
using namespace std;
int main()
{
    int arr[20],n;
    cout<<"Enter total elements of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int end=0,start=(n-1);
    while(end<=start){
   
        int temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        end++;
        start--;
    
    }
     for(int i=0;i<n;i++){
        cout<<" "<<arr[i]  ;
    }
    return 0;
}