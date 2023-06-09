#include<iostream>
using namespace std;
 int PivotElements(a[],int n){
        int low=0,high=n-1;
        int mid=low+(high-low)/2;
        while(low<high){
        if(a[mid]>=a[0]){
            low=low+1;
        }
        else
        high=mid;
        }
        return low;
    }

int BinarySearch(int a[],int s,int e,int key){
    int low=s,high=e;
    
        int mid=low+(high-low)/2;
        while(low<high){
            if(a[mid]==key){
                return mid;
            }
            if(key>a[mid])
            low=mid+1;
            else
            high=mid-1;
        
    }
    return -1;
}
   
int main()
{
int a[10],n,key;
cout<<"Enter total digit"<<endl;
cin>>n;
cout<<"Enter key element:"<<endl;
cin>>key;
int pivot=PivotElements(a,n);
if(key>=a[pivot] && key<=a[n-1]){
    return BinarySearch(a,pivot,n-1,key);
}
else
return BinarySearch(a,0,pivot-1,key);
}