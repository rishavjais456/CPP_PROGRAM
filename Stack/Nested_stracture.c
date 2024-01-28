#include<stdio.h>
#include<string.h>
struct student{
    int n1;
    int n2;
    struct marks{
        int a;
        int b;
        char ch[10];
        char ch2;
    }marks1,marks2;
};
int main(){
    struct student s;
    s.n1=1;  
    s.n2=2;
  
    s.marks1.a=23;
    s.marks1.b=34;
   strcpy(s.marks1.ch,"rishav");
   s.marks1.ch2='a'+2;
   printf("%d\n%d\n%d\n%d\n%s\n%c",s.n1,s.n2,s.marks1.a,s.marks1.b,s.marks1.ch,s.marks1.ch2);
    return 0;

}