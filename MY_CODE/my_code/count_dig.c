#include<stdio.h>
int main()
{
    int i,count=0, rem;
    printf("enter digit : ");
    scanf("%d",&i);
    while(i!=0)
    {
     rem=i%10;
    
    count++;
    i=i/10;
    }
    printf("no,of digit is : %d",count);
    return 0;
}