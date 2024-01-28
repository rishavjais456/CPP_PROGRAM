#include<iostream>
using namespace std;
int main(){
    string RomanSymbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    int num;
    string ans="";
    cout<<"Enter number to Convert in  Roman : "<<endl;
    cin>>num;
    for(int i=0;i<13;i++){
        while(num>=value[i]){
           ans+=RomanSymbol[i];
           num-=value[i];
        }
    }
    cout<<ans;
    return 0;
}