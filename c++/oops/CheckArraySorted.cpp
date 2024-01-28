#include<iostream>
using namespace std;
int check(int *arr,int n){
    if(n==1){
        return 1;
    }
    return (arr[n-1]<arr[n-2])?0:check(arr,n-1);
}
int main(){
    int arr[5]={1,1,3,3,5};
    int index=0;
    
    int x=check(arr,4);

    if(x){
        printf(" Sorted");
    }
    else{
        printf(" not sorted");
    }
    return 0;
}