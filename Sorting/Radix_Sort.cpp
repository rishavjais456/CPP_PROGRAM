#include<iostream>
#include<vector>
using namespace std;
void countsort(vector<int>&v,int pos){
int n=v.size();
vector<int>fre(10.0);
for(int i=0;i<n;i++){
    fre[(v[i]/pos)%10]++;
}
for(int i=1;i<10;i++){
    fre[i]+=fre[i-1];
}
vector<int>ans(n);
for(int i=n-1;i>=0;i--){
    ans[--fre[(v[i]/pos)%10]]=v[i];
}
for(int i=0;i<n;i++){
    v[i]=ans[i];
}
}
void radixsort(vector<int>&v){
    int maxele=INT_MIN;
    for(auto x:v){
        maxele=max(x,maxele);
    }
    for(int pos=1;maxele/pos>0;pos*=10){
        countsort(v,pos);
    }
}
int main(){
    int n;
    cout<<"enter the total element"<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    radixsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}