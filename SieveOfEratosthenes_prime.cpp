#include<iostream>
#include<math.h>
using namespace std;
Prime(int n){
    if(n==2)
    return 1;
    if(n%2==0)
    return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
        return 0;
        else
        return 1;
    }
}
int main()
{
    int i;
    for(i=2;i<50;i++){
        if(Prime(i)){
        cout<<i<<" ";
        }
    }
    return 0;
}