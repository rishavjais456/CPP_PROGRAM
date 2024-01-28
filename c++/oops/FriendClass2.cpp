#include<iostream>
using namespace std;
class person2;
class Person{
    private:
    int money=23;
    friend void person3(Person,person2);

};
class person2{
    private:
    int money2=20;
     friend void person3(Person,person2);
};
void person3(Person a,person2 b){
    cout<<a.money+b.money2;
}
int main()
{
    Person a;person2 b;
    person3(a,b);
    return 0;
}