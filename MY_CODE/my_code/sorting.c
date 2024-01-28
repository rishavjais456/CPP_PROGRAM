#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("enter five number : ");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }                                     //   6593
    for(i=0;i<5;i++)
    {
        for(j=1+i;j<5;j++)
        {
            if(a[i]>a[j])
            {
             temp=a[j];
               a[j]=a[i];
               a[i]=temp;  
             
           }

        }
    }
        for(i=0;i<5;i++){
        printf("%d",a[i]);
        }
        return 0;
}