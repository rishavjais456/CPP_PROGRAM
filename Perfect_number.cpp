#include<iostream>
using namespace std;
//perfect number ->sum of divisior of number is number,,,eg->6->1+2=3=6
int main()
{
    int n,sum=0;
    cout<<"Enter number to check:"<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
    cout<<"Perfect number"<<endl;}
    else
    cout<<"Not a perfect number"<<endl;
    return 0;
}