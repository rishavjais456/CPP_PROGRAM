#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,key,l,h,mid;
    int arr[n];
    printf("Enter size of array : ");   //6
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d ",&arr[i]);          //   1 2 3 4 5 6
    }
    printf("\nEnter key elements to be search : ");    //5
    scanf("%d\n",&key);
    l=0;h=n-1;                    //mid=(1+6)/2=3
    while(l<=h){
    mid=(l+h)/2;
    if(arr[mid]==key)
    {
        printf("elements found at position :  %d",mid+1);
        exit(0);
    }
    else if(arr[mid]>key)
    {
        h=mid-1;
    }
    else
    {
        l=mid+1;
    }
    }
    printf("elements not found ");
    return 0;
}