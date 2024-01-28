#include<iostream>
using namespace std;
class person1{
      public:

      virtual void show()=0;                                        //pure virtual function we can't create obj ;

};                                                                   
class person2:public person1{
public:
void show(){
    cout<<"this is person 2"<<endl;                              //If we do not override the pure virtual function in the derived class,
}                                                                // then the derived class also becomes an abstract class.
};
class person3:public person2{
    public:
    void show(){
cout<<"this is person 3"<<endl;
    }
    
};
int main(){
    person1 *p1;
    person2 p2;
    person3 p3;
    p1=&p2;
    p1->show();
    p1=&p3;
    p1->show();
    return 0;
}