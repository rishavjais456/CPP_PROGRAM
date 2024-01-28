#include<stdio.h>
void compare(char*,char*);
int main()
{
  char str[]="rishav",str2[]="gupta";
  compare(str,str2);
  }
  void compare(char *str,char*str2)
  {
    while(*str!='\0')
    {
        if(*str==*str2)
        {
             *str++;str2++;
        }
        else
         printf("%d",*str-*str2);
       
    }
  }