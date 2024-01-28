#include<stdio.h>
int factorial(int x)
{
   int fact=1;
   for(int i=1;i<=x;i++)
   {
      fact=fact*i;
   }
   return fact;
}
int main()
    {
       int r,n;
       printf("enter r  : enter n : ");
       scanf("%d%d",&r,&n);
      int rfact=factorial(r);
       int nfact=factorial(n);
       int nrfact=factorial(n-r);
    printf("%d\n%d\n%d",nfact,rfact,nrfact);
    return 0;
    }
