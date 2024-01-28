#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    if(n==1 || n==0)
    return 1;
    else
    factorial*=n;
    return factorial*fact(n-1);
}
int main()
{
    int num,r,sum=0,k;
    cout<<"Enter the number to check:"<<endl;
    cin>>num;
    int temp=num;
    while(num!=0){
    r=num%10;
    k=fact(r);
    sum=sum+k;
    num=num/10;
    }
    if(temp==sum)
    cout<<"This is a Strong number :"<<endl;
    else
    cout<<"This is not a strong number :"<<endl;
    return 0;
}