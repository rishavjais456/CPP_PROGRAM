#include<stdio.h>
void strcopy(char*,char*);
int main()
{
  char *str1="rishav",*str2;
  strcopy(str2,str1);
  printf(" str 2 : %s",str2);
  return 0;
}
void strcopy(char*s2,char*s1)
{
    while(*s1!='\0')
    {
        *s2=*s1;
        s1++;s2++;
    }
    *s2='\0';
    
    
}
    

