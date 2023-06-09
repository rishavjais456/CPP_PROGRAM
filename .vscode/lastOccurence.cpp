#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    cout<<"Enter elements to know last position :";
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x value:"<<endl;
    cin>>x;
    int occurence=0;
    //for(int i=0;i<v.size();i++)
    for(int i=v.size()-1;i>=0;i--)
    {
        if(x==v[i]){
            occurence=i;
            break;
        }
    }
    cout<<"last occurence of x is at index:"<<occurence;
    return 0;
}