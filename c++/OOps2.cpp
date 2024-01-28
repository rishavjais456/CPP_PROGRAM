#include<iostream>
using namespace std;
class animal{
  public:
  void sound();
  
};
void animal::sound(){
    cout<<"Lots of animal";
}

int main(){
    animal a1;
    a1.sound();
    return 0;
}
