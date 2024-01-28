#include<iostream>
using namespace std;


int main()
{
    int array[]={10,11,12,54,34},n=5;
   
   for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[min_index]){
                min_index=j;
            }
        }
      
    int temp=array[min_index];
    array[min_index]=array[i];
    array[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}