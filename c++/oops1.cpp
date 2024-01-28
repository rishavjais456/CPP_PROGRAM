#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    public:
    string name;
    animal(){
        printf("constructor called");
    }

    void eat(){

    }
    void sleep(){

    }
    int getage(){
        return age;
    }
    void setage(int age){
       this-> age=age;
    }

};
int main(){
    // animal rishav;
    // rishav.age=5;
    // rishav.name="gupta";
    // cout<<rishav.age<<rishav.name<<endl;
    // rishav.setage(2);
    // cout<<rishav.getage()<<endl;
    animal*rishav=new animal;
    rishav->age=2;
    rishav->name="gupta";
    cout<<rishav->age<<rishav->name<<endl;

    return 0;
}