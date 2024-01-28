#include<iostream>
using namespace std;
int main()
{
    // int i=5;
    // int &j=i;
    // int n;
    // //int *arr=new int [n];
    // int arr[n];
    // printf("%d",j);
    // cin>>n;
    // for(int i=0;i<n;i++){

    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "<<endl;
    // }
    int row;
    cin>>row;
    int col;
    cin>>col;
    int **arr=new int *[row];                //creating a 2d matrix
    for(int i=0;i<row;i++){
        arr[i]=new int[col];                 //new--> memory allocate in heap
    }
    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //printing output
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
  return 0;
}