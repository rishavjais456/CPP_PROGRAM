#include<stdio.h>
int main()
{
    /*   1
    int x=5;
    if(x>3>2)         ///x>3 condition true value (x>3)==1 ,then chaeck 1>2 condition false 
    printf("hello %d",x);
    else
    printf("hii %d",x);
    return 0; */
 /*2
   int x=5;
   if(x-5){
   printf("hello");
   printf("%d",x);}
else
printf("bye");
return 0;

  3
int x=0,y=0;
if(x++ && y++)                   // value of x is zero hence left part is false and x became 1,,
printf("x=%d y=%d",x,y);   
else
printf("y=%d x=%d",y,x);
return 0;


int x=0,y=0;
if(++x && y++)                   
printf("x=%d y=%d",x,y);   
else
printf("y=%d x=%d",y,x);
return 0;

int a=1,b=1;
if(a--||b--&& ++a)     //in || operator if left part is ture then condition true right part not evaluated
printf("%d %d",a,b);
else
printf("%d %d",b,a);
return 0;

9
int a=3,b=4;
a>b?a=b:(b=a);
printf("%d%d",a,b);
return 0;

int a=3,b=4;
if(!a>-b)                  ///priority==!--%--+---<><=>=--(==)--&&--||--=
printf("%d %d",a,b);
else
printf("%d%d",b,a);
return 0;

 int x;
 x=3,5,6;
 printf("%d",x);     //output is 3
 return 0;

 
 int x;
 x=(3,4,5);       // output is 5
 printf("%d",x);
 return 0;
 
  
  int x=2;
  printf("%d %d %d",x*x,++x,x++);     //right to left solved first ,printf use stack
  return 0;
  
  printf("%d",printf("welcome"));   // welcome7
  return 0;
  
   
   int x,y;
   printf("%d",scanf("%d %d ",&x,&y));   // scanf return number of data that take input
      return 0;
   
   int x,y,z;
   scanf("%d-%d-%d",&x,&y,&z);
   printf("%d %d %d",x,y,z);
   return 0;

int x,y,z=0;
for (x=1,y=5;x<y;x++,y--)
z=x+y+z;
printf("%d %d %d",x,y,z);
return 0;
  */
 int x=010;
 for(x-1;x>0;x-=2)
 printf("%d",x);
 return 0;
}