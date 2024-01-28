#include<iostream>
using namespace std;
int main()
{|
    int num,r,sum=1;
    cout<<"Enter number:"<<endl;
    cin>>num;
    while(num>10){
    r=num%10;
    sum+=r;
    if(sum>10){
        num=sum;
    }
    else
    break;
    }
    cout<<sum;
    return 0;
}