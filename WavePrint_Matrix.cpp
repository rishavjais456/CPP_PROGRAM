#include<iostream>
using namespace std;
int main()
{
    int a[10][10],row,col;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of column:"<<endl;
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }    
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=col;i++){
        if(i%2!=0){
            for(int j=row-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        else
        for(int k=0;k<row;k++){
                cout<<a[k][i]<<" ";
            }
    }
    return 0;
}