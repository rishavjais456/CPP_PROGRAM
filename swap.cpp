#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter x value\n";
    cin>>x;
    cout<<"enter y value\n";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"value after swap\n";
    cout<<"x="<<x<<endl;
    cout<<"y="<<y;
    return 0;
}