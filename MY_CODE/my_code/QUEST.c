#include<stdio.h>
int main()
{
    char name[]={'r','i','s','h','a','v'};
    char name2[]="rishav";
    char name3[6]="rishav";
    printf("%u %u %u",sizeof(name),sizeof(name2),sizeof(name3));
}