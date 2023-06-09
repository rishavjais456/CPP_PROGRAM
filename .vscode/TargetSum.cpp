#include<iostream>
using namespace std;
int main()
{
    int a[50],n,target;
    cout<<"Enter total digit:"<<endl;
    cin>>n;
    cout<<"Enter element of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter target digit:"<<endl;
    cin>>target;
    int pair=0;
   for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                pair++;
            }
        }
   }
    cout<<"Total pairs is :"<<pair<<endl;
    return 0;
}