#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float root1,root2,d;
    printf("enter coff of x^2 : and coff of y^2 : and constant ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
     
    if(d<0)
    {
        printf("roots are imagenaray");
    }
    if(d==0)
    {
        printf("roots are equal");
        root1=-b/(2.0*a);
        root2=-b/(2.0*a);
        printf("roots of quadratic is %f ",root1);
    }
    if(d>0)
    {
        printf("roots are real\n ");
        root1=(-b+sqrt(d))/2*a;
         root1=(-b-sqrt(d))/2*a;
         printf("root1 of quadratic is %f\nroot2 of quadratic is %f ",root1,root2);
    }
    return 0;
}