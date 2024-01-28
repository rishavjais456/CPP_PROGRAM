#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="this,,, .....is ,a boo";
    remove(s.begin(), s.end(), ' ');
     remove(s.begin(), s.end(), ',');
     remove(s.begin(),s.end(),'.');
    cout<<s;
    return 0;
}