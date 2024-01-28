#include<iostream>
using namespace std;
class A{
    protected:
    int m;
    private:
    int n;
    public:
    A(){
        m=12;
        n=23;
    }
    friend class B;
    
};
class B{
    public:
    void display(A &obj){
        cout<<obj.m;
        cout<<obj.n;
    }
};
int main(){
    A obj;
    B obj2;
    obj2.display(obj);
    return 0;
}