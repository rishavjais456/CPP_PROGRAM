#include<stdio.h>
int main()
{
    int i,j,gcd;
    printf("enter i nad j : ");
    scanf("%d%d",&i,&j);
    for(int x=1; x<=i && x<=j; x++)
    {
        if(i%x==0 && j%x==0)
        gcd=x;
    }
  printf("hcf of %d and %d is %d ",i,j,gcd);
  return 0;

}