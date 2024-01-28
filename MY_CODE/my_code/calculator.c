#include<stdio.h>
int main()
{
    int a,b,add,sub,mul;
    float div;
    char operator;
    printf("enter operator : ");
    scanf("%c",&operator);
    printf("enter operands : ");
    scanf("%d%d",&a,&b);
     
    switch (operator)
    {
        case '-' : sub=a-b;
        printf("sub of two number is : %d",sub);
        break;
        case '+' : add=a+b;
        printf("add of two number is : %d",add);
        break;
        case '*' : mul=a*b;
        printf("mul of two number is : %d",mul);
        break;
        case '/' : div=a/b;
        printf("div of two number is : %f",div);
        break;
        default:
        printf("enter correct operator : ");


    }
    return 0;
}