#include<iostream>
using namespace std;
bool checkPalindromee(string name,int i,int j){
    if(i>j)
    return true;
    
    if(name[i]!=name[j])
    return false;
    else
    return checkPalindromee(name,i=1,j-1);
}
int main()
{
    string name="abba";
    bool isPossible=checkPalindromee(name,0,name.length()-1);
    if(isPossible){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    return 0;
}