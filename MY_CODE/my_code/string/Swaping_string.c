#include<stdio.h>
char*swap(char **s1,char**s2){
   char *temp=*s1;
   *s1=*s2;
   *s2=temp;

}
int main(){
    char *s1="rishav";
    char *s2="gupta";
      swap(&s1,&s2);
      printf("%s  %s",s1,s2);
      return 0;
}