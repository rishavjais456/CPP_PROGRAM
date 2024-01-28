#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    // vector<int>a(5,1);
    // vector<int>last(v);
    cout<<"size:"<<v.capacity()<<endl;
    v.push_back(1);
     cout<<"size:"<<v.capacity()<<endl;
    v.push_back(2);
     cout<<"size:"<<v.capacity()<<endl;
    v.push_back(3);
     cout<<"size:"<<v.capacity()<<endl;
    cout<<"capacity:"<<v.size()<<endl;
    cout<<"front:"<<v.front()<<endl;
cout<<"back:"<<v.back()<<endl;
v.pop_back();
for(int i:v){
cout<<"after pop:"<<i<<endl;
}

}