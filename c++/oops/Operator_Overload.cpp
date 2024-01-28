#include<iostream>
using namespace std;
class X{
    private:
    int x;
    public:
    void getinput(){
        cout<<"Enter the valure n"<<endl;
        cin>>x;
    }
    void operator +(X obj){
        X t;
        t.x=x+obj.x;
        cout<<x<<endl;
        cout<<obj.x<<endl;
    //     cout<<"Addition is:"<<t.x<<endl;
     }

};
int main(){
    X a,b;
    a.getinput();
    b.getinput();
    a+b;
    return 0;
}