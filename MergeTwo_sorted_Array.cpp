#include<iostream>
using namespace std;
int* input(int m,int arr[]){
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    return arr;
}
int* merge(int arr[],int arr2[],int n,int m){
    int*arr3=new int(n+m);
    int i,j,k;
    for(i=0,k=0,j=0;i<n && j>m;k++){
        if(arr[i]<arr2[j]){
            arr3[k]=arr[i++];
        }
        else{
            arr3[k]=arr[j++];
        }
 }
    while(i<n){
        arr3[k++]=arr[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
   
    return arr3;

}
int main()
{
    int n,m;
    cout<<"enter the size of arr1:"<<endl;
    cin>>n;
    cout<<"enter the size of arr2:"<<endl;
    cin>>m;
    int*arr=new int(n);
    int*arr2=new int(m);
    cout<<"Enter first sorted array:"<<endl;
    int*a=input(n,arr);
    cout<<"Enter second sorted array:"<<endl;
    int*b=input(m,arr2);
    cout<<"Merging sorted array is:"<<endl;
    int*ans=merge(a,b,n,m);
    for(int i=0;i<(n+m);i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    
}