#include<iostream>
using namespace std;
int binarySearch(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int square=mid*mid;
        if(square==n)
        return mid;
        if(square<n){
        ans=mid;
        s=mid+1;
        }
        else{
        e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number to find square root"<<endl;
    cin>>n;
    int x=binarySearch(n);
    cout<<x;
    return 0;
}