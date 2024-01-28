
#include <stdio.h>
int main()
{
    int i,a=0,b=1,c,j=1;
    printf("enter terms: ");
    scanf("%d",&i);
   do
   {
    printf("%d",a);
   } while (j<=i);
   c=a+b;
   a=b;
   b=c;
   j++;
   
}