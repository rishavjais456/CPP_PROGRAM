#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sum2;
    char *p;
    cout<<"Enter number a and b:"<<endl;
    cin>>a;
    cin>>b;
    sum=a-~b-1;
    cout<<"sum of two number is :"<<sum<<endl;
   
    return 0;
 
}