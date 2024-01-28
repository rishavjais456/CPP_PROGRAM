#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int b=23;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swaping\n");
    printf("a= %d,b=%d",a,b);
    return 0;
}