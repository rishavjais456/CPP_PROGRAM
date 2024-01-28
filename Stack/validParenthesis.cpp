#include<iostream>
#include<stack>
using namespace std;

int main() {
    string s = "{[())]}";
    stack<char> ch;
if(s.length()%2!=0){
    cout<<"invalid";
    return 0;
}
    for (char i : s) {
        if (i == '(' || i == '[' || i == '{') {
            ch.push(i);
        } else if (!ch.empty() && ((i == ']' && ch.top() == '[') || (i == '}' && ch.top() == '{') || (i == ')' && ch.top() == '('))) {
            ch.pop();
        }
    }

    if (ch.empty()) {
        cout << "valid";
    } else {
        cout << "invalid";
    }

    return 0;
}
