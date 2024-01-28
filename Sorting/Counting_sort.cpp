#include<iostream>
#include<vector>
using namespace std;
void CountSort(vector<int>&v){
    int n=v.size();
    int maxe=INT_MIN;
    for(int i=0;i<n;i++){
        maxe=max(v[i],maxe);
    }
    vector<int>fre(maxe+1,0);
    for(int i=0;i<n;i++){
        fre[v[i]]++;
    }
    for(int i=1;i<=maxe;i++){
        fre[i]+=fre[i-1];
    }
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--fre[v[i]]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
int main(){
    int n;
    cout<<"Enter the total element"<<endl;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    CountSort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}