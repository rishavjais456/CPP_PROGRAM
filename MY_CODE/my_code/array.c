#include<stdio.h>
int input (int b[])
{
  
  for(int i=0;i<10;i++){
  scanf("%d",&b[i]);  }

int sum=0;
 sum=(b[0]+b[1]+b[2]+b[3]);
 
 return sum;
}
 

int main()
{
    /*int a[6],i;
    float avg,sum=0;
    
    printf("enter number : ");
    for(i=0;i<5;i++){
      scanf("%d",&a[i]);
    }
       for(i=0;i<5;i++)
      {
        sum=sum+a[i];
        avg=sum/5;
      } 
      printf(" avg of five number is : %f\n",avg);
    */

   int a[10];
   input (a);
   printf("sum of first 4 is %d ",sum);
  
    return 0;

}