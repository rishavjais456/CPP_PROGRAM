#include<iostream>
using namespace std;
void print(int *arr,int size){
    if(size==0){
      printf("%d",arr[size]);
      return;
    }
   
     print(arr,(size-1));
     printf("%d",arr[size]);
}
int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,4);
    return 0;
}