#include<stdio.h>
int main()
{
    int i,rem,rev=0;
     printf("enter digit : ");
     scanf("%d",&i);
    
    while(i!=0)
    {
     rem=i%10;
     rev=rev*10+rem;
     i=i/10;
     }
     printf("rev of digit is : %d",rev);
     return 0;
}