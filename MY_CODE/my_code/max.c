#include<stdio.h>

int main()
{
    int i,old=0;
    int person[5];
    for(i=0;i<5;i++)
    {
        printf("enter age of %d person : ",i+1);
        scanf("%d",&person[i]);
 }
 for(i=0;i<5;i++)
 if(person[i]>old)
 {
    old=person[i];
 }
 printf(" age of old person is %d ",old);

    return 0;
}