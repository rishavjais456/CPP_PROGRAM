#include<iostream>
using namespace std;
int main()
{
    int a=6,b=5;
    cout<<"a&b : "<<(a&b)<<endl;                                                            //a AND b
    cout<<"a|b : "<<(a|b)<<endl;                                                            //a OR b
    cout<<"a^b : "<<(a^b)<<endl;                                                            //a XOR b
    cout<<"~a : "<<(~a)<<endl;                                                          //2s complement binary number
    cout<<"a<<2 : "<<(a<<1)<<endl;                                                      //every bit in binary number is leftshit by 2
    cout<<"a>>2 : "<<(a>>2)<<endl;                                                   //every bit in binary number is rightshit by 2
    return 0;                                                                            
}