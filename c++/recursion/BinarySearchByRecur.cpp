#include<stdio.h>
using namespace std;
int BinSearch(int*arr,int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
       
        return BinSearch(arr,mid+1,e,target);
    }
    else{
        return BinSearch(arr,s,mid-1,target);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int s=0;
    int e=4;
    int x=BinSearch(arr,s,e,9);
   if(x!=-1){
    printf("found at index %d",x);
   }
   else{
    printf("Not found");
   }
    return 0;

}