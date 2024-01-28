#include<stdio.h>
int main()
{
    int i,sum=0,rem;
    printf("enter digit : ");
    scanf("%d",&i);
    while(i!=0)
    {
        rem=i%10;
        sum=sum+rem;
        i=i/10;
    }
    printf("sum of digit is : %d",sum);
    return 0;
}