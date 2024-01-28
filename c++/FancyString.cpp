#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Riiiiiishhhhaaavvvv";
    string ans="";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==s[i+1] && s[i]==s[i+2]){
            continue;
        }
        ans+=s[i];
    }
    // ans+=s[s.length()-2];
    // ans+=s[s.length()-1];
    cout<<ans;
    
}