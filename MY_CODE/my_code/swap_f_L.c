#include<stdio.h>
int main()
{
   int i,ld,fd,rem;
    printf("enter digit : ");
    scanf("%d",&i);
    
    while(i>10)
    {
      i=i/10;
    }
    printf(" first digit is : %d\n",i);
      
      ld=i%10;
    printf(" last digit : %d\n",ld);
     
    
    return 0;
    
    


}
  