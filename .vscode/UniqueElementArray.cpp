#include<iostream>
using namespace std;
int main()
{
    int a[50];
    int ans=0,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elemenst of array"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    ans=ans^a[i];                                                                                      // a^a=0      0^a=a;
    cout<<"Unique elements is :"<<ans;
    return 0;
}
