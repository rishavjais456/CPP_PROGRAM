#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age of person"<<endl;
    cin>>age;
    if(age<10)
    cout<<"Child person"<<endl;
    else if(age>12 && age<18)
    cout<<"teenager age"<<endl;
    else if(age>18)
     cout<<"adult man"<<endl;

    return 0;

}