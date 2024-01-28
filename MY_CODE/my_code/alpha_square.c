#include<stdio.h>
#include<math.h>

int main()
{
    int n,j;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            int d=a+64;
            char ch=(char)d;   ///ch=(char)65; ===A
            
        printf("%c ",ch);
        a++;
        }
        printf("\n");
    }
    
    return 0;
}