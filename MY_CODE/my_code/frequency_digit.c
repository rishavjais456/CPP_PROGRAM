#include<stdio.h>
int main()
{
    int i,rem,c=0,d=0,e=0,f=0,g=0,j=0,k=0,l=0,h=0;
     printf("enter digit : ");
     scanf("%d",&i);

    while(i!=0)
    {
        rem=i%10;
        if(rem==1)
        {
            c++;
            i=i/10;
        }
        if(rem==2)
        {
            d++;
            i=i/10;
        }
        if(rem==3)
        {
            e++;
            i=i/10;
        }
        if(rem==4)
        {
            f++;
            i=i/10;
        }
        if(rem==5)
        {
            g++;
            i=i/10;
        }
        if(rem==6)
        {
            h++;
            i=i/10;
        }
        if(rem==7)
        {
            j++;
            i=i/10;
        }
        if(rem==8)
        {
            k++;
            i=i/10;
        }
        if(rem==9)
        {
            l++;
            i=i/10;
        }
         }

        int z;
        printf("enter any number to check frequency : ");
        scanf("%d",&z);
        if(z==1){
            printf("frequency of z is %d :",c);
        }
        if(z==2){
            printf("frequency of z is %d :",d);
        }
        if(z==3){
            printf("frequency of z is %d :",e);
        }
        if(z==4){
            printf("frequency of z is %d :",f);
        }
        if(z==5){
            printf("frequency of z is %d :",g);
        }
        if(z==6){
            printf("frequency of z is %d :",h);
        }
        if(z==7){
            printf("frequency of z is %d :",j);
        }
        if(z==8){
            printf("frequency of z is %d :",k);
        }
        if(z==9){
            printf("frequency of z is %d :",l);
        }
        return 0;



        
        }