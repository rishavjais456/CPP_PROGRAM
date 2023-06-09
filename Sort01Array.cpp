#include<iostream>
#include<vector>
using namespace std;
void Sort01Array(vector<int> &v)
{
    int count_Zeros=0;
    for(int ele:v){
        if(ele==0)
        count_Zeros++;
    }
    for(int i=0;i<v.size();i++){
        if(i<count_Zeros)
        v[i]=0;
        else
        v[i]=1;
    }
}
    
int main()
{
    int n;
    cout<<"Enter total digit"<<endl;
    cin>>n;
    cout<<"Enter Array element in 0 & 1"<<endl;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      int ele;cin>>ele;
     v.push_back(ele);
    }
    Sort01Array(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        
    }

}