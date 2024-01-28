#include<stdio.h>
int main()
{
   int n,temp,rev=0,d;
   printf("Enter number to be check : ");
   scanf("\n%d",&n);
   temp=n;
   for(int i=0;i<n;++i)
   {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
   }
 printf("%d",rev);
}