#include<stdio.h>
int main()
{
    char ch,lower_vowel,upper_vowel;
    printf("enter any character : ");
    scanf("%c",&ch);
    lower_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    upper_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lower_vowel||upper_vowel)
    printf("character is vowel");
    else
    printf("not vovel");
}