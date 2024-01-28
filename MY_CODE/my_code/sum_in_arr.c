#include<stdio.h>
int main()
{
    int arr[5],max=-1;
    printf("enter elements of array : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++){
     if(max<arr[j]){
     max=arr[j];
     }
    }
    printf("%d",max);
    return 0; 
    
   
}
