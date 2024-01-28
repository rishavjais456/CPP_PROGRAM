#include<iostream>
using namespace std;
class vehicle{
    public:
    string model="rishav";
    void model2(){
        cout<<"123";
    }
};
class ford:public vehicle {
    public:
    string owner="gupta";
};
class bmw:public ford {
    public:

};
int main(){
  
    ford a1;
    // a1.model2();
    // cout<<a1.owner;
    bmw b1;
    b1.model2();
    cout<<b1.owner;
    return 0;
  

}