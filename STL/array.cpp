#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a={1,2,3,4};
    int size=a.size();
    for(int i:a){
        cout<<a[i]<<endl;
    }
    cout<<a.at(2);    
    cout<<a.front();
    cout<<a.back();
}