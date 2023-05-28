#include<iostream>
using namespace std;
int main()
{
    int n;
    int r,ans=0,power=1;
    cout<<"Enter any binary number"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        ans=ans+r*power;
        power=power*2;
        n=n/10;
    }
    cout<<"Decimal form is "<<ans<<endl;
    return 0;

}
