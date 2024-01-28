#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
    rectangle(){                                     //defoult construs=ctor
        l=0;
        b=0;
    }
    rectangle(int x,int y){                           // parametric constructor
        l=x;
        b=y;
    }
    rectangle(rectangle& r5) {    
        cout<<"copy constructorcalled"<<endl;                        //copy constructor
        l=r5.l;
        b=r5.b;
    }   
    ~rectangle(){                                        //destructor ->call whenever something is delete
        cout<<"deleted"<<endl;
    }   

};
int main()
{   rectangle *d=new rectangle;
    cout<<d->l<<" "<<d->b<<endl;
    delete d;
    rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;
    rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}