#include<iostream>
using namespace std;
int main()
{
    int n=10,j,count=0;
   for(int i=1;i<=n;i++){
    for(j=2;j<i;j++){
        if(i%j==0){
            break;
        }
     }
     if(j==i){
        count++;
     }
   }
   cout<<count;

}