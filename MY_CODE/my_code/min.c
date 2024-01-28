#include<stdio.h> 
int minarray(int arr[5])
{
      for(int i=0;i<5;i++)
      {
        if (arr[0]>arr[i])
        {
           arr[0]=arr[i];
        }
         }
         return arr[0];
}
int main()
{
    int arr[5]={30,57,5,67,56};
    minarray(arr);
    printf("%d",arr[0]);
    return 0;
}  

