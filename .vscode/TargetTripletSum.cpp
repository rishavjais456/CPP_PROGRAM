#include<iostream>
using namespace std;
int main()
{
    int a[20],n,target;
    cout<<"Enter total digit:"<<endl;
    cin>>n;
    cout<<"Enter array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter target digit:"<<endl;
    cin>>target;
    int triplePair=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==target){
                    triplePair++;
                }
            }
        }
    }
    cout<<"Total triple pair is: "<<triplePair<<endl;
    return 0;
}