#include<iostream>
using namespace std;
class students{
   public:
   int n1,n2,n3;
   char ch;
   students():n1(23),n2(34),n3(34),ch('a')
   {
      
   }
};
int main(){
    students s1;
    cout<<s1.n1 <<s1.n2 <<s1.n3<<s1.ch;
}