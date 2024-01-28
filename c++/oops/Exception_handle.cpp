#include<iostream>
using namespace std;
int main(){
    int a,b,q;
    try{
        cout<<"Enter the a value"<<endl;
        cin>>a;
        cout<<"Enter the b value"<<endl;
        cin>>b;
        if(b==0)
        throw 0;
         q=a/b;
        cout<<q;
    }
    catch(int){
        cout<<"Divide by zero Error";
    }
return 0;
}