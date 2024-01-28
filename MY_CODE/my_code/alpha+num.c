#include<stdio.h>
int main()
{
    int n,j;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { 
        
        if(i%2==0)
       for(int j=1;j<=i;j++)
        {
        printf("%d",j);
        }
        
        else
        printf("\n");
         for(int j=1;j<=i;j++)
        {
            int a=1;
          int d=a+64;
            char ch=(char)d;
        printf("%d",ch);
        a++;
        }
          

       printf("\n");
    }
}