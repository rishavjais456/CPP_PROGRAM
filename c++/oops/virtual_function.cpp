#include<iostream>
using namespace std;
class Person1{
    public:
     virtual void show(){
        cout<<"This is person1"<<endl;
    }
};
class Person2:public Person1{
public:
void show(){
    cout<<"This is person2"<<endl;
}
};
class Person3:public Person2{
    public:
    void show(){
    cout<<"this is person3"<<endl;
}
};
int main(){
    Person1 p1;
    p1.show()  ;                                                                          // early binding
    Person2 p2;
     
    Person3 p3;
   
    Person1 *ptr;

    ptr=&p1;
    ptr->show();
    ptr=&p2;                                                                               // late binding
    ptr->show();
    ptr=&p3;
    ptr->show();
    return 0;

}