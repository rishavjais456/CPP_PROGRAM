#include<iostream>
using namespace std;
int main()
{
    int num,r,k=0,temp;
 
    cout<<"Enter number :"<<endl;
    cin>>num;
       temp=num;
    while(num!=0){
      r=num%10;
      k=k+r*r*r;
      num=num/10;
    }
     if(temp==k){
        cout<<"Armstrong number"<<endl;
    }
    else
    cout<<"Not a armstrong number";
    return 0;
}