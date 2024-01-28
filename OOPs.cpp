#include<iostream>
using namespace std;
class Hero{
   // properties
private:
   int health;  
public:                                                                                             //acces modifieres -->by defoult it is private ,public,protected
   char level;
   int gethealth() {
    return health;
   }
   char getlevel() {
    return level;
   }
   void sethealth(int h) {
     health=h;
   }
   void setlevel(char ch ) {
     level=ch;
   }
};
int main()
{
    //static allocation
    Hero h1;
    h1.sethealth(223);
    h1.level=('b');
    cout<<"health is:"<<h1.gethealth()<< endl;
    cout<<"level is:"<<h1.level<< endl;
   //dynamic allocaton
   Hero *b=new Hero;
  b->setlevel('b');
  b->sethealth(27);
    cout<<"health is:"<<(*b).gethealth()<< endl;
    cout<<"level is:"<<(*b).level<< endl;
    
                                                                                           // h1 is object
  
    cout<<"size of h1 is:"<<sizeof(h1)<<endl;                                                                            // size is 8;padding greading
    return 0;
}