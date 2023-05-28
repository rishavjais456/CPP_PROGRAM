#include<iostream>
using namespace std;
int main()
{
    int n,power=1,ans=0;
    cout<<"Enter decimal number"<<endl;
    cin>>n;
while(n>0)
{
    int r=n%2;
    ans=ans+r*power;
    n=n/2;
    power=power*10;
}
cout<<"Binary form is :"<<ans;
return 0;
}